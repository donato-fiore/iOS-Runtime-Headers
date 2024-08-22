// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDSTANDALONEIMAGECELL_H
#define WDMEDICALRECORDSTANDALONEIMAGECELL_H

@class NSString, UILabel, UIImageView, UIImage;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell

@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) UIImageView *disclosureChevronView; // ivar: _disclosureChevronView
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *titleImage;
@property (retain, nonatomic) UIImageView *titleImageView; // ivar: _titleImageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)_updateForCurrentSizeCategory;
-(void)setupSubviews;


@end


#endif