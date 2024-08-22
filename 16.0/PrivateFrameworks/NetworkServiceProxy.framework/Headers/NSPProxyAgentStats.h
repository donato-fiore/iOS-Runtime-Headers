// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPROXYAGENTSTATS_H
#define NSPPROXYAGENTSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPProxyAgentStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger egressProxyLowWaterMarkHitCount; // ivar: _egressProxyLowWaterMarkHitCount
@property (nonatomic) NSUInteger egressProxyTokensAdded; // ivar: _egressProxyTokensAdded
@property (nonatomic) NSUInteger ingressProxyLowWaterMarkHitCount; // ivar: _ingressProxyLowWaterMarkHitCount
@property (nonatomic) NSUInteger ingressProxyTokensAdded; // ivar: _ingressProxyTokensAdded
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType


-(id)analyticsDict;
-(id)eventName;


@end


#endif