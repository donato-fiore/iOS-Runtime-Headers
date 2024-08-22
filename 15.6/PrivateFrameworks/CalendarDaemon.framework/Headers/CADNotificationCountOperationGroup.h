// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNOTIFICATIONCOUNTOPERATIONGROUP_H
#define CADNOTIFICATIONCOUNTOPERATIONGROUP_H

@class NSString;
@protocol CADNotificationCountInterface;


#import "CADOperationGroup.h"

@interface CADNotificationCountOperationGroup : CADOperationGroup <CADNotificationCountInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(void)CADDatabaseGetNotificationCount:(id)arg0 ;


@end


#endif