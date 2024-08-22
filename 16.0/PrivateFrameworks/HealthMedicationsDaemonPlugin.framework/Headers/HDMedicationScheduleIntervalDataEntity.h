// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULEINTERVALDATAENTITY_H
#define HDMEDICATIONSCHEDULEINTERVALDATAENTITY_H

@class HDHealthEntity;



@interface HDMedicationScheduleIntervalDataEntity : HDHealthEntity



+(BOOL)addIntervalDataToCodable:(id)arg0 withScheduleID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateMedicationScheduleIntervalDataWithOwnerID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)_codableRepresentationForMedicationScheduleIntervalData:(id)arg0 ;
+(id)_medicationScheduleIntervalDataEntityPropertiesForModel;
+(id)_medicationScheduleIntervalDataFromRow:(struct HDSQLiteRow *)arg0 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertPersistableMedicationScheduleIntervalData:(id)arg0 ownerID:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif