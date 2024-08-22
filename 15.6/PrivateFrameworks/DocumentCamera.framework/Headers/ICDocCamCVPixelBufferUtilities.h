// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMCVPIXELBUFFERUTILITIES_H
#define ICDOCCAMCVPIXELBUFFERUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICDocCamCVPixelBufferUtilities : NSObject



+(id)coreImageForPixelBuffer:(struct __CVBuffer *)arg0 colorSpace:(struct CGColorSpace *)arg1 ;
+(struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg0 colorSpace:(struct CGColorSpace *)arg1 ;
+(struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg0 colorSpace:(struct CGColorSpace *)arg1 copyMemory:(BOOL)arg2 ;


@end


#endif