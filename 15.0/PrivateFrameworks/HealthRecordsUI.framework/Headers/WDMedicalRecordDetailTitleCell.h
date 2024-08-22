// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDDETAILTITLECELL_H
#define WDMEDICALRECORDDETAILTITLECELL_H

@class NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell

@property (copy, nonatomic) NSString *dateSubtitle;
@property (retain, nonatomic) UILabel *dateSubtitleLabel; // ivar: _dateSubtitleLabel
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)setupSubviews;


@end


#endif