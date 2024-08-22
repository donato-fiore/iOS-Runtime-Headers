// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTLOCATIONDOWNSAMPLER_H
#define RTLOCATIONDOWNSAMPLER_H


#import <Foundation/Foundation.h>


@interface RTLocationDownsampler : NSObject



// +(id)_downsampleLocations:(id)arg0 errorFunction:(id)arg1 errorThreshold:(unk)arg2  ;
// +(id)_downsampleLocations:(id)arg0 errorFunction:(id)arg1 outputSize:(unk)arg2  ;
+(id)createErrorFunctionWithPerpendicularDistance:(SEL)arg0 ;
+(id)createErrorFunctionWithPerpendicularDistanceAndSpeed:(SEL)arg0 ;
// +(id)downsampleLocations:(id)arg0 errorFunction:(id)arg1 errorThreshold:(unk)arg2 outputSize:(CGFloat)arg3  ;
+(id)downsampleLocations:(id)arg0 outputSize:(NSUInteger)arg1 ;
+(id)filterConvergingLocations:(id)arg0 ;


@end


#endif