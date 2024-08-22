// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDCATEGORYMINIMIZEDSECTIONHEADERCELL_H
#define WDMEDICALRECORDCATEGORYMINIMIZEDSECTIONHEADERCELL_H

@class HKGradientView, HKGradient, NSLayoutConstraint;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKGradientView *backgroundGradientView; // ivar: _backgroundGradientView
@property (retain, nonatomic) HKGradient *gradient;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint


+(CGFloat)_pillBackgroundViewHeightConstraint;
+(id)_titleLabelFont;
-(CGFloat)_cornerRadius;
-(void)_updateForCurrentSizeCategory;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif