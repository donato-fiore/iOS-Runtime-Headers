// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVFAIRPLAYSUBSCRIPTIONCONTROLLER_H
#define SSVFAIRPLAYSUBSCRIPTIONCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVFairPlaySubscriptionController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasValidSubscriptionStatusDidChangeNotifyToken;
    int _subscriptionStatusDidChangeNotifyToken;
}




-(BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(NSUInteger)arg0 transactionType:(unsigned int)arg1 machineIDData:(id)arg2 returningSubscriptionBagData:(*id)arg3 error:(*id)arg4 ;
-(BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:(NSUInteger)arg0 transactionType:(unsigned int)arg1 certificateData:(id)arg2 assetIDData:(id)arg3 returningLeaseData:(*id)arg4 subscriptionBagData:(*id)arg5 error:(*id)arg6 ;
-(BOOL)importSubscriptionKeyBagData:(id)arg0 leaseInfoData:(id)arg1 returningError:(*id)arg2 ;
-(BOOL)importSubscriptionKeyBagData:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)stopSubscriptionLease:(*id)arg0 ;
-(id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(struct FPSubscriptionInfo_ *)arg0 subscriptionInfoListLength:(unsigned int)arg1 ;
-(id)_subscriptionStatusForFPSubscriptionInfo:(struct FPSubscriptionInfo_ )arg0 ;
-(id)init;
-(id)subscriptionStatusForAccountUniqueIdentifier:(NSUInteger)arg0 ;
-(void)_enumerateSubscriptionInfoUsingBlock:(id)arg0 ;
-(void)_notifySubscriptionStatusDidChange;
-(void)dealloc;
-(void)enumerateAccountSubscriptionStatusUsingBlock:(id)arg0 ;


@end


#endif