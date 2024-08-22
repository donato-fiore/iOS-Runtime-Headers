// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNGEMINIPICKERCELL_H
#define CNGEMINIPICKERCELL_H

@class UILabel;


#import "CNLabeledCell.h"

@interface CNGeminiPickerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)labelView;
-(id)valueView;
-(void)setText:(id)arg0 detailText:(id)arg1 ;
-(void)tintColorDidChange;


@end


#endif