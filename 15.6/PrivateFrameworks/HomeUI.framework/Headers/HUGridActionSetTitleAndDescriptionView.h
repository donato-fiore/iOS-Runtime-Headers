// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDACTIONSETTITLEANDDESCRIPTIONVIEW_H
#define HUGRIDACTIONSETTITLEANDDESCRIPTIONVIEW_H

@class UIView, UILabel, NSArray, NSLayoutConstraint;



@interface HUGridActionSetTitleAndDescriptionView : UIView

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSArray *titleAndDescriptionConstraints; // ivar: _titleAndDescriptionConstraints
@property (nonatomic) CGFloat titleDescriptionLineSpacing; // ivar: _titleDescriptionLineSpacing
@property (retain, nonatomic) NSLayoutConstraint *titleDescriptionSpacingConstraint; // ivar: _titleDescriptionSpacingConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 titleLabelSuperview:(id)arg1 ;
-(void)setTitleAndDescriptionLabelTintColor:(id)arg0 ;
-(void)updateConstraints;
-(void)updateTitleText:(id)arg0 descriptionText:(id)arg1 ;


@end


#endif