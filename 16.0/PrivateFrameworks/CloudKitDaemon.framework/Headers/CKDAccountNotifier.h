// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDACCOUNTNOTIFIER_H
#define CKDACCOUNTNOTIFIER_H

@class NSOperationQueue, NSMapTable;

#import <Foundation/Foundation.h>


@interface CKDAccountNotifier : NSObject

@property (retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue; // ivar: _accountChangeHandlerQueue
@property (nonatomic) int accountChangedToken; // ivar: _accountChangedToken
@property (retain, nonatomic) NSMapTable *notificationHandlers; // ivar: _notificationHandlers
@property (getter=isWarmingUp) BOOL warmingUp; // ivar: _warmingUp


+(id)sharedNotifier;
-(id)_accountChangeNotificationOperation:(BOOL)arg0 ;
-(id)init;
-(void)dealloc;
-(void)postAccountChangedNotificationToClients;
-(void)postAccountChangedNotificationWithAccountID:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)registerObserver:(id)arg0 forAccountChangeNotification:(id)arg1 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg0 ;


@end


#endif