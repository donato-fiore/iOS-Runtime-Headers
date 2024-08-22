// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTOPBAR_H
#define CAMTOPBAR_H

@class UIView, NSArray, NSSet, CEKApertureButton, NSString, PUReviewScreenDoneButton;
@protocol CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate, CAMControlStatusIndicatorDelegate, CAMControlVisibilityUpdateDelegate;


#import "CAMHDRButton.h"
#import "CAMExpandableMenuButton.h"
#import "CAMElapsedTimeView.h"
#import "CAMFilterButton.h"
#import "CAMFlashButton.h"
#import "CAMFlipButton.h"
#import "CAMIntensityButton.h"
#import "CAMLivePhotoButton.h"
#import "CAMMessagesPhotosButton.h"
#import "CAMSharedLibraryButton.h"
#import "CAMTimerButton.h"
#import "CAMVideoConfigurationStatusIndicator.h"

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate, CAMControlStatusIndicatorDelegate>



@property (retain, nonatomic) CAMHDRButton *HDRButton; // ivar: _HDRButton
@property (readonly, nonatomic) NSArray *_allowedControls; // ivar: __allowedControls
@property (readonly, nonatomic) UIView *_backgroundView; // ivar: __backgroundView
@property (retain, nonatomic, setter=_setControlsNeedingNonAnimatedLayout:) NSSet *_controlsNeedingNonAnimatedLayout; // ivar: __controlsNeedingNonAnimatedLayout
@property (retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // ivar: __expandedMenuButton
@property (nonatomic, setter=_setExpandedMenuButtonTappableInsets:) UIEdgeInsets _expandedMenuButtonTappableInsets; // ivar: __expandedMenuButtonTappableInsets
@property (readonly, nonatomic) NSInteger _mode; // ivar: __mode
@property (retain, nonatomic) CEKApertureButton *apertureButton; // ivar: _apertureButton
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // ivar: _elapsedTimeView
@property (retain, nonatomic) CAMFilterButton *filterButton; // ivar: _filterButton
@property (retain, nonatomic) CAMFlashButton *flashButton; // ivar: _flashButton
@property (retain, nonatomic) CAMFlipButton *flipButton; // ivar: _flipButton
@property (readonly, nonatomic, getter=isFloating) BOOL floating;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMIntensityButton *intensityButton; // ivar: _intensityButton
@property (retain, nonatomic) CAMLivePhotoButton *livePhotoButton; // ivar: _livePhotoButton
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) CAMMessagesPhotosButton *photosButton; // ivar: _photosButton
@property (retain, nonatomic) CAMSharedLibraryButton *sharedLibraryButton; // ivar: _sharedLibraryButton
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMTimerButton *timerButton; // ivar: _timerButton
@property (retain, nonatomic) CAMVideoConfigurationStatusIndicator *videoConfigurationStatusIndicator; // ivar: _videoConfigurationStatusIndicator
@property (weak, nonatomic) NSObject<CAMControlVisibilityUpdateDelegate> *visibilityUpdateDelegate; // ivar: _visibilityUpdateDelegate


+(BOOL)isFloatingStyle:(NSInteger)arg0 ;
-(BOOL)_backgroundMasksToBoundsForStyle:(NSInteger)arg0 ;
-(BOOL)_shouldExpandButtonsHorizontally;
-(BOOL)_shouldHideSubview:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldHideApertureButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideDoneButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideElapsedTimeViewForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideFilterButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideFlashButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideFlipButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideHDRButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideIntensityButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideLivePhotoButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHidePhotosButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideSharedLibraryButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideTimerButtonForGraphConfiguration:(id)arg0 ;
-(BOOL)shouldHideVideoConfigurationStatusIndicatorForGraphConfiguration:(id)arg0 ;
-(CGFloat)_backgroundCornerRadiusForStyle:(NSInteger)arg0 ;
-(CGFloat)_interpolatedFloatingBarHeight;
-(CGFloat)_opacityForBackgroundStyle:(NSInteger)arg0 ;
-(id)_allowedControlsForMode:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)touchingRecognizersToCancel;
-(struct CGRect )collapsedFrameForMenuButton:(id)arg0 ;
-(struct CGRect )expandedFrameForMenuButton:(id)arg0 ;
-(void)_commonCAMTopBarInitialization;
-(void)_computeHorizontalLayoutForViewsBetweenLeftView:(id)arg0 rightView:(id)arg1 views:(id)arg2 alignmentRects:(id)arg3 ;
-(void)_iterateViewsInHUDManager:(id)arg0 forHUDItem:(id)arg1 ;
-(void)_layoutControls:(id)arg0 apply:(BOOL)arg1 withExpandedMenuButton:(id)arg2 collapsingMenuButton:(id)arg3 collapsingFrame:(struct CGRect *)arg4 ;
-(void)_layoutDefaultStyle;
-(void)_layoutFloatingStyle;
-(void)_setMode:(NSInteger)arg0 style:(NSInteger)arg1 animationDuration:(CGFloat)arg2 animationOptions:(NSUInteger)arg3 ;
-(void)_updateControlVisibilityAnimated:(BOOL)arg0 ;
-(void)apertureButtonNeedsLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)collapseMenuButton:(id)arg0 animated:(BOOL)arg1 ;
-(void)configureForMode:(NSInteger)arg0 ;
-(void)configureForMode:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg0 animated:(BOOL)arg1 ;
-(void)expandMenuButton:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;


@end


#endif