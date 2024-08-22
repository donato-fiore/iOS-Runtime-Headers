// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUTOADDWALLETKEYSUPRESSIONASSERTION_H
#define HMAUTOADDWALLETKEYSUPRESSIONASSERTION_H

@class HMFAssertion, NSUUID;


#import "HMHomeManager.h"

@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID


-(id)initWithHomeManager:(id)arg0 homeUUID:(id)arg1 ;
-(void)acquireWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif