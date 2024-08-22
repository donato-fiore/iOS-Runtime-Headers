// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT23MANAGEDUSERNOTIFICATION_H
#define _TTC10FINANCEKIT23MANAGEDUSERNOTIFICATION_H

@class NSManagedObject, UNNotificationContent, NSString;



@interface _TtC10FinanceKit23ManagedUserNotification : NSManagedObject

@property (nonatomic, retain) UNNotificationContent *content;
@property (nonatomic, copy) NSString *notificationIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) BOOL requiresWallet;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif