// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDTIMELINEPANELTITLECELL_H
#define WDMEDICALRECORDTIMELINEPANELTITLECELL_H

@class NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelinePanelTitleCell : WDMedicalRecordGroupableCell

@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupSubviews;


@end


#endif