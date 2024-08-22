// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISWIPEACTIONPULLVIEW_H
#define UISWIPEACTIONPULLVIEW_H

@class NSMutableArray, NSArray;
@protocol UISwipeActionPullViewDelegate;


#import "UIView.h"
#import "UISwipeActionButton.h"
#import "UIColor.h"
#import "UIContextualAction.h"

@interface UISwipeActionPullView : UIView {
    UIView *_clippingView;
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    BOOL _swipeActionsDidChange;
    BOOL _isTentative;
    CGFloat _openThreshold;
    CGFloat _confirmationThreshold;
    CGFloat _minimumOffset;
    NSUInteger _style;
}


@property (nonatomic) BOOL autosizesButtons; // ivar: _autosizesButtons
@property (copy, nonatomic) UIColor *backgroundPullColor; // ivar: _backgroundPullColor
@property (nonatomic) BOOL buttonsUnderlapSwipedView; // ivar: _buttonsUnderlapSwipedView
@property (readonly, nonatomic) NSUInteger cellEdge; // ivar: _cellEdge
@property (readonly, nonatomic) CGFloat confirmationThreshold;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) CGFloat currentOffset; // ivar: _currentOffset
@property (weak, nonatomic) NSObject<UISwipeActionPullViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) CGFloat openThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) UIContextualAction *primarySwipeAction;
@property (nonatomic, getter=_roundedStyleCornerRadius, setter=_setRoundedStyleCornerRadius:) CGFloat roundedStyleCornerRadius; // ivar: _roundedStyleCornerRadius
@property (nonatomic) NSUInteger state; // ivar: _state


-(CGFloat)_directionalMultiplier;
-(CGFloat)_interButtonPadding;
-(CGFloat)_paddingToSwipedView;
-(CGFloat)_totalInterButtonPadding;
-(Class)_buttonClass;
-(NSUInteger)_swipeActionCount;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 cellEdge:(NSUInteger)arg1 style:(NSUInteger)arg2 ;
-(id)sourceViewForAction:(id)arg0 ;
-(void)_layoutClippingLayer;
-(void)_performAction:(id)arg0 offset:(CGFloat)arg1 extraOffset:(CGFloat)arg2 ;
-(void)_pressedButton:(id)arg0 ;
-(void)_rebuildButtons;
-(void)_setLayerBounds:(struct CGRect )arg0 ;
-(void)_setWidth:(CGFloat)arg0 ;
-(void)_setupClippingViewIfNeeded;
-(void)_tappedButton:(id)arg0 ;
-(void)_unpressedButton:(id)arg0 ;
-(void)configureWithSwipeActions:(id)arg0 ;
-(void)freeze;
-(void)layoutSubviews;
-(void)moveToOffset:(CGFloat)arg0 extraOffset:(CGFloat)arg1 animator:(id)arg2 usingSpringWithStiffness:(CGFloat)arg3 initialVelocity:(CGFloat)arg4 ;
-(void)resetView;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif