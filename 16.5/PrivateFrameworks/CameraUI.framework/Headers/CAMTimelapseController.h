// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTIMELAPSECONTROLLER_H
#define CAMTIMELAPSECONTROLLER_H

@class NSCountedSet, NSMutableSet, NSDate, NSString;
@protocol CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol, OS_dispatch_source, CAMTimelapseControllerDelegate;

#import <Foundation/Foundation.h>

#import "CUCaptureController.h"
#import "CAMCaptureGraphConfiguration.h"
#import "CAMLibrarySelectionController.h"
#import "CAMLocationController.h"
#import "CAMMotionController.h"
#import "CAMNebulaDaemonProxyManager.h"
#import "CAMPersistenceController.h"
#import "CAMTimelapseState.h"
#import "CAMStorageController.h"
#import "CAMFocusResult.h"

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol>



@property (nonatomic, setter=_setBackendRecoveryNeeded:) BOOL _backendRecoveryNeeded; // ivar: __backendRecoveryNeeded
@property (readonly, nonatomic) CUCaptureController *_captureController; // ivar: __captureController
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // ivar: __captureTimer
@property (nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) BOOL _focusAndExposureAdjusted; // ivar: __focusAndExposureAdjusted
@property (readonly, nonatomic, getter=_graphConfigurationForCurrentState) CAMCaptureGraphConfiguration *_graphConfigurationForCurrentState; // ivar: __graphConfigurationForCurrentState
@property (readonly, nonatomic) *ct_green_tea_logger_s _greenTeaLogger; // ivar: __greenTeaLogger
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksForTearDown; // ivar: __ignoringTimerCallbacksForTearDown
@property (readonly, nonatomic) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse; // ivar: __ignoringTimerCallbacksWaitingForCaptureResponse
@property (readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // ivar: __inFlightTimelapseUUIDs
@property (readonly, nonatomic) CAMLibrarySelectionController *_librarySelectionController; // ivar: __librarySelectionController
@property (readonly, nonatomic) CAMLocationController *_locationController; // ivar: __locationController
@property (readonly, nonatomic) CAMMotionController *_motionController; // ivar: __motionController
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // ivar: __nebulaDaemonProxyManager
@property (readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // ivar: __pendingCompletedStates
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // ivar: __persistenceController
@property (nonatomic, setter=_setPreviewStarted:) BOOL _previewStarted; // ivar: __previewStarted
@property (nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes; // ivar: __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes
@property (readonly, nonatomic) CAMTimelapseState *_state; // ivar: __state
@property (readonly, nonatomic) CAMStorageController *_storageController; // ivar: __storageController
@property (readonly, nonatomic) NSDate *captureStartTime;
@property (readonly, nonatomic, getter=isCapturing) BOOL capturing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMTimelapseControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CAMFocusResult *lastFocusResult; // ivar: _lastFocusResult
@property (readonly) Class superclass;


+(id)createPlaceholderResultForTimelapseState:(id)arg0 ;
+(struct __IOSurface *)_newVideoPreviewSurfaceForTimelapseState:(id)arg0 ;
-(BOOL)_canCapturePhoto;
-(BOOL)_enqueueCaptureRequest;
-(BOOL)startCapturingWithCaptureDevice:(NSInteger)arg0 captureSession:(unsigned short)arg1 ;
-(BOOL)stopCapturingWithReasons:(NSInteger)arg0 ;
-(id)_createThumbnailImageFromPlaceholderResult:(id)arg0 ;
-(id)_stillImageCaptureRequestWithCurrentSettings;
-(id)init;
-(id)initWithCaptureController:(id)arg0 locationController:(id)arg1 motionController:(id)arg2 persistenceController:(id)arg3 storageController:(id)arg4 librarySelectionController:(id)arg5 nebulaDaemonProxyManager:(id)arg6 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_deviceStarted:(id)arg0 ;
-(void)_invalidateCachedGraphConfiguration;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(NSInteger)arg0 availableBytes:(NSInteger)arg1 ;
-(void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg0 ;
-(void)_previewStarted:(id)arg0 ;
-(void)_reserveDiskSpaceForTimelapseUUID:(id)arg0 preferHEVC:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_restoreCaptureStateFromDisk;
-(void)_saveStateToDisk:(id)arg0 ;
-(void)_sessionRuntimeErrored:(id)arg0 ;
-(void)_sessionStarted:(id)arg0 ;
-(void)_setNewCaptureStateForCaptureDevice:(NSInteger)arg0 captureSession:(unsigned short)arg1 ;
-(void)_startCaptureTimer;
-(void)_startCapturingWithCaptureDevice:(NSInteger)arg0 captureSession:(unsigned short)arg1 ;
-(void)_stopCapturingWithReasons:(NSInteger)arg0 ;
-(void)_teardownCaptureTimer;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(void)_updateFocusAndExposureForStartCapturing;
-(void)_updateFocusLensPosition:(float)arg0 forTimelapseUUID:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_updateLocationIfNecessary;
-(void)dealloc;
-(void)forceStopTimelapseCaptureWithReasons:(NSInteger)arg0 ;
-(void)restoreConfiguration;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;


@end


#endif