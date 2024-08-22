// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKNOTIFICATIONCHANGE_H
#define EKNOTIFICATIONCHANGE_H



#import "EKObjectChange.h"

@interface EKNotificationChange : EKObjectChange



+(int)entityType;
+(void)fetchNotificationChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchNotificationChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchNotificationChangesInStore:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif