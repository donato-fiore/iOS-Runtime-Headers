// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PANORAMAASSEMBLYSHADERS_H
#define PANORAMAASSEMBLYSHADERS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PanoramaAssemblyShaders : NSObject

@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *addSliceToProjectiveGrid; // ivar: _addSliceToProjectiveGrid
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *addSliceToStaging; // ivar: _addSliceToStaging
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *addStagingToOutput; // ivar: _addStagingToOutput
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *prepareForDenoising; // ivar: _prepareForDenoising
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *resetPanoSizedState; // ivar: _resetPanoSizedState
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *resetSliceSizedState; // ivar: _resetSliceSizedState


-(id)initWithContext:(id)arg0 ;


@end


#endif