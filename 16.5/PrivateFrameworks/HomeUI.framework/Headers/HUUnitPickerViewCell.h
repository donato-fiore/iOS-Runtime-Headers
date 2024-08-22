// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUNITPICKERVIEWCELL_H
#define HUUNITPICKERVIEWCELL_H

@class NSAttributedString, UILabel, NSString;


#import "HUPickerViewCell.h"

@interface HUUnitPickerViewCell : HUPickerViewCell

@property (readonly, nonatomic) NSAttributedString *longestValue; // ivar: _longestValue
@property (readonly, nonatomic) CGSize longestValueSize; // ivar: _longestValueSize
@property (retain, nonatomic) UILabel *unitLabel; // ivar: _unitLabel
@property (copy, nonatomic) NSString *unitText; // ivar: _unitText


-(id)effectiveUnitText;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_estimatedSizeForAttributedString:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)reloadPickerView;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif