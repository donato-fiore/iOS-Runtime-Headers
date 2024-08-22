// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAMERAROLLCONTROLLER_H
#define CAMCAMERAROLLCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, PUOneUpPresentationHelper, PUPhotoKitDataSourceManager, PXPhotosDataSource, NSString, UIGestureRecognizer;
@protocol PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PHPhotoLibraryChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver, OS_dispatch_source, OS_dispatch_queue, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, CAMCameraRollControllerSessionDelegate;

#import <Foundation/Foundation.h>

#import "CAMTransientDataSource.h"
#import "CAMTransientImageManager.h"

@interface CAMCameraRollController : NSObject <PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PHPhotoLibraryChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver>

 {
    ? _presentationDelegateFlags;
}


@property (readonly, nonatomic) NSMutableDictionary *_HDRUUIDToIgnoredEV0UUIDs; // ivar: __HDRUUIDToIgnoredEV0UUIDs
@property (nonatomic, setter=_setAllowUpdating:) BOOL _allowUpdating; // ivar: __allowUpdating
@property (nonatomic, getter=_isDeferringStagedMediaLoading, setter=_setDeferringStagedMediaLoading:) BOOL _deferringStagedMediaLoading; // ivar: __deferringStagedMediaLoading
@property (nonatomic, setter=_setDidSetupMechanismsForStoppingCaptureSession:) BOOL _didSetupMechanismsForStoppingCaptureSession; // ivar: __didSetupMechanismsForStoppingCaptureSession
@property (nonatomic, setter=_setDidStopCaptureSession:) BOOL _didStopCaptureSession; // ivar: __didStopCaptureSession
@property (readonly, nonatomic) NSMutableSet *_ignoredEV0UUIDs; // ivar: __ignoredEV0UUIDs
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *_memoryWarningSource; // ivar: __memoryWarningSource
@property (nonatomic, getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:) BOOL _oneUpFullyPresented; // ivar: __oneUpFullyPresented
@property (readonly, nonatomic) PUOneUpPresentationHelper *_oneUpPresentationHelper; // ivar: __oneUpPresentationHelper
@property (nonatomic, getter=_isOneUpVisible, setter=_setOneUpVisible:) BOOL _oneUpVisible; // ivar: __oneUpVisible
@property (readonly, nonatomic) PUPhotoKitDataSourceManager *_photoKitDataSourceManager; // ivar: __photoKitDataSourceManager
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // ivar: __photosDataSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_photosFrameworksPreheatQueue; // ivar: __photosFrameworksPreheatQueue
@property (nonatomic, setter=_setPreheatQueue_shouldSkipPhotosFrameworkPreheat:) BOOL _preheatQueue_shouldSkipPhotosFrameworkPreheat; // ivar: __preheatQueue_shouldSkipPhotosFrameworkPreheat
@property (readonly, nonatomic) NSMutableSet *_sessionAssetUUIDs; // ivar: __sessionAssetUUIDs
@property (retain, nonatomic, setter=_setStagedDataSource:) PXPhotosDataSource *_stagedDataSource; // ivar: __stagedDataSource
@property (nonatomic, setter=_setTransientAssetsAreValid:) BOOL _transientAssetsAreValid; // ivar: __transientAssetsAreValid
@property (readonly, nonatomic) CAMTransientDataSource *_transientDataSource; // ivar: __transientDataSource
@property (readonly, nonatomic) CAMTransientImageManager *_transientImageManager; // ivar: __transientImageManager
@property (nonatomic, setter=_setUpdateIsScheduled:) BOOL _updateIsScheduled; // ivar: __updateIsScheduled
@property (readonly, nonatomic) BOOL canPresentCameraRollViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CAMCameraRollControllerImageWellDelegate> *imageWellDelegate; // ivar: _imageWellDelegate
@property (nonatomic, setter=_setPrefersPresentingStatusbarHidden:) BOOL prefersPresentingStatusbarHidden; // ivar: _prefersPresentingStatusbarHidden
@property (weak, nonatomic) NSObject<CAMCameraRollControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic, setter=_setPreviewGestureRecognizer:) UIGestureRecognizer *previewGestureRecognizer; // ivar: _previewGestureRecognizer
@property (weak, nonatomic) NSObject<CAMCameraRollControllerSessionDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (nonatomic, setter=_setSessionIdentifier:) unsigned short sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


-(BOOL)_isPasscodeLocked;
-(BOOL)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg0 ;
-(BOOL)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg0 ;
-(BOOL)dismissCameraRollViewControllerForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)isCameraRollViewControllerPresented;
-(BOOL)isCaptureSessionCurrent:(unsigned short)arg0 ;
-(BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg0 ;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg0 ;
-(NSInteger)oneUpPresentationHelperPreferredBarStyle:(id)arg0 ;
-(NSInteger)oneUpPresentationHelperPreferredPresentationOrientation:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)_cameraRollCollectionListFetchResult;
-(id)init;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(id)persistedThumbnailImage;
-(id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint )arg0 inSourceView:(id)arg1 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(struct CGRect )oneUpPresentationHelper:(id)arg0 rectForAssetReference:(id)arg1 cropInsets:(struct UIEdgeInsets *)arg2 contentsRect:(struct CGRect *)arg3 ;
-(void)_cancelDelayedStopCaptureSession;
-(void)_ensureCameraRollViewController;
-(void)_invalidateTransientAssets;
-(void)_registerBrowsingViewModelChangeObserver;
-(void)_scheduleStopCaptureSessionAfterDelay:(CGFloat)arg0 ;
-(void)_scheduleUpdateIfOneUpIsActive;
-(void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
-(void)_setupMemoryWarningNotificationsIfNecessary;
-(void)_startNewSession;
-(void)_stopCaptureSessionIfNecessary;
-(void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
-(void)_stopCaptureSessionIfNecessaryFromTimeout;
-(void)_tearDownMemoryWarningNotifications;
-(void)_teardownMechanismsForStoppingCaptureSession;
-(void)_unregisterBrowsingViewModelChangeObserver;
-(void)_update;
-(void)_updateTransientDataSourceIfNeeded;
-(void)animateRevealWithInteractionProgress:(id)arg0 forPreviewingAtLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 containerView:(id)arg3 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationResumed:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)beginAllowingStagedMediaLoading;
-(void)cameraPreviewWellImageDidChange:(id)arg0 ;
-(void)clearIgnoredImageWellUUIDs;
-(void)dealloc;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didPersistAssetWithUUID:(id)arg0 captureSession:(unsigned short)arg1 ;
-(void)handlePresentingPanGestureRecognizer:(id)arg0 ;
-(void)ignoreImageWellChangeNotificationForEV0UUID:(id)arg0 withHDRUUID:(id)arg1 ;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 didDismissOneUpViewController:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 previewScrubberDidBecomeAvailable:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 shouldHideAssetReferences:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 willPresentOneUpViewController:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)ppt_awaitPreload:(id)arg0 ;
-(void)preload;
-(void)presentCameraRollViewControllerAnimated:(BOOL)arg0 interactive:(BOOL)arg1 deferringStagedMediaLoading:(BOOL)arg2 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)processPendingBursts;
-(void)processTransientAssetUpdate:(id)arg0 preventingInsertion:(BOOL)arg1 ;
-(void)processTransientPairedVideoUpdate:(id)arg0 filterType:(NSInteger)arg1 ;
-(void)resetNavigation;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)willPersistAssetWithUUID:(id)arg0 captureSession:(unsigned short)arg1 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif