// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV2RENDERSTATE_H
#define PTRAYTRACINGV2RENDERSTATE_H

@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>


@interface PTRaytracingV2RenderState : NSObject {
    int _quality;
}


@property (retain, nonatomic) NSObject<MTLComputePipelineState> *antialiasRGB; // ivar: _antialiasRGB
@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePoints; // ivar: _aperturePoints
@property (copy, nonatomic) NSString *description; // ivar: _description
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection


-(id)initWithDevice:(id)arg0 colorSize:(struct CGSize )arg1 quality:(int)arg2 library:(id)arg3 pipelineLibrary:(id)arg4 ;


@end


#endif