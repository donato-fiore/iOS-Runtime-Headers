// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STASKTOMANAGECONTACTSNOTAPPROVEDRESPONSERECEIVEDUSERNOTIFICATIONCONTEXT_H
#define STASKTOMANAGECONTACTSNOTAPPROVEDRESPONSERECEIVEDUSERNOTIFICATIONCONTEXT_H

@class NSString;


#import "STUserNotificationContext.h"

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *childName; // ivar: _childName


+(BOOL)supportsSecureCoding;
-(id)initWithChildName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif