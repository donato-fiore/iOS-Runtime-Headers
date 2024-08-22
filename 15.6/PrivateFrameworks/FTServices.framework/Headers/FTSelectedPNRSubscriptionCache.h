// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTSELECTEDPNRSUBSCRIPTIONCACHE_H
#define FTSELECTEDPNRSUBSCRIPTIONCACHE_H

@class CTXPCContexts, NSString, CTXPCServiceSubscriptionContext, CTXPCServiceSubscriptionInfo;

#import <Foundation/Foundation.h>


@interface FTSelectedPNRSubscriptionCache : NSObject

@property (retain, nonatomic) CTXPCContexts *activeSubscriptionInfo; // ivar: _activeSubscriptionInfo
@property (nonatomic) NSInteger dualSIMCapability; // ivar: _dualSIMCapability
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedContext; // ivar: _selectedContext
@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo


-(id)debugDescription;


@end


#endif