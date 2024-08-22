// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDBRANDCELL_H
#define WDMEDICALRECORDBRANDCELL_H

@class UILabel;


#import "WDMedicalRecordBrandLogoCell.h"

@interface WDMedicalRecordBrandCell : WDMedicalRecordBrandLogoCell

@property (readonly, nonatomic) UILabel *brandDetailLabel;
@property (readonly, nonatomic) UILabel *brandSubtitleLabel;
@property (readonly, nonatomic) UILabel *brandTitleLabel;


-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateLabelVisibility;
-(void)setBrandable:(id)arg0 dataProvider:(id)arg1 ;


@end


#endif