// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPOSESUBSCRIPTIONSELECTORBUTTON_H
#define CKCOMPOSESUBSCRIPTIONSELECTORBUTTON_H

@class UIButton, TPBadgeView, UILabel, UITapGestureRecognizer, UIStackView;
@protocol CKComposeSubscriptionSelectorButtonDelegate;



@interface CKComposeSubscriptionSelectorButton : UIButton

@property (retain, nonatomic) TPBadgeView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) UILabel *buttonTitleLabel; // ivar: _buttonTitleLabel
@property (weak, nonatomic) NSObject<CKComposeSubscriptionSelectorButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UITapGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (nonatomic) NSUInteger theme; // ivar: _theme


-(id)init;
-(void)handleTap:(id)arg0 ;
-(void)loadConstraintsForButton;
-(void)updateContentsWithTitle:(id)arg0 badgeText:(id)arg1 theme:(NSUInteger)arg2 ;
-(void)updateTheme;
-(void)updateTitleFont:(id)arg0 ;


@end


#endif