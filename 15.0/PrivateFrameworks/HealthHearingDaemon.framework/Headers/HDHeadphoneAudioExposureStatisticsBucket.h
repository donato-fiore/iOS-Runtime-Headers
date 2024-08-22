// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEADPHONEAUDIOEXPOSURESTATISTICSBUCKET_H
#define HDHEADPHONEAUDIOEXPOSURESTATISTICSBUCKET_H

@class HDStatisticsCollectionCalculatorDefaultDataSource, NSNumber, NSDateInterval, NSDate, HDStatisticsCollectionCalculator, HKStatistics;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>


@interface HDHeadphoneAudioExposureStatisticsBucket : NSObject {
    os_unfair_lock_s _lock;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
}


@property (readonly, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (readonly, nonatomic) BOOL boundedInterval; // ivar: _boundedInterval
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *earliestStartDate; // ivar: _earliestStartDate
@property (readonly, nonatomic) BOOL hasPreviousStatistics;
@property (readonly, nonatomic) BOOL includesJournaledSamples;
@property (nonatomic, setter=unitTesting_setIncludesPrunableData:) BOOL includesPrunableData; // ivar: _includesPrunableData
@property (readonly, nonatomic) HDStatisticsCollectionCalculator *journaledCalculator; // ivar: _journaledCalculator
@property (retain, nonatomic, setter=unitTesting_setPreviousStatistics:) HKStatistics *previousStatistics; // ivar: _previousStatistics
@property (readonly, nonatomic) HDStatisticsCollectionCalculator *primaryCalculator; // ivar: _primaryCalculator
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)_currentDoseStringForEndDate:(id)arg0 earliestStartDate:(id)arg1 profile:(id)arg2 ;
+(id)_makeBucketsForNowDate:(id)arg0 earliestStartDate:(id)arg1 profile:(id)arg2 ;
+(id)_makeDataSourceWithProfile:(id)arg0 ;
+(id)_makeJournaledCalculator;
+(id)_makePrimaryCalculator;
+(id)_makeSourceOrderProviderWithProfile:(id)arg0 ;
+(id)bucketForArchivedRepresentation:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)makeBucketsForProfile:(id)arg0 earliestStartDate:(id)arg1 ;
-(BOOL)isExpiredForNowDate:(id)arg0 ;
-(id)_initWithProfile:(id)arg0 primaryCalculator:(id)arg1 journaledCalculator:(id)arg2 startDate:(id)arg3 earliestStartDate:(id)arg4 boundedInterval:(BOOL)arg5 anchor:(id)arg6 previousStatistics:(id)arg7 includesPrunableData:(BOOL)arg8 ;
-(id)_initWithProfile:(id)arg0 startDate:(id)arg1 earliestStartDate:(id)arg2 boundedInterval:(BOOL)arg3 ;
-(id)_lock_addQuantitySamples:(id)arg0 anchor:(id)arg1 error:(*id)arg2 ;
-(id)_lock_archivedRepresentationWithError:(*id)arg0 ;
-(id)_lock_copyWithEarliestStartDate:(id)arg0 resetDoseToZero:(BOOL)arg1 error:(*id)arg2 ;
-(id)_lock_currentStatisticsWithError:(*id)arg0 ;
-(id)_lock_fetchIncludesPrunableDataWithError:(*id)arg0 ;
-(id)_lock_journalQuantitySamples:(id)arg0 error:(*id)arg1 ;
-(id)_lock_queryForInitialStatisticsWithError:(*id)arg0 ;
-(id)archivedRepresentationWithError:(*id)arg0 ;
-(id)copyWithEarliestStartDate:(id)arg0 resetDoseToZero:(BOOL)arg1 error:(*id)arg2 ;
-(id)queryForInitialStatisticsWithError:(*id)arg0 ;
-(id)snapshotStatisticsWithError:(*id)arg0 ;
-(id)updateWithSampleBatch:(id)arg0 error:(*id)arg1 ;


@end


#endif