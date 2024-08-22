// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTTOOLBAR_H
#define AVTTOOLBAR_H

@class UIView, NSArray, UIVisualEffectView;
@protocol AVTToolBarDelegate;



@interface AVTToolBar : UIView

@property (retain, nonatomic) UIView *border; // ivar: _border
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (weak, nonatomic) NSObject<AVTToolBarDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(CGFloat)defaultToolBarHeight;
-(id)buttonWithTitle:(id)arg0 isDefault:(BOOL)arg1 ;
-(id)initWithButtons:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 forButtonAtIndex:(NSUInteger)arg1 ;
-(void)setupBorder;
-(void)setupView;


@end


#endif