// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUITOOLBAR_H
#define CNUITOOLBAR_H

@class UIView, NSArray, UIVisualEffectView;



@interface CNUIToolbar : UIView

@property (retain, nonatomic) UIView *border; // ivar: _border
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(CGFloat)defaultToolBarHeight;
-(BOOL)isEnabledForItem:(id)arg0 ;
-(id)buttonForItem:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 forItem:(id)arg1 ;
-(void)setupBorder;
-(void)setupView;


@end


#endif