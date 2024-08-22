// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDCATEGORYSECTIONHEADERCELL_H
#define WDMEDICALRECORDCATEGORYSECTIONHEADERCELL_H

@class HKGradient, HKRoundedHeaderView, UIImage, NSString;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordCategorySectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKGradient *gradient;
@property (retain, nonatomic) HKRoundedHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;


-(void)setupSubviews;


@end


#endif