// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPOPULATIONNORMSABSTRACTVIEWMODEL_H
#define HKPOPULATIONNORMSABSTRACTVIEWMODEL_H

@class NSNumber, HKHealthStore;
@protocol HKPopulationNormsViewModelDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKPopulationNormsAbstractViewModel : NSObject <HKPopulationNormsViewModelDataSource>



@property (retain, nonatomic) NSNumber *cacheAgeInYears; // ivar: _cacheAgeInYears
@property (retain, nonatomic) NSNumber *cacheBiologicalSexSegmentIndex; // ivar: _cacheBiologicalSexSegmentIndex
@property (retain, nonatomic) NSNumber *cacheClassificationIndex; // ivar: _cacheClassificationIndex
@property (retain, nonatomic) NSNumber *cacheLatestSampleValue; // ivar: _cacheLatestSampleValue
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleQueryQueue; // ivar: _sampleQueryQueue
@property (retain, nonatomic) NSNumber *userHasDataPointAvailable; // ivar: _userHasDataPointAvailable


-(BOOL)isCurrentClassificationAvailable;
-(BOOL)shouldShowClassificationTitle;
-(CGFloat)maximumSampleValueQuantity;
-(CGFloat)minimumSampleValueQuantity;
-(NSInteger)_biologicalSexForSexSegmentIndex:(NSUInteger)arg0 ;
-(NSInteger)currentBiologicalSex;
-(NSUInteger)_biologicalSexSegmentIndexForSex:(NSInteger)arg0 ;
-(NSUInteger)classificationIndexForLevelIndex:(NSUInteger)arg0 ;
-(NSUInteger)currentBiologicalSexSegmentIndex;
-(NSUInteger)currentClassificationIndex;
-(NSUInteger)maximumUserAgeBucketIndex;
-(NSUInteger)numberOfBiologicalSexSegments;
-(NSUInteger)numberOfClassifications;
-(id)ageBucketsTitle;
-(id)associatedSampleType;
-(id)chartTitle;
-(id)classificationIndexForSampleValue:(CGFloat)arg0 age:(NSInteger)arg1 sex:(NSInteger)arg2 ;
-(id)currentAgeInYears;
-(id)currentDataForBiologicalSex;
-(id)currentLocalizedClassificationDescription;
-(id)currentLocalizedClassificationName;
-(id)currentLocalizedClassificationTitle;
-(id)footerText;
-(id)hk_UIAutomationIdentifier;
-(id)initWithHealthStore:(id)arg0 ;
-(id)levelsTitle;
-(id)localizedBiologicalSexTitles;
-(id)localizedClassificationDescriptionForIndex:(NSUInteger)arg0 ;
-(id)localizedClassificationNameForIndex:(NSUInteger)arg0 ;
-(id)localizedClassificationTitleForIndex:(NSUInteger)arg0 ;
-(id)quantityUnitTitle;
-(id)seriesHighlightedColor;
-(id)seriesHighlightedSegmentColor;
-(id)userAgeBucketIndex;
-(id)userLatestSampleValue;
-(id)viewTitle;
-(void)_requireConcreteImplementationOfSelector:(SEL)arg0 ;
-(void)clearUserCharacteristicCache;
-(void)prepareUserCharacteristicCacheWithHandler:(id)arg0 ;
-(void)setBiologicalSexSegmentIndex:(NSUInteger)arg0 ;
-(void)setClassificationIndex:(NSUInteger)arg0 ;


@end


#endif