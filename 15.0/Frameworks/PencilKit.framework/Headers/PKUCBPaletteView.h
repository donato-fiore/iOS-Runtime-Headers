// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKUCBPALETTEVIEW_H
#define PKUCBPALETTEVIEW_H

@class UIStackView, NSLayoutConstraint, UIView, NSArray, NSString;
@protocol PKPaletteButtonIntrinsicContentSizeObserver;


#import "PKPaletteView.h"
#import "PKPaletteButtonGroupView.h"
#import "PKPaletteReturnKeyButton.h"

@interface PKUCBPaletteView : PKPaletteView <PKPaletteButtonIntrinsicContentSizeObserver>



@property (retain, nonatomic) UIStackView *_buttonStackView; // ivar: __buttonStackView
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewBottomConstraint; // ivar: __buttonStackViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewHeightConstraint; // ivar: __buttonStackViewHeightConstraint
@property (retain, nonatomic) PKPaletteButtonGroupView *_centeredButtonGroupView; // ivar: __centeredButtonGroupView
@property (retain, nonatomic) UIView *_contentView; // ivar: __contentView
@property (retain, nonatomic) NSLayoutConstraint *_contentViewBottomAnchor; // ivar: __contentViewBottomAnchor
@property (retain, nonatomic) NSLayoutConstraint *_contentViewLeadingAnchor; // ivar: __contentViewLeadingAnchor
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTopAnchor; // ivar: __contentViewTopAnchor
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTrailingAnchor; // ivar: __contentViewTrailingAnchor
@property (retain, nonatomic) PKPaletteButtonGroupView *_leadingButtonGroupView; // ivar: __leadingButtonGroupView
@property (retain, nonatomic) PKPaletteReturnKeyButton *_returnKeyButton; // ivar: __returnKeyButton
@property (retain, nonatomic) PKPaletteButtonGroupView *_returnKeyButtonGroupView; // ivar: __returnKeyButtonGroupView
@property (retain, nonatomic) PKPaletteButtonGroupView *_trailingButtonGroupView; // ivar: __trailingButtonGroupView
@property (nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems; // ivar: _alwaysIncludeReturnKeyAndInputAssistantItems
@property (copy, nonatomic) NSArray *centeredBarButtons; // ivar: _centeredBarButtons
@property (copy, nonatomic) NSArray *compactContentViewConstraints; // ivar: _compactContentViewConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *leadingBarButtons; // ivar: _leadingBarButtons
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (copy, nonatomic) NSArray *nonCompactContentViewConstraints; // ivar: _nonCompactContentViewConstraints
@property (nonatomic, getter=isReturnKeyEnabled) BOOL returnKeyEnabled; // ivar: _returnKeyEnabled
@property (copy, nonatomic) id *returnKeyHandler; // ivar: _returnKeyHandler
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingBarButtons; // ivar: _trailingBarButtons
@property (nonatomic, getter=isUpdatingUI) BOOL updatingUI; // ivar: _updatingUI


+(id)makeBackgroundView;
-(BOOL)_shouldHideLeadingButtonGroupView;
-(BOOL)_shouldHideReturnKeyButtonGroupView;
-(BOOL)_shouldHideTrailingButtonGroupView;
-(BOOL)_shouldShowCenterButtonGroupView;
-(BOOL)_shouldShowInputAssistantItems;
-(BOOL)_shouldShowReturnKey;
-(BOOL)isPalettePresentingPopover;
-(BOOL)shouldAdjustShadowRadiusForMinimized;
-(BOOL)shouldExpandFromCorner;
-(BOOL)shouldStartUpMinimized;
-(BOOL)toolPreviewMatchesExpandedTool;
-(CGFloat)_buttonGroupSpacing;
-(CGFloat)_contentMargin;
-(CGFloat)_narrowLength;
-(CGFloat)borderWidthForTraitCollection:(id)arg0 ;
-(CGFloat)compactPaletteHeight;
-(CGFloat)dampingRatioForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)responseForThrowingFromPosition:(NSInteger)arg0 toPosition:(NSInteger)arg1 withVelocity:(struct CGPoint )arg2 ;
-(CGFloat)shadowOpacity;
-(CGFloat)shadowRadius;
-(NSUInteger)paletteViewType;
-(id)borderColorForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )paletteSizeForEdge:(NSUInteger)arg0 ;
-(void)_flashLanguageIndicatorIfNeeded;
-(void)_handleReturnKey;
-(void)_performUpdateUIBlock:(id)arg0 ;
-(void)_updateCenteredButtonGroup;
-(void)_updateLeadingButtonGroup;
-(void)_updateReturnKeyButton;
-(void)_updateSubviewLayoutAxis;
-(void)_updateTrailingButtonGroup;
-(void)_updateUI;
-(void)buttonDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)didChangePalettePosition;
-(void)didChangePaletteScaleFactor;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)willStartAppearanceAnimation:(BOOL)arg0 ;


@end


#endif