// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKBARBUTTONITEMCONTROL_H
#define HKBARBUTTONITEMCONTROL_H

@class UIControl, UIBarButtonItem, UIToolbar;



@interface HKBarButtonItemControl : UIControl

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (readonly, nonatomic) UIControl *barButtonItemControl; // ivar: _barButtonItemControl
@property (nonatomic) BOOL collapseHeight; // ivar: _collapseHeight
@property (nonatomic) CGFloat horizontalMargin; // ivar: _horizontalMargin
@property (nonatomic) NSInteger preferredHeight; // ivar: _preferredHeight
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar


-(BOOL)isEnabled;
-(id)initWithSystemItem:(NSInteger)arg0 preferredHeight:(CGFloat)arg1 collapseHeight:(BOOL)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_barButtonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif