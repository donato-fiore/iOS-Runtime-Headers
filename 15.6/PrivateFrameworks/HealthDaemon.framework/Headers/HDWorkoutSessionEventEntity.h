// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTSESSIONEVENTENTITY_H
#define HDWORKOUTSESSIONEVENTENTITY_H



#import "HDWorkoutEventEntity.h"

@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity



+(Class)ownerEntityClass;
+(Class)workoutEventClass;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)ownerEntityReferenceColumn;
+(id)workoutEventsWithWorkoutSession:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif