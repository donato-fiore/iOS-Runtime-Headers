// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXCAPTUREPREVIEWREQUESTBUILDER_H
#define JFXCAPTUREPREVIEWREQUESTBUILDER_H

@class PVColorSpace;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "JFXCapturePreviewProperties.h"

@interface JFXCapturePreviewRequestBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_selfieBGLoadQ;
    BOOL _logged_render_request_failure_animoji;
    BOOL _logged_render_request_failure_facetracking;
}


@property (readonly, nonatomic) PVColorSpace *outputColorSpace; // ivar: _outputColorSpace
@property (readonly, nonatomic) JFXCapturePreviewProperties *previewProperties; // ivar: _previewProperties
@property (nonatomic) PVTransformAnimationInfo requestTransformAnimation; // ivar: _requestTransformAnimation


-(id)JFX_getEffectsOfType:(id)arg0 ofType:(int)arg1 ;
-(id)JFX_visibleEffects:(id)arg0 ;
-(id)createPVRenderRequestUsingAnimojiRenderer:(id)arg0 metadataValidator:(id)arg1 additionalTransform:(struct CGAffineTransform )arg2 effectStack:(id)arg3 animojiTapPoint:(BOOL)arg4 requestHandler:(*id)arg5 ;
-(id)initWithPreviewProperties:(id)arg0 outputColorSpace:(id)arg1 ;


@end


#endif