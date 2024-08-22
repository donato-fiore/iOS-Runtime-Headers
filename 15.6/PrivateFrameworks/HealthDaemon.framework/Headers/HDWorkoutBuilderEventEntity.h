// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTBUILDEREVENTENTITY_H
#define HDWORKOUTBUILDEREVENTENTITY_H



#import "HDWorkoutEventEntity.h"

@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity



+(Class)ownerEntityClass;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)ownerEntityReferenceColumn;
+(id)workoutEventsWithWorkoutBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif