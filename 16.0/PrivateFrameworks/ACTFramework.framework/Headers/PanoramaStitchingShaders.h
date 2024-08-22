// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PANORAMASTITCHINGSHADERS_H
#define PANORAMASTITCHINGSHADERS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PanoramaStitchingShaders : NSObject

@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *computeCentralStitchingMask; // ivar: _computeCentralStitchingMask
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *computeSeamCost; // ivar: _computeSeamCost
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *initializeSeamPreviousSlice; // ivar: _initializeSeamPreviousSlice
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *initializeSeamPreviousSliceWithMask; // ivar: _initializeSeamPreviousSliceWithMask
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *seamCutAscend; // ivar: _seamCutAscend
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *seamCutDescend; // ivar: _seamCutDescend


-(id)initWithContext:(id)arg0 ;


@end


#endif