// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEVIEWCONTROLLER_H
#define NTKFACEVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSCache, NSDate, NSString, UIViewController<NTKClockStatusBarViewController>, NTKTritiumAnimationController, NTKTritiumController;
@protocol CLKSensitiveUIStateObserver, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver, OS_dispatch_source, NTKFaceViewControllerDelegate, NTKFaceViewControllerStatusBarDelegate;


#import "NTKFaceEditView.h"
#import "NTKDelayedBlock.h"
#import "NTKComplicationDisplayWrapperView.h"
#import "NTKComplicationController.h"
#import "NTKFaceEditColorPickerConfiguration.h"
#import "NTKEditOption.h"
#import "NTKFace.h"
#import "NTKFaceView.h"

@interface NTKFaceViewController : UIViewController <CLKSensitiveUIStateObserver, NTKClockIconZoomAnimator, NTKClockHardwareInput, NTKFaceViewDelegate, NTKFaceObserver>

 {
    os_unfair_lock_s _normalComplicationControllersLock;
    NSMutableDictionary *_normalComplicationControllers;
    os_unfair_lock_s _detachedComplicationControllersLock;
    NSMutableDictionary *_detachedComplicationControllers;
    NTKFaceEditView *_editView;
    BOOL _editingComplications;
    NSCache *_appearanceVariantsCache;
    NSCache *_informationVariantsCache;
    BOOL _frozen;
    BOOL _becomeLiveOnUnfreeze;
    NTKDelayedBlock *_delayedFreezeBlock;
    BOOL _readyToApplyConfiguration;
    BOOL _animatingVariant;
    BOOL _newValueWhileAnimating;
    NSUInteger _delayedAnimationValue;
    BOOL _deviceLocked;
    BOOL _sensitiveUIHidden;
    CGFloat _zoomingMinDiameter;
    CGFloat _zoomingMaxDiameter;
    NSDate *_scrubDate;
    NSObject<OS_dispatch_source> *_time_travel_update_timer;
    NTKComplicationDisplayWrapperView *_pptComplicationDisplay;
    NTKComplicationController *_pptComplicationController;
    BOOL _wantsRemoveUnadorned;
    BOOL _hasGoneLive;
    BOOL _hasUsedUnadornedSnapshot;
    BOOL _hasRemovedUnadornedSnapshot;
    NSString *_lastTappedSlotIdentifier;
    CGRect _faceLaunchRect;
    NTKFaceEditColorPickerConfiguration *_colorPickerConfig;
    NTKEditOption *_tombstoneColor;
    CGRect _editingFromFaceContainerFrame;
}


