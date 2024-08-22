// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAMERAVIEWFINDERSESSIONLOCAL_H
#define FIGCAMERAVIEWFINDERSESSIONLOCAL_H

@class NSString;
@protocol FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate, OS_dispatch_queue;


#import "FigCameraViewfinderSession.h"
#import "FigCameraViewfinderLocal.h"
#import "FigStateMachine.h"
#import "FigCaptureSessionProxy.h"
#import "FigCameraViewfinderStream.h"

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate>

 {
    FigCameraViewfinderLocal *_viewfinder;
    FigStateMachine *_stateMachine;
    BOOL _ended;
    FigCaptureSessionProxy *_captureSessionProxy;
    NSInteger _identifier;
    FigCameraViewfinderStream *_previewStream;
    NSObject<OS_dispatch_queue> *_previewStreamQueue;
    BOOL _previewStreamClosed;
    int _previewStreamClosedErrorStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)identifier;
-(id)_initWithOwningViewfinder:(id)arg0 captureSessionProxy:(id)arg1 delegateStorage:(id)arg2 ;
-(id)viewfinder;
-(void)_captureSessionDidCapturePhotoWithStatus:(int)arg0 thumbnailData:(id)arg1 timestamp:(struct ? )arg2 ;
-(void)_captureSessionDidStop;
-(void)cameraViewfinderStream:(id)arg0 didCloseWithStatus:(int)arg1 ;
-(void)cameraViewfinderStreamDidOpen:(id)arg0 ;
-(void)captureSession:(id)arg0 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)captureSessionPreviewTapDidClose:(id)arg0 ;
-(void)captureSessionPreviewTapDidOpen:(id)arg0 ;
-(void)closePreviewStream;
-(void)dealloc;
-(void)openPreviewStreamWithOptions:(id)arg0 ;


@end


#endif