// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIPEARLENROLLVIEWBOTTOMCONTAINER_H
#define BKUIPEARLENROLLVIEWBOTTOMCONTAINER_H

@class UIView, NSLayoutConstraint, NSMutableDictionary, UILayoutGuide, NSArray, UIScrollView;
@protocol BKUIPearlBottomContainerDelegate;


#import "BKUIPearlInstructionView.h"
#import "BKUIButtonTray.h"

@interface BKUIPearlEnrollViewBottomContainer : UIView

@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView; // ivar: _animatingInstructionView
@property (retain, nonatomic) BKUIButtonTray *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) NSLayoutConstraint *buttonTrayTopAnchor; // ivar: _buttonTrayTopAnchor
@property (retain, nonatomic) NSMutableDictionary *customDetailStrings; // ivar: _customDetailStrings
@property (retain, nonatomic) NSMutableDictionary *customInstructionStrings; // ivar: _customInstructionStrings
@property (weak, nonatomic) NSObject<BKUIPearlBottomContainerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) BOOL inDemo; // ivar: _inDemo
@property (retain, nonatomic) UILayoutGuide *instructionBaselineLayoutGuide; // ivar: _instructionBaselineLayoutGuide
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView; // ivar: _instructionView
@property (retain, nonatomic) NSArray *instructionViewConstraints; // ivar: _instructionViewConstraints
@property (nonatomic) CGFloat overlapValue; // ivar: _overlapValue
@property (retain, nonatomic) UIView *overlappingScrollContentView; // ivar: _overlappingScrollContentView
@property (retain, nonatomic) UIScrollView *overlappingScrollview; // ivar: _overlappingScrollview
@property (retain, nonatomic) NSLayoutConstraint *pinButtonTrayToBottomConstraint; // ivar: _pinButtonTrayToBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *pinButtonTrayToScrollViewBottomConstraint; // ivar: _pinButtonTrayToScrollViewBottomConstraint
@property (retain, nonatomic) UIView *scrollContentView; // ivar: _scrollContentView
@property (retain, nonatomic) UIScrollView *scrollview; // ivar: _scrollview


-(id)_constraintsForInstructionView:(id)arg0 state:(int)arg1 position:(NSInteger)arg2 ;
-(id)_detailTextForState:(int)arg0 substate:(int)arg1 ;
-(id)_instructionTextForState:(int)arg0 substate:(int)arg1 ;
-(id)_locStateNameForState:(int)arg0 ;
-(id)_targetScrollContentViewForState:(int)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 instructionView:(id)arg1 buttonTray:(id)arg2 inBuddy:(BOOL)arg3 inDemo:(BOOL)arg4 delegate:(id)arg5 ;
-(void)_configureInstructionView:(id)arg0 forState:(int)arg1 substate:(int)arg2 ;
-(void)finalizeInstructionAnimation;
-(void)layoutSubviews;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 parentView:(id)arg4 ;
-(void)setCustomDetailString:(id)arg0 forState:(int)arg1 ;
-(void)setCustomInstructionString:(id)arg0 forState:(int)arg1 ;
-(void)setupInitialUI;
-(void)updateButtonLayout;
-(void)updateInstructionViewContentforState:(int)arg0 substate:(int)arg1 ;


@end


#endif