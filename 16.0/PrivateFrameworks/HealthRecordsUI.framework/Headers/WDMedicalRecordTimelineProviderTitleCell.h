// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDTIMELINEPROVIDERTITLECELL_H
#define WDMEDICALRECORDTIMELINEPROVIDERTITLECELL_H

@class NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelineProviderTitleCell : WDMedicalRecordGroupableCell

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)setupSubviews;


@end


#endif