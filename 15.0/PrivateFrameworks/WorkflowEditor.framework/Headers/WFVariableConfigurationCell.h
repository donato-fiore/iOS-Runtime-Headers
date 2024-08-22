// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONCELL_H
#define WFVARIABLECONFIGURATIONCELL_H

@class UITableViewCell, UIImageView, CAShapeLayer, UIView, NSString;
@protocol WFVariableConfigurationCellSizingDelegate;



@interface WFVariableConfigurationCell : UITableViewCell

@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (readonly, nonatomic) UIImageView *disclosureImageView; // ivar: _disclosureImageView
@property (readonly, nonatomic) CAShapeLayer *maskLayer; // ivar: _maskLayer
@property (nonatomic) NSUInteger roundedCorners; // ivar: _roundedCorners
@property (nonatomic) BOOL roundsCorners; // ivar: _roundsCorners
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic) BOOL showsSeparator; // ivar: _showsSeparator
@property (weak, nonatomic) NSObject<WFVariableConfigurationCellSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (copy, nonatomic) NSString *valueText; // ivar: _valueText


+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateMask;


@end


#endif