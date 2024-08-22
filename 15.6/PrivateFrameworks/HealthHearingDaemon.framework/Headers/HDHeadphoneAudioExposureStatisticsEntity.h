// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEADPHONEAUDIOEXPOSURESTATISTICSENTITY_H
#define HDHEADPHONEAUDIOEXPOSURESTATISTICSENTITY_H

@class HDHealthEntity;



@interface HDHeadphoneAudioExposureStatisticsEntity : HDHealthEntity



+(BOOL)_enumerateBucketsForProfile:(id)arg0 predicate:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)_replaceExistingWithBuckets:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)insertBuckets:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)_bucketFromAllPropertiesRow:(struct HDSQLiteRow *)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)_loadBucketsFromProfile:(id)arg0 error:(*id)arg1 ;
+(id)_pruneWithNowDate:(id)arg0 limit:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)_sortOrderingTerms;
+(id)databaseTable;
+(id)indices;
+(id)insertBucket:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)_bucketWithProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif