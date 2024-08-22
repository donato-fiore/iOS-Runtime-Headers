// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRSHADERS_H
#define VNRSHADERS_H

@protocol MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface VNRShaders : NSObject {
    id<MTLLibrary> *_library;
}


@property (readonly) NSObject<MTLComputePipelineState> *chromaInDownsample; // ivar: _chromaInDownsample
@property (readonly) NSObject<MTLComputePipelineState> *chromaInOutDownsampleDeghost; // ivar: _chromaInOutDownsampleDeghost
@property (readonly) NSObject<MTLComputePipelineState> *deghostPropagateLuma; // ivar: _deghostPropagateLuma
@property (readonly) NSObject<MTLComputePipelineState> *deghostPropagateLumaChroma; // ivar: _deghostPropagateLumaChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionBottomChroma; // ivar: _fusionBottomChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionBottomLuma; // ivar: _fusionBottomLuma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialBottomChroma; // ivar: _fusionInitialBottomChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialBottomLuma; // ivar: _fusionInitialBottomLuma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialMidChroma; // ivar: _fusionInitialMidChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialMidLuma; // ivar: _fusionInitialMidLuma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialTopChroma; // ivar: _fusionInitialTopChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionInitialTopLuma; // ivar: _fusionInitialTopLuma
@property (readonly) NSObject<MTLComputePipelineState> *fusionMidChroma; // ivar: _fusionMidChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionMidLuma; // ivar: _fusionMidLuma
@property (readonly) NSObject<MTLComputePipelineState> *fusionTopChroma; // ivar: _fusionTopChroma
@property (readonly) NSObject<MTLComputePipelineState> *fusionTopLuma; // ivar: _fusionTopLuma
@property (readonly) NSObject<MTLComputePipelineState> *lumaInDownsample; // ivar: _lumaInDownsample
@property (readonly) NSObject<MTLComputePipelineState> *lumaInOutDownsampleDeghost; // ivar: _lumaInOutDownsampleDeghost
@property (readonly) NSObject<MTLComputePipelineState> *simpleCopy; // ivar: _simpleCopy


-(id)createFusionShaderUsingMetalDevice:(id)arg0 colorChannel:(int)arg1 isFirstFrame:(BOOL)arg2 isTopBand:(BOOL)arg3 isBottomBand:(BOOL)arg4 ;
-(id)initWithMetalDevice:(id)arg0 ;


@end


#endif