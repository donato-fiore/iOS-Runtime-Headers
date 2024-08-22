// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONSCHEDULEITEMENTITY_H
#define HDMEDICATIONSCHEDULEITEMENTITY_H

@class HDHealthEntity;



@interface HDMedicationScheduleItemEntity : HDHealthEntity



+(BOOL)deleteMedicationScheduleItemsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateItemsWithPredicate:(id)arg0 orderingTerms:(id)arg1 transaction:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)updateNotification:(BOOL)arg0 itemIdentifier:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertMedicationScheduleItem:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)medicationScheduleItemWithIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif