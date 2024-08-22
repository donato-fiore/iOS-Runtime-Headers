// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAMETADATASUBSAMPLESECTION_H
#define HKDATAMETADATASUBSAMPLESECTION_H

@class NSMutableDictionary, HKHealthStore, HKSample, NSArray;
@protocol HKDataMetadataSubsampleDelegate;


#import "HKDataMetadataSection.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKDataMetadataSubsampleSection : HKDataMetadataSection

@property (retain, nonatomic) NSMutableDictionary *aggregationValue; // ivar: _aggregationValue
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKSample *sample; // ivar: _sample
@property (readonly, nonatomic) NSArray *subSampleTypes; // ivar: _subSampleTypes
@property (readonly, weak, nonatomic) NSObject<HKDataMetadataSubsampleDelegate> *subsampleDelegate; // ivar: _subsampleDelegate
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(NSUInteger)numberOfRowsInSection;
-(id)_formattedValueWithUnits:(id)arg0 sampleType:(id)arg1 ;
-(id)_mergeTypesForFixedValues:(id)arg0 subSampleTypes:(id)arg1 ;
-(id)_subSampleAggregatePredicate:(id)arg0 ;
-(id)_trimAndSortSampleTypes:(id)arg0 ;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)displayNameForSampleType:(id)arg0 displayTypeController:(id)arg1 ;
-(id)initWithSample:(id)arg0 subSampleTypes:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5 ;
-(id)sectionTitle;
-(void)_submitAverageAggregateQueryForQuantityType:(id)arg0 aggregateQueryFinishedBlock:(id)arg1 ;
-(void)_submitCountStandHourQueryForSampleType:(id)arg0 aggregateQueryFinishedBlock:(id)arg1 ;
-(void)_submitSingleValueQueryForQuantityType:(id)arg0 aggregateQueryFinishedBlock:(id)arg1 ;
-(void)_submitSubSampleAggregateQueriesWithCompletion:(id)arg0 ;
-(void)_submitSumAggregateQueryForQuantityType:(id)arg0 aggregateQueryFinishedBlock:(id)arg1 ;
-(void)_updateAggregateValue:(id)arg0 sampleType:(id)arg1 aggregateQueryFinishedBlock:(id)arg2 ;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif