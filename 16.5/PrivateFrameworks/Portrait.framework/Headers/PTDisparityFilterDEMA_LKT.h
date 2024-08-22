// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDISPARITYFILTERDEMA_LKT_H
#define PTDISPARITYFILTERDEMA_LKT_H

@class NSString, NSArray;
@protocol PTAbstractDisparityFilter, MTLDeviceSPI, MTLComputePipelineState, MTLBuffer, MTLSamplerState;

#import <Foundation/Foundation.h>

#import "PTOpticalFlow.h"
#import "PTGlobalReduction.h"
#import "PTUtil.h"

@interface PTDisparityFilterDEMA_LKT : NSObject <PTAbstractDisparityFilter>

 {
    id<MTLDeviceSPI> *_device;
    id<MTLComputePipelineState> *_temporalFilterDEMA_LKT;
    id<MTLComputePipelineState> *_temporalFilterDEMA_LKT_VisualizeMotion;
    id<MTLComputePipelineState> *_resampleDisparity;
    int _frameCount;
    PTOpticalFlow *_opticalFlow;
    PTGlobalReduction *_globalReduction;
    id<MTLBuffer> *_avgDisplacement;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    ? _disparitySize;
    ? _disparityFilteredSize;
    float _direction;
    BOOL _motionVisualization;
    NSArray *_demaStates;
    id<MTLSamplerState> *_samplerState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initFilter:(id)arg0 ;
-(id)initFilter:(id)arg0 sensorPort:(id)arg1 ;
-(id)initWithCommandQueue:(id)arg0 disparitySize:(struct ? )arg1 disparityFilteredSize:(struct ? )arg2 disparityPixelFormat:(NSUInteger)arg3 colorSize:(struct ? )arg4 colorPixelFormat:(NSUInteger)arg5 sensorPort:(id)arg6 ;
-(int)copyDisparity:(id)arg0 inDisparity:(id)arg1 outDisparity:(id)arg2 ;
-(int)exponentialMovingAverageFilter:(id)arg0 inDisplacement:(id)arg1 inDemaPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 outDEMA:(id)arg5 ;
-(int)prepareFilter:(id)arg0 inRGBA:(id)arg1 outDisplacement:(id)arg2 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 disparityBias:(float)arg5 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inStatePrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 outState:(id)arg5 ;
-(void)reset;


@end


#endif