// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDALARMEVENTENTITY_H
#define HDALARMEVENTENTITY_H



#import "HDHealthEntity.h"

@interface HDAlarmEventEntity : HDHealthEntity



+(BOOL)deleteAlarmEvent:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteAlarmEvents:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)enumerateAllAlarmEventsWithTransaction:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
+(BOOL)insertOrReplaceAlarmEvents:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)checkConstraints;
+(id)databaseTable;
+(id)insertOrReplaceAlarmEvent:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)alarmEventWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif