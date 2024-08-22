// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSCREENCAPTUREFIGCAPTURECONTROLLER_H
#define VCSCREENCAPTUREFIGCAPTURECONTROLLER_H

@class FigScreenCaptureController, NSString;
@protocol FigScreenCaptureFrameHandlerDelegate, VCScreenCaptureSource, VCScreenCaptureSourceDelegate;


#import "VCObject.h"

@interface VCScreenCaptureFigCaptureController : VCObject <FigScreenCaptureFrameHandlerDelegate, VCScreenCaptureSource>

 {
    NSObject<VCScreenCaptureSourceDelegate> *_delegate;
    FigScreenCaptureController *_captureControllerSession;
    BOOL _shouldClearScreen;
    _opaque_pthread_mutex_t _stateMutex;
    BOOL _isRunning;
    _VCScreenCaptureSourceContext _frameCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 screenCaptureSourceContext:(struct _VCScreenCaptureSourceContext *)arg1 ;
-(int)pauseScreenCapture:(BOOL)arg0 ;
-(int)startScreenCaptureWithConfig:(id)arg0 ;
-(int)stopScreenCapture;
-(void)callbackWithEventString:(id)arg0 ;
-(void)dealloc;
-(void)finalize;
-(void)screenCaptureController:(id)arg0 didFailWithStatus:(int)arg1 ;
-(void)screenCaptureController:(id)arg0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(NSUInteger)arg2 ;
-(void)screenCaptureControllerDidReceiveClearScreen:(id)arg0 ;
-(void)screenCaptureControllerMediaServicesWereReset:(id)arg0 ;
-(void)screenCaptureControllerWasPreempted:(id)arg0 ;
-(void)setIsRunning:(BOOL)arg0 ;
-(void)shouldClearScreen:(BOOL)arg0 ;


@end


#endif