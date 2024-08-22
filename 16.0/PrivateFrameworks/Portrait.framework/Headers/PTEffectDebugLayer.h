// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTEFFECTDEBUGLAYER_H
#define PTEFFECTDEBUGLAYER_H

@protocol MTLDevice, MTLLibrary, MTLPipelineLibrary, MTLCommandQueue, PTRenderState, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PTEffectRelighting.h"
#import "PTEffectFilter.h"
#import "PTOpticalFlow.h"
#import "PTUtil.h"
#import "PTColor.h"
#import "PTMSRResize.h"
#import "PTRenderEffectNetwork.h"

@interface PTEffectDebugLayer : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLCommandQueue> *_commandQueue;
    PTEffectRelighting *_effectRelighting;
    PTEffectFilter *_disparityNormalFilter;
    PTOpticalFlow *_opticalFlow;
    id<PTRenderState> *_renderState;
    PTUtil *_util;
    PTColor *_portraitColor;
    PTMSRResize *_msrColorPyramid;
    PTRenderEffectNetwork *_network;
    id<MTLTexture> *_disparityFixedFocus;
    float _focusDepthFixed;
    id<MTLBuffer> *_focusObject;
    int _width;
    int _height;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 effectRelighting:(id)arg4 disparityNormalFilter:(id)arg5 opticalFlow:(id)arg6 renderState:(id)arg7 util:(id)arg8 portraitColor:(id)arg9 msrColorPyramid:(id)arg10 network:(id)arg11 disparityFixedFocus:(id)arg12 focusDepthFixed:(float)arg13 focusObject:(id)arg14 ;
-(void)renderDebugInformation:(NSInteger)arg0 renderRequest:(id)arg1 humanDetections:(id)arg2 transform:(struct CGAffineTransform )arg3 ;
-(void)renderDebugSubjectRelighting:(id)arg0 humanDetections:(id)arg1 renderRequest:(id)arg2 transform:(struct CGAffineTransform )arg3 ;
-(void)renderThumbnails:(id)arg0 defaults:(id)arg1 renderRequest:(id)arg2 ;


@end


#endif