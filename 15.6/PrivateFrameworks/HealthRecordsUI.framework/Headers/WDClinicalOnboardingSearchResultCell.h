// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALONBOARDINGSEARCHRESULTCELL_H
#define WDCLINICALONBOARDINGSEARCHRESULTCELL_H

@class HKClinicalProviderSearchResult, NSArray;


#import "WDMedicalRecordBrandCell.h"

@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell

@property (copy, nonatomic) HKClinicalProviderSearchResult *searchResult; // ivar: _searchResult
@property (copy, nonatomic) NSArray *searchTerms; // ivar: _searchTerms


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateContentWithSearchResult:(id)arg0 dataProvider:(id)arg1 searchTerms:(id)arg2 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateLabelVisibility;


@end


#endif