@property (nonatomic) NSInteger dataMode; // ivar: _dataMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKFaceViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exitingEditing; // ivar: _exitingEditing
@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (readonly, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreSnapshotImages; // ivar: _ignoreSnapshotImages
@property (readonly, nonatomic) BOOL isOrbDisabled; // ivar: _isOrbDisabled
@property (retain, nonatomic) NSDate *pauseDate; // ivar: _pauseDate
@property (nonatomic) BOOL shouldShowSnapshot; // ivar: _shouldShowSnapshot
@property (nonatomic) BOOL shouldUseSampleTemplate; // ivar: _shouldUseSampleTemplate
@property (nonatomic) BOOL showContentForUnadornedSnapshot; // ivar: _showContentForUnadornedSnapshot
@property (nonatomic) BOOL showsCanonicalContent; // ivar: _showsCanonicalContent
@property (nonatomic) BOOL showsLockedUI; // ivar: _showsLockedUI
@property (weak, nonatomic) NSObject<NTKFaceViewControllerStatusBarDelegate> *statusBarDelegate; // ivar: _statusBarDelegate
@property (retain, nonatomic) UIViewController<NTKClockStatusBarViewController> *statusBarViewController; // ivar: _statusBarViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL supressesNonSnapshotUI; // ivar: _supressesNonSnapshotUI
@property (readonly, nonatomic) NTKTritiumAnimationController *tritiumAnimationController; // ivar: _tritiumAnimationController
@property (readonly, nonatomic) NTKTritiumController *tritiumController; // ivar: _tritiumController


+(id)_controllerForComplication:(id)arg0 face:(id)arg1 slot:(id)arg2 ;
+(id)_createNormalDisplayForComplicationController:(id)arg0 slot:(id)arg1 face:(id)arg2 faceView:(id)arg3 ;
+(void)initialize;
-(BOOL)_handlePhysicalButton:(NSUInteger)arg0 event:(NSUInteger)arg1 ;
-(BOOL)_isCollectionPickerViewEnabled;
-(BOOL)_shouldHideFaceUI;
-(BOOL)_wheelChangedWithEvent:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canStopEditing;
-(BOOL)dailySnapshotShowsComplication:(id)arg0 forSlot:(id)arg1 ;
-(BOOL)faceView:(id)arg0 wantsToDismissPresentedViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)faceViewComplicationIsEmptyForSlot:(id)arg0 ;
-(BOOL)shouldLoadLiveFaceAtNextScreenOff;
-(id)PPTDescriptionForComplication:(id)arg0 ;
-(id)PPTUniqueComplicationsToSlotForCurrentFace;
-(id)_dailySnapshot;
-(id)_newNormalDisplayForComplicationController:(id)arg0 slot:(id)arg1 ;
-(id)_overrideDateForWake:(BOOL)arg0 ;
-(id)_selectedVisibleSlotForEditMode:(NSInteger)arg0 ;
-(id)_unadornedSnapshot;
-(id)blurSourceImage;
-(id)currentOrderedClockComplicationCounts;
-(id)faceViewComplicationAppIdentifierForSlot:(id)arg0 ;
-(id)faceViewComplicationForSlot:(id)arg0 ;
-(id)faceViewComplicationSlotsHiddenByEditOption:(id)arg0 ;
-(id)faceViewDidRequestCustomDataForKey:(id)arg0 ;
-(id)initWithFace:(id)arg0 configuration:(id)arg1 ;
-(id)removeStatusBarViewController;
-(id)tritium_complicationControllerForSlot:(id)arg0 ;
-(struct CGRect )launchRectForComplicationApplicationIdentifier:(id)arg0 ;
-(void)PPTCleanupLastComplication;
-(void)PPTCreateComplication:(id)arg0 forSlot:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)PPTPrepareComplicationTest;
-(void)_applyConfigurationWithDuration:(CGFloat)arg0 ;
-(void)_clearFaceLaunchRect;
-(void)_clearLastTappedComplication;
-(void)_configureBackgroundFillAlpha:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_ensureComplication:(id)arg0 forSlot:(id)arg1 ;
-(void)_ensureDetachedComplication:(id)arg0 ;
-(void)_ensureNormalComplication:(id)arg0 forSlot:(id)arg1 ;
-(void)_ensureNotLive;
-(void)_ensurePauseDate;
-(void)_faceSnapshotDidChange:(id)arg0 ;
-(void)_handleDeviceLockChange;
-(void)_handleStatusBarChange;
-(void)_insertDetachedComplicationDisplay:(id)arg0 controller:(id)arg1 forSlot:(id)arg2 ;
-(void)_insertNormalComplicationDisplay:(id)arg0 controller:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadInitialComplicationVisibilityFromFace;
-(void)_removeComplicationForSlot:(id)arg0 ;
-(void)_removeDetachedComplicationForSlot:(id)arg0 andDisconnectDisplay:(BOOL)arg1 ;
-(void)_removeNormalComplicationForSlot:(id)arg0 andDisconnectDisplay:(BOOL)arg1 ;
-(void)_showStatusBarAfterWake;
-(void)_updateInteractivityOfComplicationDisplays;
-(void)_validateIfCurrentSelectedColorStillExists;
-(void)_wrapperViewTapped:(id)arg0 ;
-(void)cleanupAfterOrb:(BOOL)arg0 ;
-(void)cleanupAfterZoom;
-(void)configureWithDuration:(CGFloat)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)disableSlowMode;
-(void)enableSlowMode;
-(void)enumerateComplicationControllersAndDisplaysWithBlock:(id)arg0 ;
-(void)face:(id)arg0 didChangeOptionsForEditMode:(NSInteger)arg1 ;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)faceResourceDirectoryDidChange:(id)arg0 ;
-(void)faceViewDidScrubToDate:(id)arg0 forced:(BOOL)arg1 ;
-(void)faceViewDidUpdateCustomData:(id)arg0 forKey:(id)arg1 ;
-(void)faceViewRequestedLaunchFromRect:(struct CGRect )arg0 ;
-(void)faceViewUpdatedResourceDirectory:(id)arg0 wantsToTransferOwnership:(BOOL)arg1 ;
-(void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(NSInteger)arg0 ;
-(void)faceViewWantsStatusBarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)faceViewWantsToPresentViewController:(id)arg0 ;
-(void)finalizeForSnapshotting:(id)arg0 ;
-(void)freeze;
-(void)freezeAfterDelay:(CGFloat)arg0 ;
-(void)getComplicationController:(*id)arg0 andDisplay:(*id)arg1 forSlot:(id)arg2 ;
-(void)handleOrdinaryScreenWake;
-(void)handleWristRaiseScreenWake;
-(void)hideFaceEditingUIAnimated:(BOOL)arg0 destination:(NSUInteger)arg1 ;
-(void)hideFaceEditingUIAnimated:(BOOL)arg0 destination:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)loadView;
-(void)performComplicationBackgroundDataRefresh;
-(void)performWristRaiseAnimation;
-(void)prepareForOrb;
-(void)prepareForSnapshotting;
-(void)prepareToZoomWithIconView:(id)arg0 minDiameter:(CGFloat)arg1 maxDiameter:(CGFloat)arg2 ;
-(void)prepareWristRaiseAnimation;
-(void)sensitiveUIStateChanged;
-(void)setZoomFraction:(CGFloat)arg0 iconDiameter:(CGFloat)arg1 ;
-(void)showEditingUIAnimated:(BOOL)arg0 fromZoomLevel:(NSUInteger)arg1 ;
-(void)statusBarDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unfreeze;
-(void)viewDidLayoutSubviews;


@end


#endif