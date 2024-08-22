// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEVIEW_H
#define PKPALETTEVIEW_H

@class UIView, MTMaterialView, NSString, NSLayoutConstraint, UIViewController;
@protocol PKPaletteViewStateSubject, PKPaletteHostViewDelegate, PKPaletteHostingWindowSceneObserver, PKPalettePopoverPresenting, PKPalettePopoverDismissing, PKPaletteViewDelegate, PKPaletteViewInternalDelegate, PKPaletteViewHosting;


#import "PKPaletteContainerView.h"
#import "PKPaletteScaleFactorPolicy.h"
#import "PKPaletteToolPreview.h"

@interface PKPaletteView : UIView <PKPaletteViewStateSubject, PKPaletteHostViewDelegate, PKPaletteHostingWindowSceneObserver, PKPalettePopoverPresenting, PKPalettePopoverDismissing>



@property (readonly, nonatomic) CGRect adjustedWindowSceneBounds; // ivar: _adjustedWindowSceneBounds
@property (nonatomic) NSUInteger autoHideCorner; // ivar: _autoHideCorner
@property (nonatomic, getter=isAutoHideEnabled) BOOL autoHideEnabled; // ivar: _autoHideEnabled
@property (readonly, nonatomic) MTMaterialView *backgroundMaterialView; // ivar: _backgroundMaterialView
@property (readonly, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (readonly, nonatomic) CGFloat compactPaletteHeight; // ivar: _compactPaletteHeight
@property (readonly, nonatomic) PKPaletteContainerView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDirectionalEdgeInsets edgeInsetsInCompactSize; // ivar: _edgeInsetsInCompactSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresSafeAreaInsetsInCompactSize; // ivar: _ignoresSafeAreaInsetsInCompactSize
@property (weak, nonatomic) NSObject<PKPaletteViewInternalDelegate> *internalDelegate; // ivar: _internalDelegate
@property (nonatomic) NSUInteger lastEdgeLocation; // ivar: _lastEdgeLocation
@property (readonly, nonatomic) NSUInteger lastPaletteEdgePositionWhileDragging; // ivar: _lastPaletteEdgePositionWhileDragging
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCenterXConstraint; // ivar: _paletteContainerCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCenterYConstraint; // ivar: _paletteContainerCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCompactBottomConstraint; // ivar: _paletteContainerCompactBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCompactLeftConstraint; // ivar: _paletteContainerCompactLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCompactRightConstraint; // ivar: _paletteContainerCompactRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerCompactTopConstraint; // ivar: _paletteContainerCompactTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerHeightConstraint; // ivar: _paletteContainerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteContainerWidthConstraint; // ivar: _paletteContainerWidthConstraint
@property (nonatomic) CGFloat paletteContentAlpha;
@property (readonly, nonatomic) BOOL paletteHasLayoutSubviews; // ivar: _paletteHasLayoutSubviews
@property (readonly, nonatomic) BOOL paletteIsCompactSize; // ivar: _paletteIsCompactSize
@property (nonatomic) UIEdgeInsets palettePopoverLayoutSceneMargins; // ivar: _palettePopoverLayoutSceneMargins
@property (retain, nonatomic) UIViewController *palettePopoverPresentingController; // ivar: _palettePopoverPresentingController
@property (readonly, nonatomic) NSInteger palettePosition; // ivar: _palettePosition
@property (readonly, nonatomic) CGFloat paletteScaleFactor; // ivar: _paletteScaleFactor
@property (readonly, nonatomic) PKPaletteScaleFactorPolicy *paletteScaleFactorPolicy; // ivar: _paletteScaleFactorPolicy
@property (weak, nonatomic) NSObject<PKPaletteViewHosting> *paletteViewHosting; // ivar: _paletteViewHosting
@property (readonly, nonatomic) NSUInteger paletteViewType;
@property (weak, nonatomic) UIViewController *presentationController; // ivar: _presentationController
@property (readonly, nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (readonly, nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (readonly, nonatomic) BOOL shouldAdjustShadowRadiusForMinimized; // ivar: _shouldAdjustShadowRadiusForMinimized
@property (readonly, nonatomic) BOOL shouldExpandFromCorner; // ivar: _shouldExpandFromCorner
@property (readonly, nonatomic) BOOL shouldStartUpMinimized; // ivar: _shouldStartUpMinimized
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaletteToolPreview *toolPreview; // ivar: _toolPreview
@property (retain, nonatomic) NSLayoutConstraint *toolPreviewCenterXConstraint; // ivar: _toolPreviewCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPreviewCenterYConstraint; // ivar: _toolPreviewCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPreviewHeightConstraint; // ivar: _toolPreviewHeightConstraint
@property (readonly, nonatomic, getter=isToolPreviewInstalled) BOOL toolPreviewInstalled;
@property (readonly, nonatomic) BOOL toolPreviewMatchesExpandedTool;
@property (nonatomic, getter=isToolPreviewMinimized) BOOL toolPreviewMinimized; // ivar: _toolPreviewMinimized
@property (retain, nonatomic) NSLayoutConstraint *toolPreviewWidthConstraint; // ivar: _toolPreviewWidthConstraint
@property (readonly, nonatomic) BOOL useCompactSize;


+(id)makeBackgroundView;
-(BOOL)_isCompactInSmallestQuickNoteWindowScene;
-(BOOL)_isPaletteContentViewHidden;
-(BOOL)_loadOptions;
-(BOOL)isPalettePresentingPopover;
-(BOOL)shouldPalettePresentPopover;
-(BOOL)wantsCustomPalettePopoverPresentationSource;
-(BOOL)wantsToolPreviewForTraitCollection:(id)arg0 ;
-(CGFloat)borderWidthForTraitCollection:(id)arg0 ;
-(CGFloat)dampingRatioForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)responseForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)scalingFactor;
-(NSUInteger)_nextAutoHideCorner;
-(NSUInteger)edgeLocationToDockFromCorner:(NSUInteger)arg0 ;
-(NSUInteger)palettePopoverPermittedArrowDirections;
-(id)_stateDictionary;
-(id)borderColorForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)palettePopoverPassthroughViews;
-(id)palettePopoverSourceView;
-(struct CGRect )_palettePopoverSourceRect;
-(struct CGRect )palettePopoverSourceRectToPresentViewController:(id)arg0 ;
-(struct CGSize )minimizedPaletteSize;
-(struct CGSize )paletteSizeForEdge:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )palettePopoverLayoutMargins;
-(void)_didChangeAutoHideEnabled;
-(void)_installBackgroundViewInView:(id)arg0 ;
-(void)_installClippingViewInView:(id)arg0 ;
-(void)_installContainerViewInView:(id)arg0 ;
-(void)_installToolPreviewInView:(id)arg0 ;
-(void)_saveOptions;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_uninstallToolPreview;
-(void)_updateContainerSizeConstraints;
-(void)_updateContainerSizeConstraintsForEdge:(NSUInteger)arg0 ;
-(void)_updateToolPreviewScalingAnimated:(BOOL)arg0 ;
-(void)_updateToolPreviewVisibility;
-(void)_willDockPaletteToCorner:(NSUInteger)arg0 ;
-(void)_willDockPaletteToEdge:(NSUInteger)arg0 prepareForExpansion:(BOOL)arg1 isPaletteChangingOrientation:(BOOL)arg2 ;
-(void)configureForDockedAtCorner;
-(void)configureForDockedAtEdge:(NSUInteger)arg0 ;
-(void)didChangePalettePosition;
-(void)didChangePalettePositionFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 ;
-(void)didChangePaletteScaleFactor;
-(void)didEndAppearanceAnimation;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)hostView:(id)arg0 didDockPaletteToPosition:(NSInteger)arg1 ;
-(void)hostView:(id)arg0 willDockPaletteToPosition:(NSInteger)arg1 prepareForExpansion:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)paletteHostingWindowSceneDidChangeBounds:(id)arg0 ;
-(void)saveOptionsIfNecessary;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePalettePopover:(id)arg0 ;
-(void)updatePopoverUI;
-(void)willStartAppearanceAnimation:(BOOL)arg0 ;


@end


#endif