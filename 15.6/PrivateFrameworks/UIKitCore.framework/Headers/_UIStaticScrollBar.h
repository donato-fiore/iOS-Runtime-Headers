// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATICSCROLLBAR_H
#define _UISTATICSCROLLBAR_H

@class NSInvocation, NSArray;
@protocol UIScrollAccessory;


#import "UIView.h"
#import "UIButton.h"
#import "UIScrollView.h"

@interface _UIStaticScrollBar : UIView <UIScrollAccessory>

 {
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
}


@property (readonly, nonatomic) NSInteger desiredAccessoryEdge;
@property (readonly, nonatomic) UIButton *downButton; // ivar: _downButton
@property (nonatomic) NSInteger edge; // ivar: _edge
@property (readonly, nonatomic) BOOL overlay;
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL shouldInsetButtonsForIndex; // ivar: _shouldInsetButtonsForIndex
@property (readonly, nonatomic) UIButton *upButton; // ivar: _upButton


-(NSUInteger)_axis;
-(id)_constraintsForEdge:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )centeringBounds;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupSubviewsIfNeeded;
-(void)buttonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)update;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif