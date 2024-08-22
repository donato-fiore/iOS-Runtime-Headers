// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLENROLLVIEWBOTTOMCONTAINER_H
#define BKUIPEARLENROLLVIEWBOTTOMCONTAINER_H

@class UIView, NSMutableDictionary, UILayoutGuide, UIView<BKUIScrollableContainer>, NSArray;
@protocol BKUIPearlBottomContainerDelegate;


#import "BKUIPearlInstructionView.h"

@interface BKUIPearlEnrollViewBottomContainer : UIView

@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView; // ivar: _animatingInstructionView
@property (retain, nonatomic) NSMutableDictionary *customDetailStrings; // ivar: _customDetailStrings
@property (retain, nonatomic) NSMutableDictionary *customInstructionStrings; // ivar: _customInstructionStrings
@property (weak, nonatomic) NSObject<BKUIPearlBottomContainerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) BOOL inDemo; // ivar: _inDemo
@property (retain, nonatomic) UILayoutGuide *instructionBaselineLayoutGuide; // ivar: _instructionBaselineLayoutGuide
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView; // ivar: _instructionView
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *offScreenScrollview; // ivar: _offScreenScrollview
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *onScreenScrollview; // ivar: _onScreenScrollview
@property (retain, nonatomic) NSArray *onscreenScrollViewConstraints; // ivar: _onscreenScrollViewConstraints
@property (nonatomic) CGFloat overlapValue; // ivar: _overlapValue
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *overlappingScrollview; // ivar: _overlappingScrollview
@property (retain, nonatomic) UIView<BKUIScrollableContainer> *scrollview; // ivar: _scrollview
@property (nonatomic) BOOL squareNeedsPositionLayout; // ivar: _squareNeedsPositionLayout


-(CGFloat)_topPaddingForButtonTray:(id)arg0 ;
-(id)_detailTextForState:(int)arg0 substate:(int)arg1 ;
-(id)_horizontalConstraintsForTagAlongTransitionView:(id)arg0 state:(int)arg1 position:(NSInteger)arg2 ;
-(id)_instructionTextForState:(int)arg0 substate:(int)arg1 ;
-(id)_locStateNameForState:(int)arg0 ;
-(id)_targetScrollViewForState:(int)arg0 ;
-(id)_updateTopPaddingAndReturnHorizontalConstraintsForScrollView:(id)arg0 state:(int)arg1 position:(NSInteger)arg2 ;
-(id)bottomLinkButton;
-(id)buttonTray;
-(id)buttonTrayTopAnchor;
-(id)initWithFrame:(struct CGRect )arg0 inBuddy:(BOOL)arg1 inDemo:(BOOL)arg2 scrollView:(id)arg3 overlapScrollView:(id)arg4 delegate:(id)arg5 squareNeedsPositionLayout:(BOOL)arg6 ;
-(id)nextStateButton;
-(void)_configureInstructionView:(id)arg0 forState:(int)arg1 substate:(int)arg2 ;
-(void)_updateButtonLayoutForScrollView:(id)arg0 ;
-(void)_updateButtonVisibilityForScrollView:(id)arg0 ;
-(void)_updateButtonVisibilityForScrollView:(id)arg0 state:(int)arg1 subState:(int)arg2 ;
-(void)escapeHatchButtonWasPressed:(id)arg0 ;
-(void)finalizeInstructionAnimation;
-(void)layoutSubviews;
-(void)nextStateButtonWasPressed:(id)arg0 ;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 parentView:(id)arg4 ;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 tagAlong:(id)arg4 parentView:(id)arg5 ;
-(void)retryWasPressed:(id)arg0 ;
-(void)setCustomDetailString:(id)arg0 forState:(int)arg1 ;
-(void)setCustomInstructionString:(id)arg0 forState:(int)arg1 ;
-(void)setupInitialUI;
-(void)updateButtonLayout;
-(void)updateButtonVisibility;
-(void)updateInstructionViewContentForState:(int)arg0 substate:(int)arg1 ;


@end


#endif