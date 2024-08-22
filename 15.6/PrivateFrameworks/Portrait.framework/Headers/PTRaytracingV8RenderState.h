// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV8RENDERSTATE_H
#define PTRAYTRACINGV8RENDERSTATE_H

@class NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTRaytracingV8RenderState : NSObject {
    int _quality;
    NSString *_description;
}


@property (retain, nonatomic) NSObject<MTLComputePipelineState> *antialiasLuma; // ivar: _antialiasLuma
@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePoints; // ivar: _aperturePoints
@property (retain, nonatomic) NSObject<MTLTexture> *lumaRadiusTexture; // ivar: _lumaRadiusTexture
@property (retain, nonatomic) NSObject<MTLTexture> *lumaTexIntermediate; // ivar: _lumaTexIntermediate
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection


-(id)description;
-(id)initWithDevice:(id)arg0 colorWidth:(NSUInteger)arg1 colorHeight:(NSUInteger)arg2 quality:(int)arg3 library:(id)arg4 pipelineLibrary:(id)arg5 ;


@end


#endif