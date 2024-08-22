// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITPORTRAITTOOLCONTROLLER_H
#define PUPHOTOEDITPORTRAITTOOLCONTROLLER_H

@class CEKApertureButton, PXUIButton, UIView, NSMutableArray, CEKLightingNameBadge, NSArray, CEKSlider, NSDictionary, NSNumber, NSMutableDictionary, NSString, CEKLightingControl;
@protocol PUPhotoEditApertureToolbarDelegate, CEKLightingControlDelegate, CEKSliderDelegate, PXNavigationActionReceiver;


#import "PUPhotoEditToolController.h"
#import "_PULightingGradientView.h"
#import "PUPhotoEditApertureToolbar.h"

@interface PUPhotoEditPortraitToolController : PUPhotoEditToolController <PUPhotoEditApertureToolbarDelegate, CEKLightingControlDelegate, CEKSliderDelegate, PXNavigationActionReceiver>

 {
    CEKApertureButton *_apertureButton;
    PXUIButton *_lightingIntensityButton;
    UIView *_lightingContainer;
    UIView *_apertureContainer;
    NSMutableArray *_containerConstraints;
    NSInteger _initialLightingType;
    CGFloat _initialLightingIntensity;
    PXUIButton *_depthToolbarButton;
    _PULightingGradientView *_lightingGradient;
    CEKLightingNameBadge *_lightingNameBadge;
    NSArray *_lightingNameBadgeConstraints;
    NSArray *_lightingControlConstraints;
    CEKSlider *_lightingSlider;
    NSMutableArray *_toolConstraints;
    NSDictionary *_cachedPortraitEffectSettings;
    NSNumber *_cachedSpillMatteAllowed;
    BOOL _isStageLightEnabled;
    NSMutableDictionary *_lightingIntensityCache;
}


@property (readonly, nonatomic) PUPhotoEditApertureToolbar *apertureToolbar; // ivar: _apertureToolbar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CEKLightingControl *lightingControl; // ivar: _lightingControl
@property (nonatomic) NSUInteger majorVersion; // ivar: _majorVersion
@property (nonatomic) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly) Class superclass;
@property (nonatomic) NSInteger toolSelection; // ivar: _toolSelection


-(BOOL)_canRenderPortraitEffect;
-(BOOL)_setupApertureControlsIfNeeded;
-(BOOL)_setupDepthControlsIfNeeded;
-(BOOL)_setupLightingControlsIfNeeded;
-(BOOL)_shouldShowPortraitV2;
-(BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg0 ;
-(BOOL)canResetToDefaultValue;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg0 ;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(BOOL)wantsScrubberKeyControl;
-(BOOL)wantsSecondaryToolbarVisible;
-(BOOL)wantsSliderKeyControl;
-(BOOL)wantsZoomAndPanEnabled;
-(NSInteger)toolControllerTag;
-(id)_depthButtonTitle;
-(id)accessibilityHUDItemForButton:(id)arg0 ;
-(id)centerToolbarView;
-(id)leadingToolbarViews;
-(id)localizedName;
-(id)toolbarIcon;
-(id)toolbarIconAccessibilityLabel;
-(void)_didModifyLightingIntensity;
-(void)_handleDepthEffectButton:(id)arg0 ;
-(void)_handlePortraitNavigationButtons:(id)arg0 ;
-(void)_refreshFromValuesCalculator;
-(void)_resetDefaultToolMode;
-(void)_restoreCachedLightingIntensity;
-(void)_selectNextEffectType:(BOOL)arg0 ;
-(void)_setShowLightingControl:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateApertureSliderLength;
-(void)_updateCompositionWithLightingIntensity;
-(void)_updateLabelOrientation;
-(void)_updateLightingControl;
-(void)_updateLightingIntensityCache;
-(void)_updateLightingMarkerForType:(NSInteger)arg0 ;
-(void)_updateLightingNameBadgeForOrientation:(NSInteger)arg0 expanded:(BOOL)arg1 ;
-(void)_updateLightingSliderAnimated:(BOOL)arg0 ;
-(void)_updateNavigationButtonsAnimated:(BOOL)arg0 ;
-(void)_updateToolConstraints;
-(void)_updateToolContainerConstraints;
-(void)_updateToolVisibilityAnimated:(BOOL)arg0 ;
-(void)apertureToolbar:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)apertureToolbarDidStartSliding:(id)arg0 ;
-(void)apertureToolbarDidStopSliding:(id)arg0 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)decreaseScrubberValue:(BOOL)arg0 ;
-(void)decreaseSliderValue:(BOOL)arg0 ;
-(void)editValuesCalculatorHasChangedImageValues:(id)arg0 ;
-(void)increaseScrubberValue:(BOOL)arg0 ;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)lightingControl:(id)arg0 willChangeExpanded:(BOOL)arg1 ;
-(void)lightingControlDidChangeExpanded:(id)arg0 ;
-(void)lightingControlDidChangeSelectedLightingType:(id)arg0 ;
-(void)navigateToNextTab:(id)arg0 ;
-(void)navigateToPreviousTab:(id)arg0 ;
-(void)reactivate;
-(void)setBackdropViewGroupName:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setPhotoEditSpec:(id)arg0 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)sliderDidEndScrolling:(id)arg0 ;
-(void)sliderDidScroll:(id)arg0 ;
-(void)sliderWillBeginScrolling:(id)arg0 ;
-(void)sliderWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateViewConstraints;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidLoad;
-(void)willBecomeActiveTool;


@end


#endif