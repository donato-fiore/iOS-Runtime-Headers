// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKANALOGVIDEOFACEVIEW_H
#define NTKANALOGVIDEOFACEVIEW_H

@class UIColor, UIView, NSString;
@protocol NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, NTKVideoPlayerFaceViewDelegate, NTKEditOptionTransitioningViewDelegate;


#import "NTKAnalogFaceView.h"
#import "NTKFaceViewTapControl.h"
#import "NTKEditOptionTransitioningView.h"
#import "NTKColorCircularUtilitarianFaceViewComplicationFactory.h"
#import "NTKVideoPlayerView.h"

@interface NTKAnalogVideoFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, NTKVideoPlayerFaceViewDelegate, NTKEditOptionTransitioningViewDelegate>

 {
    NSInteger _previousDataMode;
    UIColor *_complicationColor;
    NTKFaceViewTapControl *_tapToLaunchButton;
    UIView *_backgroundContainerView;
    NTKEditOptionTransitioningView *_transitioningView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NTKColorCircularUtilitarianFaceViewComplicationFactory *faceViewComplicationFactory; // ivar: _faceViewComplicationFactory
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGSize videoDialSize; // ivar: _videoDialSize
@property (retain, nonatomic) NTKVideoPlayerView *videoPlayerView; // ivar: _videoPlayerView


-(BOOL)_fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 ;
-(BOOL)_shouldAnimateComplicationsOnTap;
-(BOOL)_slotSupportsCurvedText:(id)arg0 ;
-(BOOL)_supportsUnadornedSnapshot;
-(BOOL)shouldFadeIncomingView;
-(BOOL)slotUsesCurvedText:(id)arg0 ;
-(CGFloat)_complicationAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_contentAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_handAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_minimumBreathingScaleForComplicationSlot:(id)arg0 ;
-(CGFloat)keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_keylineStyleForComplicationSlot:(id)arg0 ;
-(NSInteger)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg0 slot:(id)arg1 ;
-(NSInteger)_utilitySlotForSlot:(id)arg0 ;
-(id)_complicationsCompanionForegroundColor;
-(id)_complicationsEditingColor;
-(id)_complicationsForegroundColor;
-(id)_complicationsPlatterColor;
-(id)_complicationsTapColor;
-(id)_detachedComplicationDisplays;
-(id)_keylineViewForComplicationSlot:(id)arg0 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_slotForUtilitySlot:(NSInteger)arg0 ;
-(id)_tapHighlightImage;
-(id)imageForEditOption:(id)arg0 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(struct CGPoint )_contentCenterOffset;
-(struct UIEdgeInsets )_insetsForDialSize:(struct CGSize )arg0 ;
-(void)_applyBreathingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyDataMode;
-(void)_applyFrozen;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applySlow;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterOrb:(BOOL)arg0 ;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg0 selectedComplication:(id)arg1 ;
-(void)_cleanupAfterTransitionToOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_configureTimeView:(id)arg0 ;
-(void)_curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)_customizeVideoPlayerOnSetup;
-(void)_faceLibraryDismissed;
-(void)_faceViewWasTapped;
-(void)_handleEitherScreenWake;
-(void)_handleOrdinaryScreenWake;
-(void)_handleWristRaiseScreenWake;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_prepareForOrb;
-(void)_setVideoPlayerDataSource:(id)arg0 ;
-(void)_setupTransitioningViewIfNeeded:(BOOL)arg0 ;
-(void)_tearDownTransitioningView:(BOOL)arg0 ;
-(void)_transformVideoPlayerView:(NSUInteger)arg0 ;
-(void)_unloadSnapshotContentViews;
-(void)customizeFaceViewForListing:(id)arg0 changeEvent:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)faceViewWasTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)screenDidTurnOffAnimated:(BOOL)arg0 ;
-(void)setDataMode:(NSInteger)arg0 ;
-(void)setNormalComplicationDisplayWrapper:(id)arg0 forSlot:(id)arg1 ;
-(void)setupVideoPlayerView;
-(void)videoDidBeginPlayingQueuedVideo;
-(void)videoDidFinishPlayingToEnd;


@end


#endif