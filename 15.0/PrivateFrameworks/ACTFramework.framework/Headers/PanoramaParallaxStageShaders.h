// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PANORAMAPARALLAXSTAGESHADERS_H
#define PANORAMAPARALLAXSTAGESHADERS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PanoramaParallaxStageShaders : NSObject

@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *applyWarpToSlice; // ivar: _applyWarpToSlice
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *computePreShifts; // ivar: _computePreShifts
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *downsampleShifts; // ivar: _downsampleShifts


-(id)initWithContext:(id)arg0 ;


@end


#endif