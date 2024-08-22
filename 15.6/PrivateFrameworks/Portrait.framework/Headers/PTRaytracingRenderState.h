// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGRENDERSTATE_H
#define PTRAYTRACINGRENDERSTATE_H

@class NSString;
@protocol MTLBuffer, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTSDOFPyramid.h"

@interface PTRaytracingRenderState : NSObject {
    int _quality;
    BOOL _enablePyramid;
}


@property (retain, nonatomic) PTSDOFPyramid *SDOFpyramid; // ivar: _SDOFpyramid
@property (copy, nonatomic) NSString *description; // ivar: _description
@property int rayCount; // ivar: _rayCount
@property int raymarchSteps; // ivar: _raymarchSteps
@property (retain, nonatomic) NSObject<MTLBuffer> *rays; // ivar: _rays
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection


-(id)initWithDevice:(id)arg0 colorSize:(struct CGSize )arg1 disparitySize:(struct CGSize )arg2 quality:(int)arg3 library:(id)arg4 pipelineLibrary:(id)arg5 ;


@end


#endif