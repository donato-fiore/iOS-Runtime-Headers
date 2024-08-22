// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRSAMPLECLASSIFICATIONENTITY_H
#define HDHRSAMPLECLASSIFICATIONENTITY_H

@class HDHealthEntity;



@interface HDHRSampleClassificationEntity : HDHealthEntity



+(BOOL)deleteAllClassificationsWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteClassificationWithSampleUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)_insertEntityWithSampleUUID:(id)arg0 classification:(NSInteger)arg1 sampleStartDate:(id)arg2 sampleDuration:(CGFloat)arg3 sampleTimeZone:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(id)allSampleClassificationsWithTransaction:(id)arg0 error:(*id)arg1 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertSampleClassification:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)pruneWithProfile:(id)arg0 nowDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)sampleClassificationWithSampleUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif