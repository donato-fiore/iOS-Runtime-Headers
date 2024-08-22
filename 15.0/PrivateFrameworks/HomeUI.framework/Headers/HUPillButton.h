// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPILLBUTTON_H
#define HUPILLBUTTON_H

@class UIButton, UIView, UIFont, UILabel, NSString, UIColor, NAUILayoutConstraintSet;



@interface HUPillButton : UIButton

@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIFont *buttonFont;
@property (readonly, nonatomic) UILabel *buttonLabel; // ivar: _buttonLabel
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // ivar: _constraintSet
@property (readonly, nonatomic) NSUInteger cornerRadiusStyle; // ivar: _cornerRadiusStyle
@property (nonatomic) ? metrics; // ivar: _metrics
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


+(BOOL)requiresConstraintBasedLayout;
+(struct ? )defaultMetrics;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)description;
-(id)initWithBackgroundStyle:(NSUInteger)arg0 ;
-(id)initWithBackgroundStyle:(NSUInteger)arg0 cornerRadiusStyle:(NSUInteger)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_didTap:(id)arg0 ;
-(void)_setupConstraintSet;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif