// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDDETAILSUBTITLECELL_H
#define WDMEDICALRECORDDETAILSUBTITLECELL_H

@class NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell

@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)setupSubviews;


@end


#endif