// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVCAMERAPREVIEWRENDERER_H
#define PVCAMERAPREVIEWRENDERER_H


#import <Foundation/Foundation.h>

#import "PVVideoCompositingContext.h"

@interface PVCameraPreviewRenderer : NSObject {
    HGRef<PVRenderManager> _renderManager;
    HGRef<HGRenderJob> _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}




-(id)getSharedEAGLContext;
-(id)init;
-(struct HGRef<HGGLContext> )rootContext;
-(struct HGRef<PVRenderManager> )renderManager;
-(void)dealloc;
-(void)enqueueRenderRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif