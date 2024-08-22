// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRIMAGECONVERSIONUTILS_H
#define FCRIMAGECONVERSIONUTILS_H


#import <Foundation/Foundation.h>


@interface FCRImageConversionUtils : NSObject



+(char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 dispatchQueue:(id)arg2 ;
+(char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg0 ;
+(char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 dispatchQueue:(id)arg2 cacheContext:(BOOL)arg3 ;
+(char *)convertCGImageToGrayscale:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 cacheContext:(BOOL)arg2 ;


@end


#endif