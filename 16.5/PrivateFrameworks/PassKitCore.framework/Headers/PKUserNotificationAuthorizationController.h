// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKUSERNOTIFICATIONAUTHORIZATIONCONTROLLER_H
#define PKUSERNOTIFICATIONAUTHORIZATIONCONTROLLER_H

@class UNUserNotificationCenter, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKPaymentService.h"

@interface PKUserNotificationAuthorizationController : NSObject {
    UNUserNotificationCenter *_center;
    PKPaymentService *_paymentService;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSUInteger _previouslyCheckedContentType;
}




+(id)sharedInstance;
-(NSUInteger)_contentTypeToDisplayWithPasses:(id)arg0 ;
-(id)init;
-(void)_shouldOfferAuthorizationPromptForPayLaterReasonWithPasses:(id)arg0 completion:(id)arg1 ;
-(void)_shouldOfferAuthorizationPromptForPeerPaymentReasonWithPeerPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)authorizationStatusRequiresPromptWithCompletion:(id)arg0 ;
-(void)authorizationStatusWithCompletion:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requestNotificationAuthorizationWithCompletion:(id)arg0 ;
-(void)setPresentedNotificationAuthorizationPromptShown;
-(void)shouldOfferAuthorizationPromptWithPasses:(id)arg0 completion:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 openSettingsForNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif