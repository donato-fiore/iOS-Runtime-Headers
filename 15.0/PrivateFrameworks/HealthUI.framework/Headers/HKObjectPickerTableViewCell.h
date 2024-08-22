// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOBJECTPICKERTABLEVIEWCELL_H
#define HKOBJECTPICKERTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UIStackView, UILabel, NSArray, NSString, UIView, UIButton, NSAttributedString;
@protocol HKObjectPickerTableViewCellDelegate;



@interface HKObjectPickerTableViewCell : UITableViewCell {
    NSInteger _presentationStyle;
}


@property (retain, nonatomic) UIImageView *checkboxView; // ivar: _checkboxView
@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (weak, nonatomic) NSObject<HKObjectPickerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *detailsLabel; // ivar: _detailsLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UIStackView *objectInfoStackView; // ivar: _objectInfoStackView
@property (copy, nonatomic) NSArray *patientDetails;
@property (copy, nonatomic) NSString *patientName;
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UIStackView *primaryLabelStackView; // ivar: _primaryLabelStackView
@property (copy, nonatomic) NSString *primaryText;
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIStackView *secondaryLabelStackView; // ivar: _secondaryLabelStackView
@property (copy, nonatomic) NSArray *secondaryText;
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) UIButton *showDetailsButton; // ivar: _showDetailsButton
@property (copy, nonatomic) NSAttributedString *tertiaryAttributedText;
@property (retain, nonatomic) UILabel *tertiaryLabel; // ivar: _tertiaryLabel
@property (copy, nonatomic) NSString *tertiaryText;


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 presentationStyle:(NSInteger)arg2 ;
-(void)_setupSubviews;
-(void)prepareForReuse;
-(void)showDetailsButtonTapped:(id)arg0 ;


@end


#endif