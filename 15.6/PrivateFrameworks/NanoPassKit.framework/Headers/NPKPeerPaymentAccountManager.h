// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPEERPAYMENTACCOUNTMANAGER_H
#define NPKPEERPAYMENTACCOUNTMANAGER_H

@class PKPeerPaymentAccount, PKPeerPaymentService;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentAccountManager : NSObject

@property (retain) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService; // ivar: _peerPaymentService


+(id)sharedInstance;
-(id)init;
-(id)initWithPeerPaymentService:(id)arg0 ;
-(void)_handleAccountChanged:(id)arg0 ;
-(void)_updateAccount;


@end


#endif