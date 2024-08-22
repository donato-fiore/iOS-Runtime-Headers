// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKASTRONOMYFACEVIEW_H
#define NTKASTRONOMYFACEVIEW_H

@class NUNIAstronomyRotationModel, UIPanGestureRecognizer, UITapGestureRecognizer, NSString, UIImageView, NUNIAstronomyVistaView, CLKUIColoringLabel, NUNIAstronomyLocationDot, NSDate, CLKClockTimerToken, UIView;
@protocol NTKTimeView, NUNIAstronomyRotationModelObserver, NUNIAstronomyVistaViewObserver, UIGestureRecognizerDelegate;


#import "NTKDigitalFaceView.h"
#import "NTKDigitialUtilitarianFaceViewComplicationFactory.h"
#import "NTKDigitalTimeLabelStyle.h"
#import "NTKDateComplicationLabel.h"
#import "NTKDelayedBlock.h"

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKTimeView, NUNIAstronomyRotationModelObserver, NUNIAstronomyVistaViewObserver, UIGestureRecognizerDelegate>

 {
    NTKDigitialUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKDigitalTimeLabelStyle *_digitalTimeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_digitalTimeLabelSmallInUpperRightCornerStyle;
    NUNIAstronomyRotationModel *_rotationModel;
    CLLocationCoordinate2D _initialCoordinate;
    ? _previousTranslation;
    float _recentMovement;
    UIPanGestureRecognizer *_spheroidPanGesture;
    UITapGestureRecognizer *_supplementalModeDoubleTapGesture;
    UITapGestureRecognizer *_interactiveModeTapGesture;
    NSString *_locationManagerToken;
    NTKDateComplicationLabel *_legacyDateLabel;
    UIImageView *_legacyLeftBottomImageView;
    UIImageView *_legacyRightBottomImageView;
    NUNIAstronomyVistaView *_astronomyVistaView;
    CLKUIColoringLabel *_scrubLabel;
    CLKUIColoringLabel *_phaseLabel;
    CLKUIColoringLabel *_overrideDateLabel;
    UIImageView" _spheroidLabels;
    NUNIAstronomyLocationDot *_locationDot;
    NSDate *_overrideDate;
    NSDate *_crownDate;
    CLKClockTimerToken *_clockTimerToken;
    NSDateFormatter" _scrubDateFormatter;
    CGRect _phaseLabelDefaultFrame;
    float _supplementalFontLineHeightPlusDescender;
    NTKDelayedBlock *_wheelDelayedBlock;
    NTKDelayedBlock *_physicalButtonDelayedBlock;
    NSInteger _previousDataMode;
    NSInteger _animatingToViewMode;
    NSUInteger _vista;
    NSArray" _editingAnimations;
    UIView *_borrowedCircleView;
    UIView *_borrowedHandsView;
    BOOL _isAnimatingViewMode;
    BOOL _isContentLoaded;
    BOOL _isLocationCurrent;
    BOOL _isHandlingCrownEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canEnterInteractiveMode;
-(BOOL)_fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_shouldHandleHardwareEvents;
-(BOOL)_shouldHideStatusBarForViewMode:(NSInteger)arg0 ;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)_wheelChangedWithEvent:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_minimumBreathingScaleForComplicationSlot:(id)arg0 ;
-(CGFloat)keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)_detentTypeForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)_timeLabelOptions;
-(id)_date;
-(id)_detachedComplicationDisplays;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 ;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 ;
-(id)digitalTimeLabelDefaultStyle;
-(id)digitalTimeLabelSmallInUpperRightCornerStyle;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_animateTransitionToViewMode:(NSInteger)arg0 ;
-(void)_animateTransitionToViewMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_applyDataMode;
-(void)_applyDataModeAnimated:(BOOL)arg0 ;
-(void)_applyFromVista:(NSUInteger)arg0 toVista:(NSUInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_applyViewMode:(NSInteger)arg0 ;
-(void)_applyVista:(NSUInteger)arg0 ;
-(void)_asyncUpdateLocale;
-(void)_asyncUpdateTime;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterZoom;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_disableCrown;
-(void)_enableCrownForAstronomyVista:(NSUInteger)arg0 ;
-(void)_handleInteractiveModeGesture:(id)arg0 ;
-(void)_handleSpheroidPanGesture:(id)arg0 ;
-(void)_handleSupplementalModeGesture:(id)arg0 ;
-(void)_hideLocationDot;
-(void)_interpolateFromPose:(struct NTKAstronomyFaceViewAnimationPose *)arg0 toPose:(struct NTKAstronomyFaceViewAnimationPose *)arg1 progress:(float)arg2 ;
-(void)_layoutForegroundContainerView;
-(void)_layoutLegacyViews;
-(void)_layoutPhaseLabel;
-(void)_layoutSpheroidLabel:(int)arg0 ;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_performWristRaiseAnimation;
-(void)_physicalButtonDelayedBlockFired;
-(void)_prepareForEditing;
-(void)_prepareToZoom;
-(void)_prepareWristRaiseAnimation;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)_setAstronomyFaceViewModeDefault;
-(void)_setAstronomyFaceViewModeInteractive;
-(void)_setAstronomyFaceViewModeNonInteractive;
-(void)_setAstronomyFaceViewModeSupplemental;
-(void)_setIsAnimatingViewMode:(BOOL)arg0 ;
-(void)_setupAstronomyVistaView;
-(void)_showLocationDotIfNeeded;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_unloadSnapshotContentViews;
-(void)_updateLocaleAnimated:(BOOL)arg0 ;
-(void)_updateLocation:(id)arg0 lastLocation:(id)arg1 ;
-(void)_updateTimeAnimated:(BOOL)arg0 ;
-(void)_wheelDelayedBlockFired;
-(void)astronomyVistaViewContentsAnimationFinished:(id)arg0 ;
-(void)astronomyVistaViewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)rotationModelStoppedByDecelerating:(id)arg0 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setViewMode:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif