// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDTIMELINEAPPENDIXCELL_H
#define WDMEDICALRECORDTIMELINEAPPENDIXCELL_H

@class UIView, NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UIView *chevronView; // ivar: _chevronView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)setupSubviews;
-(void)tintColorDidChange;


@end


#endif