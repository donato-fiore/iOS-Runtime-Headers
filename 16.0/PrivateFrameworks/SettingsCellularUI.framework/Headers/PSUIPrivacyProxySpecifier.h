// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIPRIVACYPROXYSPECIFIER_H
#define PSUIPRIVACYPROXYSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext;


#import "PSUICoreTelephonyDataCache.h"

@interface PSUIPrivacyProxySpecifier : PSSpecifier

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // ivar: _dataCache


-(id)groupSpecifier;
-(id)initWithDataCache:(id)arg0 context:(id)arg1 ;
-(id)isPrivacyProxyEnabled;
-(void)setPrivacyProxyEnabled:(id)arg0 ;


@end


#endif