// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTEADDITIONALOPTIONSVIEW_H
#define PKPALETTEADDITIONALOPTIONSVIEW_H

@class UIView, UIStackView, NSString, NSLayoutConstraint, UIViewController;
@protocol PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteAdditionalOptionsViewDelegate, PKPalettePopoverPresenting;


#import "PKPaletteButton.h"
#import "PKPaletteKeyboardButton.h"
#import "PKPaletteButtonGroupView.h"
#import "PKPaletteMoreOptionsViewController.h"

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>



@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn; // ivar: _autoHideOn
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteAdditionalOptionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (retain, nonatomic) PKPaletteButton *ellipsisButton; // ivar: _ellipsisButton
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonHeightConstraint; // ivar: _ellipsisButtonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonWidthConstraint; // ivar: _ellipsisButtonWidthConstraint
@property (nonatomic) BOOL enableKeyboardButtons; // ivar: _enableKeyboardButtons
@property (nonatomic) NSInteger floatingKeyboardType; // ivar: _floatingKeyboardType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFingerDrawsOn; // ivar: _isFingerDrawsOn
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton; // ivar: _keyboardButton
@property (retain, nonatomic) PKPaletteButtonGroupView *keyboardButtonGroupView; // ivar: _keyboardButtonGroupView
@property (retain, nonatomic) PKPaletteMoreOptionsViewController *moreOptionsViewController; // ivar: _moreOptionsViewController
@property (weak, nonatomic) NSObject<PKPalettePopoverPresenting> *palettePopoverPresenting; // ivar: _palettePopoverPresenting
@property (retain, nonatomic) PKPaletteButton *plusButton; // ivar: _plusButton
@property (retain, nonatomic) NSLayoutConstraint *plusButtonHeightConstraint; // ivar: _plusButtonHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *plusButtonWidthConstraint; // ivar: _plusButtonWidthConstraint
@property (retain, nonatomic) UIViewController *presentedPopoverViewController; // ivar: _presentedPopoverViewController
@property (retain, nonatomic) PKPaletteButton *returnKeyButton; // ivar: _returnKeyButton
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (nonatomic) BOOL shouldShowFingerDrawsOption; // ivar: _shouldShowFingerDrawsOption
@property (nonatomic) BOOL shouldShowTapToRadarOption; // ivar: _shouldShowTapToRadarOption
@property (nonatomic) BOOL showsPlusButton; // ivar: _showsPlusButton
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsEllipsisButtonVisible; // ivar: _wantsEllipsisButtonVisible
@property (nonatomic) BOOL wantsInputAssistantViewVisible; // ivar: _wantsInputAssistantViewVisible


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_didSelectEllipsisButton:(id)arg0 ;
-(void)_didSelectPlusButton:(id)arg0 ;
-(void)_handleKeyboardButton;
-(void)_handleReturnKeyButton;
-(void)_updateUI;
-(void)dealloc;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg0 ;
-(void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg0 ;
-(void)moreOptionsViewControllerDidToggleAutoHide:(id)arg0 ;
-(void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePopoverUI;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif