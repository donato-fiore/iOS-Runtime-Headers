// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDREFERENCERANGEVIEWCELL_H
#define WDMEDICALRECORDREFERENCERANGEVIEWCELL_H

@class NSString, UILabel, HKInspectableValueInRange;
@protocol WDAttributedSubtitleDisplayable;


#import "WDMedicalRecordGroupableCell.h"
#import "HRExpandedRangeValueView.h"

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable>



@property (retain, nonatomic) HRExpandedRangeValueView *expandedRangeValueView; // ivar: _expandedRangeValueView
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) HKInspectableValueInRange *valueInRange; // ivar: _valueInRange


-(void)setAttributedSubtitleText:(id)arg0 ;
-(void)setupSubviews;


@end


#endif