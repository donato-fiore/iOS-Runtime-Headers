// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALONBOARDINGLOCATIONCELL_H
#define WDCLINICALONBOARDINGLOCATIONCELL_H

@class HKClinicalProvider;


#import "WDClinicalLocationCell.h"

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell

@property (readonly, copy, nonatomic) HKClinicalProvider *provider; // ivar: _provider


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupSubviews;
-(void)_updateContentWithBrandable:(id)arg0 dataProvider:(id)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif