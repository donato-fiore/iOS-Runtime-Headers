// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCONTROLDRAWER_H
#define CAMCONTROLDRAWER_H

@class UIView, NSMutableDictionary, CAMControlDrawerButton<CAMControlDrawerExpandableButton>, UIScrollView, CEKApertureSlider, NSString, CEKWheelScrubberView, CEKSlider, NSArray;
@protocol CAMControlDrawerMenuButtonDelegate, UIScrollViewDelegate, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider, CAMControlDrawerDelegate, CAMControlDrawerPresentationDelegate;


#import "CAMDrawerApertureButton.h"
#import "CAMDrawerAspectRatioButton.h"
#import "CAMDrawerExposureButton.h"
#import "CAMExposureSlider.h"
#import "CAMDrawerFilterButton.h"
#import "CAMDrawerFlashButton.h"
#import "CAMDrawerHDRButton.h"
#import "CAMDrawerIntensityButton.h"
#import "CAMDrawerLivePhotoButton.h"
#import "CAMDrawerLowLightButton.h"
#import "CAMLowLightSlider.h"
#import "CAMDrawerRAWButton.h"
#import "CAMDrawerSemanticStyleButton.h"
#import "CAMSemanticStyleControl.h"
#import "CAMDrawerTimerButton.h"

@interface CAMControlDrawer : UIView <CAMControlDrawerMenuButtonDelegate, UIScrollViewDelegate, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>



@property (readonly, nonatomic) NSMutableDictionary *_controlMap; // ivar: __controlMap
@property (retain, nonatomic, setter=_setExpandedControl:) CAMControlDrawerButton<CAMControlDrawerExpandableButton> *_expandedControl; // ivar: __expandedControl
@property (readonly, nonatomic) UIScrollView *_scrollView; // ivar: __scrollView
@property (readonly, nonatomic) CAMDrawerApertureButton *apertureButton;
@property (readonly, nonatomic) CEKApertureSlider *apertureSlider; // ivar: _apertureSlider
@property (nonatomic, getter=isApertureSliderVisible) BOOL apertureSliderVisible;
@property (readonly, nonatomic) CAMDrawerAspectRatioButton *aspectRatioButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMControlDrawerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAMDrawerExposureButton *exposureButton;
@property (readonly, nonatomic) CAMExposureSlider *exposureSlider; // ivar: _exposureSlider
@property (nonatomic, getter=isExposureSliderVisible) BOOL exposureSliderVisible;
@property (readonly, nonatomic) CAMDrawerFilterButton *filterButton;
@property (readonly, nonatomic) CEKWheelScrubberView *filterScrubberView; // ivar: _filterScrubberView
@property (readonly, nonatomic, getter=isFilterScrubberVisible) BOOL filterScrubberVisible;
@property (readonly, nonatomic) CAMDrawerFlashButton *flashButton;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAMDrawerHDRButton *hdrButton;
@property (readonly, nonatomic) CAMDrawerIntensityButton *intensityButton;
@property (readonly, nonatomic) CEKSlider *intensitySlider; // ivar: _intensitySlider
@property (nonatomic, getter=isIntensitySliderVisible) BOOL intensitySliderVisible;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (readonly, nonatomic) CAMDrawerLivePhotoButton *livePhotoButton;
@property (readonly, nonatomic) CAMDrawerLowLightButton *lowLightButton;
@property (readonly, nonatomic) CAMLowLightSlider *lowLightSlider; // ivar: _lowLightSlider
@property (nonatomic, getter=isLowLightSliderVisible) BOOL lowLightSliderVisible;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (weak, nonatomic) NSObject<CAMControlDrawerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic) CAMDrawerRAWButton *rawButton;
@property (readonly, nonatomic) CAMDrawerSemanticStyleButton *semanticStyleButton;
@property (readonly, nonatomic) CAMSemanticStyleControl *semanticStyleControl; // ivar: _semanticStyleControl
@property (nonatomic, getter=isSemanticStyleControlVisible) BOOL semanticStyleControlVisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMDrawerTimerButton *timerButton;
@property (retain, nonatomic) NSArray *visibleControlTypes; // ivar: _visibleControlTypes


-(BOOL)isControlExpandedForType:(NSInteger)arg0 ;
-(BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg0 ;
-(CGFloat)_controlCenterSpacingForControlCount:(NSUInteger)arg0 ;
-(CGFloat)_viewportLength;
-(NSUInteger)_sliderFontStyle;
-(NSUInteger)_viewportMaximumControlCount;
-(id)_createControlForType:(NSInteger)arg0 ;
-(id)buttonForType:(NSInteger)arg0 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)touchingRecognizersToCancel;
-(struct ? )_scrubberGradientEdgeInsets;
-(struct CGSize )_scrollingContentSizeForControlCount:(NSUInteger)arg0 ;
-(void)_commonInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_ensureVisibleControls;
-(void)_handleControlReleased:(id)arg0 ;
-(void)_handleControlValueChanged:(id)arg0 ;
-(void)_installControlIfNeededForType:(NSInteger)arg0 ;
-(void)_iterateViewsForHUDManager:(id)arg0 withItemFoundBlock:(id)arg1 ;
-(void)_layoutApertureSlider;
-(void)_layoutCustomControlsAnimated:(BOOL)arg0 ;
-(void)_layoutExposureSlider;
-(void)_layoutFilterScrubberView;
-(void)_layoutFullWidthCustomView:(id)arg0 forAssociatedControl:(id)arg1 expanded:(BOOL)arg2 ;
-(void)_layoutFullWidthCustomView:(id)arg0 withAlignmentRect:(struct CGRect )arg1 forAssociatedControl:(id)arg2 expanded:(BOOL)arg3 ;
-(void)_layoutIntensitySlider;
-(void)_layoutLowLightSlider;
-(void)_layoutSemanticStyleControl;
-(void)_layoutVisibleControlForType:(NSInteger)arg0 visibleControlTypes:(id)arg1 ;
-(void)_loadApertureSliderIfNeeded;
-(void)_loadControlIfNeededForType:(NSInteger)arg0 ;
-(void)_loadCustomUIIfNeededForControlType:(NSInteger)arg0 ;
-(void)_loadExposureSliderIfNeeded;
-(void)_loadFilterScrubberIfNeeded;
-(void)_loadIntensitySliderIfNeeded;
-(void)_loadLowLightSliderIfNeeded;
-(void)_loadSemanticStyleControlIfNeeded;
-(void)_updateControlsScaleAnimated:(BOOL)arg0 ;
-(void)_updateControlsVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateExpansionInsetsForExpandableButton:(id)arg0 ;
-(void)collapseExpandableButtonsAnimated:(BOOL)arg0 ;
-(void)expandControlForType:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)expandableButton:(id)arg0 willChangeExpanded:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)menuButtonDidSelectItem:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;


@end


#endif