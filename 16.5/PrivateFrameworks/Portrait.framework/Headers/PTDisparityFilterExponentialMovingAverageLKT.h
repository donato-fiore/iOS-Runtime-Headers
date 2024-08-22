// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDISPARITYFILTEREXPONENTIALMOVINGAVERAGELKT_H
#define PTDISPARITYFILTEREXPONENTIALMOVINGAVERAGELKT_H

@class NSString;
@protocol PTAbstractDisparityFilter, MTLDeviceSPI, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTOpticalFlow.h"
#import "PTUtil.h"

@interface PTDisparityFilterExponentialMovingAverageLKT : NSObject <PTAbstractDisparityFilter>

 {
    id<MTLDeviceSPI> *_device;
    id<MTLComputePipelineState> *_temporalFilterExponentialMovingAverageLKT;
    id<MTLComputePipelineState> *_copyDisparityWithBias;
    int _frameCount;
    ? _iirUpdateCoefficient;
    PTOpticalFlow *_opticalFlow;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    ? _disparitySize;
    ? _disparityFilteredSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initFilter:(id)arg0 ;
-(id)initWithCommandQueue:(id)arg0 disparitySize:(struct ? )arg1 disparityFilteredSize:(struct ? )arg2 disparityPixelFormat:(NSUInteger)arg3 colorSize:(struct ? )arg4 colorPixelFormat:(NSUInteger)arg5 sensorPort:(id)arg6 ;
-(int)copyDisparityWithBias:(id)arg0 inDisparity:(id)arg1 outDisparity:(id)arg2 disparityBias:(float)arg3 ;
-(int)exponentialMovingAverageFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 updateCoefficient:(float)arg5 disparityBias;
-(int)prepareFilter:(id)arg0 inRGBA:(id)arg1 outDisplacement:(id)arg2 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 disparityBias:(float)arg5 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inStatePrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 outState:(id)arg5 ;
-(void)reset;


@end


#endif