// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTITLEVALUEDESCRIPTIONCELL_H
#define HUTITLEVALUEDESCRIPTIONCELL_H

@class UIFont, UILabel, NSLayoutConstraint, NSString;


#import "HUTitleDescriptionCell.h"

@interface HUTitleValueDescriptionCell : HUTitleDescriptionCell

@property (nonatomic) BOOL hideValue; // ivar: _hideValue
@property (nonatomic) BOOL valueColorFollowsTintColor; // ivar: _valueColorFollowsTintColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) NSLayoutConstraint *valueLabelWidthConstraint; // ivar: _valueLabelWidthConstraint
@property (retain, nonatomic) NSString *valueText; // ivar: _valueText


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateValue;
-(void)_updateValueHidden;
-(void)_updateValueWidthConstraintConstant;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif