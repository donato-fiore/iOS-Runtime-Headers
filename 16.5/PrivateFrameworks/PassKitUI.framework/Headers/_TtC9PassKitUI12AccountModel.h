// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI12ACCOUNTMODEL_H
#define _TTC9PASSKITUI12ACCOUNTMODEL_H

@protocol PKAccountServiceObserver, PKForegroundActiveArbiterObserver;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI12AccountModel : NSObject <PKAccountServiceObserver, PKForegroundActiveArbiterObserver>

 {
    ? _account;
    ? _savingsDetails;
    ? _savingsSummary;
    ? _observableBalance;
    ? _isNewAccount;
    ? _expectingAccountUpdate;
    ? accountService;
    ? activeState;
    ? suspendingUpdates;
    ? pendingAccount;
}




-(id)init;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;


@end


#endif