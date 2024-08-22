// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDREGISTEREDACCOUNTIDENTITY_H
#define __HMDREGISTEREDACCOUNTIDENTITY_H

@class HMDRegisteredIdentity;


#import "HMDAccount.h"

@interface __HMDRegisteredAccountIdentity : HMDRegisteredIdentity

@property (readonly) HMDAccount *account; // ivar: _account


-(id)initWithIdentity:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 account:(id)arg1 ;


@end


#endif