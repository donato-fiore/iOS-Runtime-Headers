// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETCAMERAVIEW_H
#define OKWIDGETCAMERAVIEW_H

@class AVCaptureSession, AVCaptureDeviceInput, NSString;
@protocol OS_dispatch_queue;


#import "OKWidgetView.h"
#import "OKWidgetCameraPreviewView.h"

@interface OKWidgetCameraView : OKWidgetView {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    id *_runtimeErrorHandlingObserver;
    OKWidgetCameraPreviewView *_previewView;
    NSInteger _inputType;
    NSString *_inputDeviceName;
    float _volume;
}


@property (nonatomic, getter=isDeviceAuthorized) BOOL deviceAuthorized; // ivar: _deviceAuthorized
@property (nonatomic) id *deviceConnectedObserver; // ivar: _deviceConnectedObserver
@property (nonatomic) id *deviceDisconnectedObserver; // ivar: _deviceDisconnectedObserver
@property (readonly, nonatomic, getter=isSessionRunningAndDeviceAuthorized) BOOL sessionRunningAndDeviceAuthorized;


+(id)deviceWithInputType:(NSInteger)arg0 inputDeviceName:(id)arg1 ;
+(id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(id)initWithWidget:(id)arg0 ;
-(void)__stopRunning;
-(void)_prepareSessionIfNeeded;
-(void)_startRunning;
-(void)_stopRunning;
-(void)checkDeviceAuthorizationStatus;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSettingInput:(NSInteger)arg0 ;
-(void)setSettingInputDeviceName:(id)arg0 ;
-(void)setSettingVolume:(float)arg0 ;


@end


#endif