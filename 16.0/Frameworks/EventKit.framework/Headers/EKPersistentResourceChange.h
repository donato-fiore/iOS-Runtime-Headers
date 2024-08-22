// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTRESOURCECHANGE_H
#define EKPERSISTENTRESOURCECHANGE_H



#import "EKPersistentObject.h"

@interface EKPersistentResourceChange : EKPersistentObject



+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)alerted;
-(id)calendar;
-(id)calendarItem;
-(id)changedByAddress;
-(id)changedByDisplayName;
-(id)changedByFirstName;
-(id)changedByLastName;
-(id)createCount;
-(id)deleteCount;
-(id)deletedTitle;
-(id)notification;
-(id)timestamp;
-(id)updateCount;
-(int)entityType;
-(unsigned int)changeType;
-(unsigned int)changedProperties;
-(unsigned int)publicStatus;


@end


#endif