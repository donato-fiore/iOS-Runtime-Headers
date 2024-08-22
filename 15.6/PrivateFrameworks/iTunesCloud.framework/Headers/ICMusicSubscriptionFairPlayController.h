// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONFAIRPLAYCONTROLLER_H
#define ICMUSICSUBSCRIPTIONFAIRPLAYCONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionFairPlayController : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}




+(id)sharedController;
-(id)_init;
-(id)getKeyStatusForAccountUniqueIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg0 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(NSUInteger)arg0 transactionType:(unsigned int)arg1 machineIDData:(id)arg2 completionHandler:(id)arg3 ;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(NSUInteger)arg0 transactionType:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)getKeyStatusListWithCompletionHandler:(id)arg0 ;
-(void)importSubscriptionKeyBagData:(id)arg0 completionHandler:(id)arg1 ;
-(void)importSubscriptionKeyBagData:(id)arg0 leaseInfoData:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopSubscriptionLeaseWithCompletion:(id)arg0 ;


@end


#endif