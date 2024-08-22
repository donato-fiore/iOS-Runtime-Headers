// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKUSERNOTIFICATIONAUTHORIZATIONCONTROLLER_H
#define PKUSERNOTIFICATIONAUTHORIZATIONCONTROLLER_H

@class UNUserNotificationCenter, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKUserNotificationAuthorizationController : NSObject {
    UNUserNotificationCenter *_center;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)addDelegate:(id)arg0 ;
-(void)authorizationStatusRequiresPromptWithCompletion:(id)arg0 ;
-(void)authorizationStatusWithCompletion:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requestNotificationAuthorizationWithCompletion:(id)arg0 ;
-(void)setPresentedNotificationAuthorizationPromptShown;
-(void)shouldOfferAuthorizationPromptWithDataProvider:(id)arg0 completion:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 openSettingsForNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif