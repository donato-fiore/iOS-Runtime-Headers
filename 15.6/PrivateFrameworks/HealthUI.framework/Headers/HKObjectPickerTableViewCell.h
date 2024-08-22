// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOBJECTPICKERTABLEVIEWCELL_H
#define HKOBJECTPICKERTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UIStackView, NSArray, NSString, UILabel, UIView, NSAttributedString;


#import "HKObjectPickerDetailView.h"

@interface HKObjectPickerTableViewCell : UITableViewCell {
    NSInteger _presentationOptions;
}


@property (retain, nonatomic) UIImageView *checkboxView; // ivar: _checkboxView
@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (copy, nonatomic) NSArray *detailItems; // ivar: _detailItems
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) HKObjectPickerDetailView *patientDetailView; // ivar: _patientDetailView
@property (copy, nonatomic) NSArray *patientDetails;
@property (copy, nonatomic) NSString *patientName;
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (copy, nonatomic) NSString *primaryText;
@property (retain, nonatomic) UIStackView *recordDetailStackView; // ivar: _recordDetailStackView
@property (retain, nonatomic) UIView *secondSeparatorView; // ivar: _secondSeparatorView
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 presentationOptions:(NSInteger)arg2 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)prepareForReuse;


@end


#endif