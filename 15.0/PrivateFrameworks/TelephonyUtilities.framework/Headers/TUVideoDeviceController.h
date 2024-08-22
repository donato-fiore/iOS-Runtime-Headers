// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUVIDEODEVICECONTROLLER_H
#define TUVIDEODEVICECONTROLLER_H

@class NSArray, AVCaptureDevice, CALayer;
@protocol TUVideoDeviceControllerProviderDelegate, TUVideoDeviceControllerProvider><TUVideoEffectsProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TUVideoEffect.h"

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate>



@property (nonatomic) BOOL allowsCameraBlurToggling;
@property (readonly, copy, nonatomic) NSArray *availableVideoEffects;
@property (nonatomic) BOOL cameraBlurEnabled;
@property (readonly, nonatomic, getter=isCinematicFramingEnabled) BOOL cinematicFramingEnabled;
@property (retain, nonatomic) AVCaptureDevice *currentInputDevice;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (nonatomic) int currentVideoOrientation;
@property (nonatomic) BOOL hasRefreshedPreviewAfterError; // ivar: _hasRefreshedPreviewAfterError
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (readonly, nonatomic) CGRect localScreenContentsRect;
@property (readonly, nonatomic) CGSize localScreenLandscapeAspectRatio; // ivar: _localScreenLandscapeAspectRatio
@property (readonly, nonatomic) CGSize localScreenPortraitAspectRatio;
@property (readonly, nonatomic) CGSize localVideoLandscapeAspectRatio;
@property (readonly, nonatomic) CGSize localVideoPortraitAspectRatio;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly, nonatomic) NSObject<TUVideoDeviceControllerProvider><TUVideoEffectsProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) BOOL supportsCameraBlur;
@property (nonatomic) BOOL wantsPreview; // ivar: _wantsPreview


+(int)_tuOrientationForVideoOrientation:(int)arg0 ;
+(int)_videoOrientationForTUOrientation:(int)arg0 ;
+(void)prewarm;
-(id)debugDescription;
-(id)init;
-(id)initWithProvider:(id)arg0 serialQueue:(id)arg1 ;
-(id)initWithSerialQueue:(id)arg0 ;
-(id)landscapeScreenAttributes;
-(id)portraitScreenAttributes;
-(struct CGSize )localLandscapePortraitAspectRatio;
-(void)captureDevicesChangedForProvider:(id)arg0 ;
-(void)didPausePreviewForProvider:(id)arg0 ;
-(void)didStartPreviewForProvider:(id)arg0 ;
-(void)didStopPreviewForProvider:(id)arg0 ;
-(void)flipCamera;
-(void)noteBeginAnimationToPIP;
-(void)noteBeginAnimationToPreview;
-(void)noteEndAnimationToPIP;
-(void)noteEndAnimationToPreview;
-(void)pausePreview;
-(void)provider:(id)arg0 cameraBlurEnabledDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraCinematicFramingAvailabilityDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraCinematicFramingEnabledDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)provider:(id)arg0 cameraZoomAvailabilityDidChange:(BOOL)arg1 ;
-(void)provider:(id)arg0 didChangeLocalVideoAttributes:(id)arg1 ;
-(void)provider:(id)arg0 didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)provider:(id)arg0 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)rampCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setLocalPortraitAspectRatio:(struct CGSize )arg0 localLandscapeAspectRatio:(struct CGSize )arg1 ;
-(void)startPreview;
-(void)stopPreview;


@end


#endif