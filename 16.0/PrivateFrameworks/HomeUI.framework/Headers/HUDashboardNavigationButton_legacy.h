// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDNAVIGATIONBUTTON_LEGACY_H
#define HUDASHBOARDNAVIGATIONBUTTON_LEGACY_H

@class UIBarButtonItem, NSNumber, UIView, NSString, UIFont, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface HUDashboardNavigationButton_legacy : UIBarButtonItem <UIGestureRecognizerDelegate>



@property (copy, nonatomic) NSNumber *badgeValue; // ivar: _badgeValue
@property (retain, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(id)initWithBarButtonSystemItem:(NSInteger)arg0 ;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 menu:(id)arg1 ;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 menu:(id)arg1 ;
-(id)initWithImage:(id)arg0 style:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 menu:(id)arg1 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)_commonInit;
-(void)_didTap:(id)arg0 ;
-(void)setAction:(SEL)arg0 ;
-(void)setMenu:(id)arg0 ;
-(void)setTarget:(id)arg0 ;


@end


#endif