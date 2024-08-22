// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSTHUMBNAILGENERATOR_H
#define BPSTHUMBNAILGENERATOR_H


#import <Foundation/Foundation.h>


@interface BPSThumbnailGenerator : NSObject



+(BOOL)writeScaledCPBitmapForImage:(id)arg0 desiredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 withPath:(id)arg3 ;
+(BOOL)writeScaledPNGForImage:(id)arg0 desiredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 withPath:(id)arg3 ;
+(id)scaledImageForImage:(id)arg0 desiredSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;


@end


#endif