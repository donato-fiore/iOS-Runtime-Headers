// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSIMAGEUTILITIES_H
#define WBSIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSImageUtilities : NSObject



+(BOOL)image:(id)arg0 isEqualToImage:(id)arg1 ;
+(BOOL)saveCGImage:(struct CGImage *)arg0 toFile:(id)arg1 options:(id)arg2 ;
+(id)_pixelDataForImage:(id)arg0 ;
+(id)flatImage:(id)arg0 withColor:(id)arg1 ;
+(id)handoffIconForDeviceType:(id)arg0 ;
+(id)resizedImage:(id)arg0 withSize:(struct CGSize )arg1 ;
+(id)safari_CGImageTypes;
+(id)squareThumbnailImageFromImage:(id)arg0 thumbnailWidthInPixels:(CGFloat)arg1 ;
+(struct CGSize )imageSizeScalingSize:(struct CGSize )arg0 proportionallyToFitSize:(struct CGSize )arg1 ;


@end


#endif