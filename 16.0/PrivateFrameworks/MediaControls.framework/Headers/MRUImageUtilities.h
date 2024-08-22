// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUIMAGEUTILITIES_H
#define MRUIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface MRUImageUtilities : NSObject



+(BOOL)imageIsJPEG:(id)arg0 ;
+(NSInteger)subsampleFactorForMaxPixelSize:(NSInteger)arg0 imageSize:(struct CGSize )arg1 ;
+(id)formatImage:(id)arg0 forDisplayAtSize:(struct CGSize )arg1 ;
+(id)jpegDataForImage:(id)arg0 ;
+(id)resizedImage:(id)arg0 forFittingSize:(struct CGSize )arg1 ;
+(id)sourceDataForImage:(id)arg0 ;
+(struct CGSize )sizeFromSource:(struct CGImageSource *)arg0 ;


@end


#endif