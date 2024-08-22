// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKMOCKPEERPAYMENTACCOUNTMANAGER_H
#define NPKMOCKPEERPAYMENTACCOUNTMANAGER_H

@class PKPeerPaymentAccount;
@protocol OS_dispatch_queue;


#import "NPKPeerPaymentAccountManager.h"

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {
    PKPeerPaymentAccount *_mockAccount;
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSUInteger _balanceOffset;
}




+(id)sharedInstance;
-(id)account;
-(id)initWithPeerPaymentService:(id)arg0 ;
-(void)_updateMockBalance;
-(void)dealloc;


@end


#endif