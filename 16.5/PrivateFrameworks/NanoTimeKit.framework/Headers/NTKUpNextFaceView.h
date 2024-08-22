// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUPNEXTFACEVIEW_H
#define NTKUPNEXTFACEVIEW_H

@class UICollectionViewDiffableDataSource, REUIRelevanceEngineController, UITapGestureRecognizer, NSTimer, NSArray, UIImage, UIView, NSMutableSet, NSOrderedSet, REUpNextScheduler, NSSet, NSDiffableDataSourceSnapshot, NSString;
@protocol REUIRelevanceEngineControllerDelegate, REElementActionDelegate, REUIElementIntentActionDelegate, CLKSensitiveUIStateObserver, CLKMonochromeFilterProvider, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate;


#import "NTKDigitalFaceView.h"
#import "NTKDigitalTimeLabelStyle.h"
#import "NTKUtilityComplicationFactory.h"
#import "NTKUpNextCollectionView.h"
#import "NTKUpNextCollectionViewFlowLayout.h"

@interface NTKUpNextFaceView : NTKDigitalFaceView <REUIRelevanceEngineControllerDelegate, REElementActionDelegate, REUIElementIntentActionDelegate, CLKSensitiveUIStateObserver, CLKMonochromeFilterProvider, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

 {
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_timeLabelSmallInUpperRightCornerStyle;
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKUpNextCollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_collectionViewDataSource;
    NTKUpNextCollectionViewFlowLayout *_layout;
    REUIRelevanceEngineController *_engineController;
    UITapGestureRecognizer *_viewModeTapGesture;
    NSInteger _previousViewMode;
    NSTimer *_viewResetTimer;
    NSTimer *_positiveDwellForTopElementsTimer;
    NSTimer *_wakeWheelTimer;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    CGFloat _lastCrownVelocity;
    CGFloat _accumulatedCrownDelta;
    NSArray *_complicationDisplays;
    BOOL _isAnimating;
    UIImage *_cellContentBackground;
    UIView *_timeLabelPlatter;
    UIView *_scalableView;
    BOOL _needsReloadedContent;
    BOOL _hasDeferredUpdate;
    BOOL _isApplyingSnapshot;
    BOOL _isApplyingBatchUpdate;
    BOOL _isInflightScroll;
    BOOL _cancelInflightScroll;
    BOOL _isProgramaticScrollEvent;
    BOOL _crownInverted;
    BOOL _suppressCrownEvents;
    BOOL _isBacklightOn;
    NSMutableSet *_reloadedElements;
    NSOrderedSet *_currentApplicationIdentifiers;
    REUpNextScheduler *_applicationIdentifierUpdateScheduler;
    NSSet *_dwellIndexPathes;
    NSInteger _interactiveState;
    id *_modeTransitionApplier;
    id *_modeTransitionCompletion;
    CGPoint _startOffsetForModeTransition;
    CGPoint _targetOffsetForModeTransition;
    CGPoint _secondaryOffsetForModeTransition;
    BOOL _scrollingStoppedTransition;
    NSInteger _previousDataMode;
    BOOL _engineInitiallyLoaded;
    NSDiffableDataSourceSnapshot *_snapshotSnapshot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)suggestedCellHeightForDevice:(id)arg0 ;
