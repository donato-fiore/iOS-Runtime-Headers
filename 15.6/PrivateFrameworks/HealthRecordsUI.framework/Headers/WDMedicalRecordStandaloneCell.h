// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMEDICALRECORDSTANDALONECELL_H
#define WDMEDICALRECORDSTANDALONECELL_H

@class UIView, NSString, UILabel;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordStandaloneCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UIView *chevronView; // ivar: _chevronView
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)setupSubviews;


@end


#endif