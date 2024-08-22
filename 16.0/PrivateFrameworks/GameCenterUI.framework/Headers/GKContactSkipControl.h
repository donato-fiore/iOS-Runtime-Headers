// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCONTACTSKIPCONTROL_H
#define GKCONTACTSKIPCONTROL_H

@class UIControl, UIView, NSArray, NSMutableDictionary, NSString;



@interface GKContactSkipControl : UIControl

@property (retain, nonatomic) UIView *buttonView; // ivar: _buttonView
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) NSMutableDictionary *buttonsToTitles; // ivar: _buttonsToTitles
@property (retain, nonatomic) UIView *centeringView; // ivar: _centeringView
@property (retain, nonatomic) NSString *lastSelectedValue; // ivar: _lastSelectedValue
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(NSInteger)valueButtonCountThatFitsHeight:(CGFloat)arg0 ;
-(id)compactPhoneValues:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nextTitleFollowingValue:(id)arg0 ;
-(void)adjustForTraitCollection:(id)arg0 ;
-(void)awakeFromNib;
-(void)determineButtonFromGesture:(id)arg0 ;
-(void)setupButtonView;
-(void)setupValueButtons;
-(void)valueSelected:(id)arg0 ;


@end


#endif