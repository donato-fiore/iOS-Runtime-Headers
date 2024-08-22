// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSCHEDULEENTITY_H
#define HDMEDICATIONSCHEDULEENTITY_H

@class HDHealthEntity;



@interface HDMedicationScheduleEntity : HDHealthEntity



+(BOOL)enumerateSchedulesWithPredicate:(id)arg0 orderingTerms:(id)arg1 transaction:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)insertMedicationSchedule:(id)arg0 syncProvenance:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateMedicationSchedulesToBeDeletedWithMedicationUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)privateSubEntities;
+(id)propertyForSyncProvenance;
+(id)schedulePredicateForMedicationIdentifier:(id)arg0 ;
+(id)schedulePredicateForScheduleIdentifier:(id)arg0 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif