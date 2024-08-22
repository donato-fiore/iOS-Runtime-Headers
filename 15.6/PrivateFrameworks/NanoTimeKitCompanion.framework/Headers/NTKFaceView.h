// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEVIEW_H
#define NTKFACEVIEW_H

@class UIView, NSTimer, NSDate, UIImage, NSMutableSet, NSMutableDictionary, NSString, CAFilter, UIColor, CLKDevice, UIImageView, UIView<NTKTimeView>;
@protocol PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, CLKUIQuadViewHierarchyObserver, NTKContainerViewLayoutDelegate, CLKMonochromeFilterProvider, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKTimeView, NTKClockHardwareInput, NTKFaceViewComplicationFactory, NTKFaceViewDelegate;


#import "NTKTimeTravelModuleView.h"
#import "NTKExtraLargeTimeView.h"
#import "NTKFaceColorPalette.h"
#import "NTKInterpolatedColorPalette.h"

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, CLKUIQuadViewHierarchyObserver, NTKContainerViewLayoutDelegate, CLKMonochromeFilterProvider, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKTimeView, NTKClockHardwareInput>

 {
    CGFloat _accumulatedTimeTravelEntryRotation;
    NSTimer *_accumulateTimeTravelEntryRotationTimeoutTimer;
    NSTimer *_fastCrownModeTimeoutTimer;
    BOOL _fastCrownMode;
    BOOL _transitioningBetweenLiveAndScrubbing;
    BOOL _wasScrubbingAtStartOfTransition;
    BOOL _canHandleHardwareEvents;
    NSDate *_timeTravelEnterDate;
    NSDate *_scrubDate;
    NTKTimeTravelModuleView *_timeTravelModuleView;
    UIView *_timeTravelCaptionView;
    UIImage *_timeTravelCaptionImage;
    CGFloat _timeTravelDistanceToYesterdayStart;
    CGFloat _timeTravelDistanceToTomorrowEnd;
    NSDate *_yesterdayStart;
    NSDate *_tomorrowEnd;
    NSTimer *_crownIdleTimer;
    CGFloat _lastCrownOffset;
    NSDate *_analyticsTimeTravelSessionStart;
    CGFloat _analyticsTimeTravelMaximumOffset;
    BOOL _statusIconVisible;
    NTKExtraLargeTimeView *_sensitiveUIShieldView;
    NTKFaceColorPalette *_faceColorPalette;
    NTKInterpolatedColorPalette *_interpolatedColorPalette;
    NSMutableSet *_allSubQuadViews;
    NSMutableDictionary *_complicationDisplayWrappers;
    NSMutableDictionary *_complicationLayouts;
    NSMutableSet *_hiddenComplicationSlots;
    NSString *_timeTravelCaptionKey;
    CGSize _boundsSizeForComputedLayouts;
    NSDate *_overrideDate;
    BOOL _needsRender;
    BOOL _needsImageQueueDiscardOnRender;
    BOOL _removedFromWindowDuringThisTransaction;
    BOOL _unadornedSnapshotRemoved;
    float _complicationEditingSaturationValue;
    CAFilter *_complicationEditingSaturationFilter;
}


@property (readonly, nonatomic) CGFloat alphaForDimmedState;
@property (retain, nonatomic) UIColor *alternateComplicationColor; // ivar: _alternateComplicationColor
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) UIColor *complicationColor; // ivar: _complicationColor
@property (retain, nonatomic) UIView *complicationContainerView; // ivar: _complicationContainerView
@property (retain, nonatomic) NSObject<NTKFaceViewComplicationFactory> *complicationFactory; // ivar: _complicationFactory
@property (nonatomic) BOOL complicationsShowEditingContent; // ivar: _complicationsShowEditingContent
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSDate *currentDisplayDate;
@property (nonatomic) NSInteger dataMode; // ivar: _dataMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKFaceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger detailMode; // ivar: _detailMode
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableDictionary *editConfigurations; // ivar: _editConfigurations
@property (readonly, nonatomic) CGFloat editModeTransitionFraction; // ivar: _editModeTransitionFraction
@property (readonly, nonatomic) BOOL editing; // ivar: _editing
@property (nonatomic, getter=isEveryComplicationHidden) BOOL everyComplicationHidden; // ivar: _everyComplicationHidden
@property (readonly, nonatomic) NTKFaceColorPalette *faceColorPalette;
@property (readonly, nonatomic) NSInteger faceStyle; // ivar: _faceStyle
@property (readonly, nonatomic) UIView *foregroundContainerView; // ivar: _foregroundContainerView
@property (readonly, nonatomic) NSInteger fromEditMode; // ivar: _fromEditMode
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NTKInterpolatedColorPalette *interpolatedColorPalette;
@property (retain, nonatomic) UIColor *interpolatedComplicationColor; // ivar: _interpolatedComplicationColor
@property (readonly, nonatomic) BOOL monochromeRichComplicationsEnabled;
@property (readonly, nonatomic) BOOL orbing; // ivar: _orbing
@property (copy, nonatomic) NSString *resourceDirectory; // ivar: _resourceDirectory
@property (retain, nonatomic) UIView *rootContainerView; // ivar: _rootContainerView
@property (retain, nonatomic) NSString *selectedComplicationSlot; // ivar: _selectedComplicationSlot
@property (nonatomic) BOOL shouldShowUnsnapshotableContent; // ivar: _shouldShowUnsnapshotableContent
@property (nonatomic) BOOL showContentForUnadornedSnapshot; // ivar: _showContentForUnadornedSnapshot
@property (nonatomic) BOOL showsCanonicalContent; // ivar: _showsCanonicalContent
@property (nonatomic) BOOL showsLockedUI; // ivar: _showsLockedUI
@property (nonatomic, getter=isSlow) BOOL slow; // ivar: _slow
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *switcherSnapshotView; // ivar: _switcherSnapshotView
@property (readonly) BOOL timeScrubbing; // ivar: _timeScrubbing
@property (retain, nonatomic) UIView<NTKTimeView> *timeView; // ivar: _timeView
@property (readonly, nonatomic) NSInteger toEditMode; // ivar: _toEditMode
@property (retain, nonatomic) UIView *unadornedSnapshotView; // ivar: _unadornedSnapshotView
@property (readonly, nonatomic) BOOL zooming; // ivar: _zooming


+(NSInteger)numberOfDetailModesForFaceStyle:(NSInteger)arg0 ;
+(NSInteger)uiSensitivity;
+(id)_prewarmSharedData;
+(id)_swatchForEditModeDependsOnOptions:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_swatchImageForColorOption:(id)arg0 forDevice:(id)arg1 color:(id)arg2 size:(struct CGSize )arg3 ;
+(id)newFaceViewForFace:(id)arg0 ;
+(id)pigmentFromOption:(id)arg0 ;
+(id)swatchForEditModeDependsOnOptions:(NSInteger)arg0 forDevice:(id)arg1 ;
+(void)_prewarmForDevice:(id)arg0 ;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 ;
-(BOOL)_handlePhysicalButton:(NSUInteger)arg0 event:(NSUInteger)arg1 ;
-(BOOL)_isAnalog;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_renderSynchronouslyIfNeededInGroup:(id)arg0 ;
-(BOOL)_shouldHideUI;
-(BOOL)_slotSupportsCurvedText:(id)arg0 ;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_supportsUnadornedSnapshot;
-(BOOL)_usesCustomZoom;
-(BOOL)_usesSimplifiedZoom;
-(BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
-(BOOL)_wantsOpportunisticLiveFaceLoading;
-(BOOL)_wantsStatusBarHidden;
-(BOOL)_wantsStatusBarIconShadow;
-(BOOL)_wantsTimeTravelStatusModule;
-(BOOL)_wheelChangedWithEvent:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)complicationDisplayWrapperView:(id)arg0 shouldStartCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(NSUInteger)arg4 ;
-(BOOL)complicationIsHiddenAtSlot:(id)arg0 ;
-(BOOL)isAnalog;
-(BOOL)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)needsImageQueueDiscardOnRender;
-(BOOL)presentedViewControllerShouldBecomeFirstResponder:(id)arg0 ;
-(BOOL)renderIfNeeded;
-(BOOL)slotSupportsCurvedText:(id)arg0 ;
-(BOOL)supportsUnadornedSnapshot;
-(BOOL)wantsStatusBarHidden;
-(BOOL)wantsStatusBarIconShadow;
-(CGFloat)_alphaForComplicationSlot:(id)arg0 inEditOption:(id)arg1 ofEditMode:(NSInteger)arg2 ;
-(CGFloat)_editSpeedForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(CGFloat)_faceEditingScaleForEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(CGFloat)_horizontalPaddingForStatusBar;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_minimumBreathingScaleForComplicationSlot:(id)arg0 ;
-(CGFloat)_timeTravelCaptionLabelMaxWidth;
-(CGFloat)_timeTravelStatusModuleCaptionConstraintPadding;
-(CGFloat)_verticalPaddingForStatusBar;
-(CGFloat)editSpeedForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(CGFloat)horizontalPaddingForStatusBar;
-(CGFloat)verticalPaddingForStatusBar;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(NSInteger)_swatchImageContentMode;
-(NSInteger)complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)legacyComplicationLayoutOverrideForSlot:(id)arg0 complication:(id)arg1 ;
-(NSInteger)swatchImageContentMode;
-(NSUInteger)_detentTypeForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)_keylineLabelAlignmentForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)detentTypeForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)keylineLabelAlignmentForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_accessPrewarmedData;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
-(id)_allViewsWithComplicationEditingDesaturationFilter;
-(id)_baseTimeTravelCaptionImageNameForEnglishOnly;
-(id)_blurSourceImage;
-(id)_complicationContainerViewForSlot:(id)arg0 ;
-(id)_complicationSlotsHiddenByCurrentConfiguration;
-(id)_complicationSlotsHiddenByEditOption:(id)arg0 ;
-(id)_createTimeTravelCaptionImage;
-(id)_defaultKeylineViewForComplicationSlot:(id)arg0 ;
-(id)_detachedComplicationDisplays;
-(id)_editOptionThatHidesAllComplications;
-(id)_keylineViewForComplicationSlot:(id)arg0 ;
-(id)_keylineViewForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_keylineViewForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 selectedSlot:(id)arg2 ;
-(id)_layoutRuleForComplicationSlot:(id)arg0 withOverride:(NSInteger)arg1 inEditMode:(NSInteger)arg2 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_swatchColorForColorOption:(id)arg0 ;
-(id)_swatchImageForColorOption:(id)arg0 size:(struct CGSize )arg1 ;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 ;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 refreshHandler:(id)arg3 ;
-(id)_timeTravelCaptionAttributedText;
-(id)_timeTravelCaptionCacheKey;
-(id)_timeTravelCaptionFontSizeOverrides;
-(id)allVisibleComplicationsForCurrentConfiguration;
-(id)blurSourceImage;
-(id)closestVisibleComplicationSlotToSlot:(id)arg0 ;
-(id)closestVisibleSlotToSlot:(id)arg0 editMode:(NSInteger)arg1 ;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)complicationLayoutforSlot:(id)arg0 ;
-(id)createFaceColorPalette;
-(id)customEditingViewController;
-(id)detachedComplicationDisplayWrapperForSlot:(id)arg0 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)interpolatedColorForView:(id)arg0 ;
-(id)keylineViewForComplicationSlot:(id)arg0 ;
-(id)keylineViewForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 selectedSlot:(id)arg2 ;
-(id)layoutRuleForComplicationSlot:(id)arg0 inState:(NSInteger)arg1 layoutOverride:(NSInteger)arg2 ;
-(id)newLegacyComplicationViewForSlot:(id)arg0 family:(NSInteger)arg1 complication:(id)arg2 ;
-(id)normalComplicationDisplayWrapperForSlot:(id)arg0 ;
-(id)optionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)swatchImageForColorOption:(id)arg0 ;
-(id)swatchImageForColorOption:(id)arg0 size:(struct CGSize )arg1 ;
-(id)swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 refreshHandler:(id)arg3 ;
-(id)swatchPrimaryColorForColorOption:(id)arg0 ;
-(struct CGAffineTransform )_displayContentTransformForComplicationSlot:(id)arg0 ;
-(struct CGAffineTransform )_displayEditingTransformForComplicationSlot:(id)arg0 ;
-(struct CGPoint )_timeTravelStatusModuleCenter;
-(struct CGRect )_faceViewFrameForEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 ;
-(struct CGRect )_frameForComplicationDisplayWrapper:(id)arg0 inSlot:(id)arg1 ;
-(struct CGRect )_keylineFrameForComplicationSlot:(id)arg0 selected:(BOOL)arg1 ;
-(struct CGRect )_keylineFrameForCustomEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 ;
-(struct CGRect )_keylineFrameForCustomEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 selectedSlot:(id)arg3 ;
-(struct CGRect )_keylineFrameForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(struct CGRect )_keylineFrameForEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 selectedSlot:(id)arg3 ;
-(struct CGRect )_keylineFrameFromRelativeFrame:(struct CGRect )arg0 forEditingMode:(NSInteger)arg1 option:(id)arg2 slot:(id)arg3 ;
-(struct CGRect )_relativeKeylineFrameForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(struct CGRect )faceViewFrameForEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 ;
-(struct CGRect )keylineFrameForComplicationSlot:(id)arg0 selected:(BOOL)arg1 ;
-(struct CGRect )keylineFrameForCustomEditMode:(NSInteger)arg0 option:(id)arg1 slot:(id)arg2 ;
-(struct CGRect )keylineFrameForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 selectedSlot:(id)arg2 ;
-(struct CGSize )_maxSizeForComplicationSlot:(id)arg0 layoutOverride:(NSInteger)arg1 ;
-(struct UIEdgeInsets )timeTravelModuleTouchInsets;
-(void)_addSaturationFilterToViews:(id)arg0 ;
-(void)_adjustUIForBoundsChange;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyDataMode;
-(void)_applyEditConfigurationsWithForce:(BOOL)arg0 ;
-(void)_applyFrozen;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(void)_applySlow;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromComplication:(id)arg1 toComplication:(id)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_bringForegroundViewsToFront;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterOrb:(BOOL)arg0 ;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg0 selectedComplication:(id)arg1 ;
-(void)_cleanupAfterTransitionToOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_cleanupAfterZoom;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)_didLayoutComplicationViews;
-(void)_disableCrown;
-(void)_enableCrown;
-(void)_endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_finalizeForSnapshotting:(id)arg0 ;
-(void)_getKeylineFrame:(struct CGRect *)arg0 padding:(struct UIEdgeInsets *)arg1 forComplicationSlot:(id)arg2 selected:(BOOL)arg3 ;
-(void)_handleLocaleDidChange;
-(void)_handleOrdinaryScreenWake;
-(void)_handleWristRaiseScreenWake;
-(void)_keylineSelectionChangingTo:(id)arg0 editMode:(NSInteger)arg1 ;
-(void)_layoutComplicationViewForSlot:(id)arg0 ;
-(void)_layoutComplicationViewWithWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)_layoutComplicationViews;
-(void)_layoutForegroundContainerView;
-(void)_layoutTimeTravelCaptionView:(id)arg0 ;
-(void)_layoutTimeTravelStatusModule:(id)arg0 ;
-(void)_loadContentToReplaceUnadornedSnapshot;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_outputTime:(id)arg0 ;
-(void)_performWristRaiseAnimation;
-(void)_prepareForEditing;
-(void)_prepareForOrb;
-(void)_prepareForSnapshotting;
-(void)_prepareForStatusChange:(BOOL)arg0 ;
-(void)_prepareScrubbingSequencerBoundaries;
-(void)_prepareToZoom;
-(void)_prepareWristRaiseAnimation;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)_reorderSwitcherSnapshotView;
-(void)_resetSequencerBoundaries;
-(void)_scrubToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setComplicationAlphaForTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 customEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_setComplicationEditingSaturationValue:(float)arg0 ;
-(void)_setTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_setupComplicationViewsIfHidden;
-(void)_setupTimeTravel;
-(void)_startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_stopOutputtingTime;
-(void)_teardownComplicationViewsIfNeeded;
-(void)_unloadSnapshotContentViews;
-(void)_updateComplicationMaxSize;
-(void)_updateFaceColorPaletteWithOption:(id)arg0 mode:(NSInteger)arg1 ;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;
-(void)_updateMaxSizeForDisplayWrapper:(id)arg0 slot:(id)arg1 ;
-(void)_updateSaturationForComplicationEditing;
-(void)_updateStatusIconVisibility;
-(void)_updateTimeOffset;
-(void)applyBreathingFraction:(CGFloat)arg0 forComplicationSlot:(id)arg1 ;
-(void)applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)applyRubberBandingFraction:(CGFloat)arg0 forComplicationSlot:(id)arg1 ;
-(void)applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromComplication:(id)arg1 toComplication:(id)arg2 slot:(id)arg3 ;
-(void)changeComplicationsAlpha:(CGFloat)arg0 ;
-(void)cleanupAfterEditing;
-(void)cleanupAfterOrb:(BOOL)arg0 ;
-(void)cleanupAfterTransitionComplicationSlot:(id)arg0 selectedComplication:(id)arg1 ;
-(void)cleanupAfterTransitionToOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)cleanupAfterZoom;
-(void)complicationDisplayWrapperView:(id)arg0 updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(NSUInteger)arg4 animationDuration:(CGFloat)arg5 animationFraction:(float)arg6 ;
-(void)configureComplicationViewDisplayWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)configureForEditMode:(NSInteger)arg0 ;
-(void)configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)dealloc;
-(void)endScrubbingAnimated:(BOOL)arg0 ;
-(void)endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)enumerateComplicationDisplayWrappersWithBlock:(id)arg0 ;
-(void)enumerateQuadViewsWithBlock:(id)arg0 ;
-(void)handleOrdinaryScreenWake;
-(void)handleUnadornedSnapshotRemoved;
-(void)handleWristRaiseScreenWake;
-(void)hideAppropriateComplicationsForCurrentConfigurationInEditMode:(NSInteger)arg0 ;
-(void)invalidateComplicationLayout;
-(void)layoutComplicationViewWithWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)layoutComplicationViews;
-(void)layoutContainerView:(id)arg0 ;
-(void)layoutSubviews;
-(void)loadContentToReplaceUnadornedSnapshot;
-(void)performScrollTestNamed:(id)arg0 completion:(id)arg1 ;
-(void)performTimeTravelModuleTapAction;
-(void)performWristRaiseAnimation;
-(void)populateFaceViewEditOptionsFromFace:(id)arg0 ;
-(void)populateFaceViewEditOptionsFromFace:(id)arg0 forced:(BOOL)arg1 ;
-(void)prepareForEditing;
-(void)prepareForOrb;
-(void)prepareForStatusChange:(BOOL)arg0 ;
-(void)prepareToZoom;
-(void)prepareWristRaiseAnimation;
-(void)quadViewWillEnterSubtree:(id)arg0 ;
-(void)quadViewWillLeaveSubtree:(id)arg0 ;
-(void)reloadSnapshotContentViews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)screenDidTurnOffAnimated:(BOOL)arg0 ;
-(void)screenWillTurnOnAnimated:(BOOL)arg0 ;
-(void)scrubToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)setComplicationHidden:(BOOL)arg0 atSlot:(id)arg1 ;
-(void)setDetachedComplicationDisplayWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)setNeedsRender;
-(void)setNormalComplicationDisplayWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)setOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)setOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 forceApply:(BOOL)arg3 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 customEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)shiftSelectedComplicationSlotIfHidden;
-(void)startScrubbingAnimated:(BOOL)arg0 ;
-(void)startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)updateRichCornerComplicationsInnerColor:(id)arg0 outerColor:(id)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif