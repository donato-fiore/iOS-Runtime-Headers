// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCARDIOFITNESSPOPULATIONNORMSVIEWMODEL_H
#define HKCARDIOFITNESSPOPULATIONNORMSVIEWMODEL_H



#import "HKPopulationNormsAbstractViewModel.h"

@interface HKCardioFitnessPopulationNormsViewModel : HKPopulationNormsAbstractViewModel



-(BOOL)shouldShowClassificationTitle;
-(CGFloat)maximumSampleValueQuantity;
-(CGFloat)minimumSampleValueQuantity;
-(NSUInteger)maximumUserAgeBucketIndex;
-(NSUInteger)numberOfClassifications;
-(id)ageBucketsTitle;
-(id)associatedSampleType;
-(id)chartTitle;
-(id)classificationIndexForSampleValue:(CGFloat)arg0 age:(NSInteger)arg1 sex:(NSInteger)arg2 ;
-(id)currentDataForBiologicalSex;
-(id)footerText;
-(id)hk_UIAutomationIdentifier;
-(id)levelsTitle;
-(id)localizedClassificationDescriptionForIndex:(NSUInteger)arg0 ;
-(id)localizedClassificationNameForIndex:(NSUInteger)arg0 ;
-(id)localizedClassificationTitleForIndex:(NSUInteger)arg0 ;
-(id)quantityUnitTitle;
-(id)seriesHighlightedColor;
-(id)seriesHighlightedSegmentColor;
-(id)viewTitle;


@end


#endif