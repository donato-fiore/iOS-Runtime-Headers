// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMBOTTOMBAR_H
#define CAMBOTTOMBAR_H

@class UIView, CEKApertureButton, PUReviewScreenDoneButton, UIButton;
@protocol CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate, CAMControlVisibilityUpdateDelegate;


#import "CAMHDRButton.h"
#import "CAMExpandableMenuButton.h"
#import "CAMCreativeCameraButton.h"
#import "CAMFlashButton.h"
#import "CAMFlipButton.h"
#import "CAMImageAnalysisButton.h"
#import "CAMImageWell.h"
#import "CAMLivePhotoButton.h"
#import "CAMModeDial.h"
#import "CAMSharedLibraryButton.h"
#import "CUShutterButton.h"
#import "CAMTimerButton.h"
#import "CAMUtilityBar.h"

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate>



@property (retain, nonatomic) CAMHDRButton *HDRButton; // ivar: _HDRButton
@property (retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // ivar: __expandedMenuButton
@property (retain, nonatomic) CEKApertureButton *apertureButton; // ivar: _apertureButton
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) CAMCreativeCameraButton *creativeCameraButton; // ivar: _creativeCameraButton
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) CAMFlashButton *flashButton; // ivar: _flashButton
@property (retain, nonatomic) CAMFlipButton *flipButton; // ivar: _flipButton
@property (retain, nonatomic) CAMImageAnalysisButton *imageAnalysisButton; // ivar: _imageAnalysisButton
@property (retain, nonatomic) UIView *imageAnalysisButtonBackgroundOverlay; // ivar: _imageAnalysisButtonBackgroundOverlay
@property (retain, nonatomic) CAMImageWell *imageWell; // ivar: _imageWell
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) CAMLivePhotoButton *livePhotoButton; // ivar: _livePhotoButton
@property (retain, nonatomic) CAMModeDial *modeDial; // ivar: _modeDial
@property (retain, nonatomic) UIButton *reviewButton; // ivar: _reviewButton
@property (retain, nonatomic) CAMSharedLibraryButton *sharedLibraryButton; // ivar: _sharedLibraryButton
@property (retain, nonatomic) CUShutterButton *shutterButton; // ivar: _shutterButton
@property (retain, nonatomic) CUShutterButton *stillDuringVideoButton; // ivar: _stillDuringVideoButton
@property (retain, nonatomic) CAMTimerButton *timerButton; // ivar: _timerButton
@property (retain, nonatomic) CAMUtilityBar *utilityBar; // ivar: _utilityBar
@property (nonatomic) CGFloat utilityBarExtensionDistance; // ivar: _utilityBarExtensionDistance
@property (weak, nonatomic) NSObject<CAMControlVisibilityUpdateDelegate> *visibilityUpdateDelegate; // ivar: _visibilityUpdateDelegate


+(BOOL)shouldUseSafeAreaInsetForLayoutStyle:(NSInteger)arg0 traitCollection:(id)arg1 ;
+(BOOL)wantsVerticalBarForLayoutStyle:(NSInteger)arg0 ;
+(struct CGRect )shutterButtonAlignmentRectInBounds:(struct CGRect )arg0 forLayoutStyle:(NSInteger)arg1 traitCollection:(id)arg2 safeAreaInsets:(struct UIEdgeInsets )arg3 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_opacityForBackgroundStyle:(NSInteger)arg0 ;
-(id)_currentMenuButtons;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)touchingRecognizersToCancel;
-(struct CGRect )collapsedFrameForMenuButton:(id)arg0 ;
-(struct CGRect )expandedFrameForMenuButton:(id)arg0 ;
-(void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(NSInteger)arg0 ;
-(void)_ensureSubviewOrdering;
-(void)_iterateViewsInHUDManager:(id)arg0 forHUDItem:(id)arg1 ;
-(void)_layoutCreativeCameraButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutDoneButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutFlipButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutImageWellForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutMenuButtons:(id)arg0 apply:(BOOL)arg1 withExpandedMenuButton:(id)arg2 collapsingMenuButton:(id)arg3 collapsingFrame:(struct CGRect *)arg4 ;
-(void)_layoutModeDialForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutReviewButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutShutterButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutStillDuringVideoButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutUtilityBarForLayoutStyle:(NSInteger)arg0 ;
-(void)_updateControlVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateCreativeCameraButtonTappableEdgeInsets;
-(void)_updateFlipButtonTappableEdgeInsets;
-(void)_updateImageWellTappableEdgeInsets;
-(void)apertureButtonNeedsLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)collapseMenuButton:(id)arg0 animated:(BOOL)arg1 ;
-(void)expandMenuButton:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;


@end


#endif