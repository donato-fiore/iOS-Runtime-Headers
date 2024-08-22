// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIHDRUTILITIES_H
#define PIHDRUTILITIES_H


#import <Foundation/Foundation.h>


@interface PIHDRUtilities : NSObject



+(BOOL)_renderImage:(id)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
+(struct __CVBuffer *)_newHLGPixelBufferOfSize:(struct CGSize )arg0 ;
+(struct __CVBuffer *)newHLGPixelBufferFromSDRImage:(struct CGImage *)arg0 ;
+(void)recycleHLGPixelBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif