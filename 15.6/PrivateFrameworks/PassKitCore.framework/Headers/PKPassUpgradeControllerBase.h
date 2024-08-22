// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSUPGRADECONTROLLERBASE_H
#define PKPASSUPGRADECONTROLLERBASE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"

@interface PKPassUpgradeControllerBase : NSObject {
    id *_addPaymentPassToLibrary;
    os_unfair_lock_s _pass_upgrade_lock;
    NSMutableDictionary *_pendingPassUpgrades;
}


@property (retain, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService


-(id)init;
-(id)initWithWebService:(id)arg0 addPaymentPassToLibrary:(id)arg1 ;
-(void)appletsDidUpdate;
-(void)completePassUpgradeForPassUniqueID:(id)arg0 withError:(id)arg1 ;
-(void)downloadUpgradedPassForPassUniqueID:(id)arg0 atURL:(id)arg1 ;
-(void)requestPassUpgrade:(id)arg0 pass:(id)arg1 diagnosticReason:(id)arg2 completion:(id)arg3 ;


@end


#endif