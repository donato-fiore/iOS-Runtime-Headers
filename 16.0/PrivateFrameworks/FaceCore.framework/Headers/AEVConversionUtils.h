// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEVCONVERSIONUTILS_H
#define AEVCONVERSIONUTILS_H


#import <Foundation/Foundation.h>


@interface AEVConversionUtils : NSObject



+(char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 dispatchQueue:(id)arg2 ;
+(char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg0 ;
+(char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 dispatchQueue:(id)arg2 ;
+(char *)convertCGImageToGrayscale:(struct CGImage *)arg0 ;
+(char *)convertCGImageToGrayscale:(struct CGImage *)arg0 usingGCD:(BOOL)arg1 dispatchQueue:(id)arg2 ;
+(struct CGImage *)createImageFromGrayscaleData:(char *)arg0 ofWidth:(int)arg1 andHeight:(int)arg2 ;


@end


#endif