+(id)_reuseIdentifierForContent:(id)arg0 ;
-(BOOL)_applyShouldUseCanonicalContent;
-(BOOL)_applyShowIdealizedContent;
-(BOOL)_dismissPresentedViewControllerIfNecessary:(BOOL)arg0 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_shouldDeferUpdate;
-(BOOL)_shouldUseCanonicalContent;
-(BOOL)_snapshotHasChangesToVisibleItems:(id)arg0 ;
-(BOOL)_wantsStatusBarHidden;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)engineController:(id)arg0 isElementAtIndexPathVisible:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)presentedViewControllerShouldBecomeFirstResponder:(id)arg0 ;
-(CGFloat)_verticalPaddingForStatusBar;
-(NSInteger)_numberOfItemsInCollectionViewSection:(NSInteger)arg0 ;
-(NSInteger)_numberOfSectionsInCollectionView;
-(NSUInteger)_distanceForIndexPathFromNow:(id)arg0 ;
-(NSUInteger)_timeLabelOptions;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(id)_configureCellForItemWithElement:(id)arg0 atIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_configureSupplementaryViewForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_contentAtIndexPath:(id)arg0 ;
-(id)_detachedComplicationDisplays;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_sectionEnumerationOrder;
-(id)_swatchImageForColorOption:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)intentActionWantsBackgroundImageForAlert:(id)arg0 ;
-(id)intentActionWantsBackgroundToBlurForAlert:(id)arg0 ;
-(id)intentActionWantsViewToBlurForAlert:(id)arg0 ;
-(struct CGPoint )_defaultPointForDefaultMode;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_allowContentViewInteractive:(BOOL)arg0 ;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyCollectionViewSnapshot:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_applyDataMode;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_applyTransitionWithFraction:(CGFloat)arg0 interpolatedPalette:(id)arg1 onCell:(id)arg2 ;
-(void)_availableDataSourcesDidChange;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterSettingViewMode:(NSInteger)arg0 scroll:(BOOL)arg1 targetOffset:(struct CGPoint )arg2 needsLayout:(BOOL)arg3 ;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg0 selectedComplication:(id)arg1 ;
-(void)_configureCollectionViewDataSource;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_configureVisibleCell:(id)arg0 ;
-(void)_deviceOrientationInvertedDidChangeNotification:(id)arg0 ;
-(void)_finalizeForSnapshotting:(id)arg0 ;
-(void)_handleOrdinaryScreenWake;
-(void)_handleViewModeTapGesture:(id)arg0 ;
-(void)_handleWristRaiseScreenWake;
-(void)_layoutTimeLabelForViewMode:(NSInteger)arg0 ;
-(void)_layoutTimeLabelPlatterViewMode:(NSInteger)arg0 ;
-(void)_loadContentViews;
-(void)_loadEngineController;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContent:(id)arg0 ;
-(void)_loadSnapshotContentViews;
-(void)_logContent:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_logDataSourceSnapshot:(id)arg0 withName:(id)arg1 ;
-(void)_performWristRaiseAnimation;
-(void)_postPositiveDwellEventsForTopElements;
-(void)_prepareForEditing;
-(void)_prepareForSnapshotting;
-(void)_prepareWristRaiseAnimation;
-(void)_reloadCollectionViewData;
-(void)_reloadContentIfNeeded;
-(void)_replaceDataSourceElement:(id)arg0 withReloadedREElement:(id)arg1 ;
-(void)_resetVisibilityForCells;
-(void)_setSiriBlurColor;
-(void)_setViewMode:(NSInteger)arg0 scroll:(BOOL)arg1 scrollToPoint:(struct CGPoint )arg2 secondaryPoint:(struct CGPoint )arg3 force:(BOOL)arg4 velocity:(CGFloat)arg5 animated:(BOOL)arg6 ;
-(void)_setupCell:(id)arg0 withContent:(id)arg1 representedIdentifier:(id)arg2 ;
-(void)_showSiriUnavailableAlert:(id)arg0 ;
-(void)_startPositiveDwellForTopElementsTimerIfNeeded;
-(void)_startViewResetTimer;
-(void)_stopPositiveDwellForTopElementsTimer;
-(void)_stopViewResetTimer;
-(void)_switchViewModeForCurrentMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_switchViewModeToDefault;
-(void)_unloadContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_updateApplicationIdentifiersAndLocationAuthorization;
-(void)_updateCrownInvertedSetting;
-(void)_updateDisabledDataSources;
-(void)_updateVisibilityForCells;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDeferralStateChanged;
-(void)dealloc;
-(void)elementAction:(id)arg0 didFinishTask:(BOOL)arg1 ;
-(void)elementAction:(id)arg0 wantsToPerformTapActionForComplicationSlot:(id)arg1 ;
-(void)elementAction:(id)arg0 wantsViewControllerDisplayed:(id)arg1 ;
-(void)engineController:(id)arg0 didInsertContent:(id)arg1 atIndexPath:(id)arg2 ;
-(void)engineController:(id)arg0 didMoveContent:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)engineController:(id)arg0 didReloadContent:(id)arg1 atIndexPath:(id)arg2 ;
-(void)engineController:(id)arg0 didReloadContent:(id)arg1 withIdentifier:(id)arg2 ;
-(void)engineController:(id)arg0 didReloadElement:(id)arg1 ;
-(void)engineController:(id)arg0 didRemoveContent:(id)arg1 atIndexPath:(id)arg2 ;
// -(void)engineController:(id)arg0 performBatchUpdateBlock:(id)arg1 completion:(unk)arg2  ;
-(void)engineControllerDidBeginUpdatingRelevance:(id)arg0 ;
-(void)engineControllerDidFinishUpdatingRelevance:(id)arg0 ;
-(void)layoutSubviews;
-(void)performScrollTestNamed:(id)arg0 completion:(id)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg0 ;
-(void)screenWillTurnOnAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sensitiveUIStateChanged;
-(void)setViewMode:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCollectionViewSnapshotAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateTimeLabelBackground;


@end


#endif