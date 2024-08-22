// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPROBESTATS_H
#define NSPPROBESTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPProbeStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger directProbeCount; // ivar: _directProbeCount
@property (nonatomic) NSUInteger directProbeFailedCount; // ivar: _directProbeFailedCount
@property (nonatomic) NSUInteger directProbeRedirectedCount; // ivar: _directProbeRedirectedCount
@property (nonatomic) NSUInteger directProbeServerErrorCount; // ivar: _directProbeServerErrorCount
@property (nonatomic) NSUInteger directProbeSuccessCount; // ivar: _directProbeSuccessCount
@property (nonatomic) NSUInteger probeDurationSec; // ivar: _probeDurationSec
@property (retain, nonatomic) NSString *probeInterface; // ivar: _probeInterface
@property (nonatomic) NSInteger probeReason; // ivar: _probeReason
@property (nonatomic) NSUInteger proxyProbeCount; // ivar: _proxyProbeCount
@property (nonatomic) NSUInteger proxyProbeFailedCount; // ivar: _proxyProbeFailedCount
@property (nonatomic) NSUInteger proxyProbeRedirectedCount; // ivar: _proxyProbeRedirectedCount
@property (nonatomic) NSUInteger proxyProbeServerErrorCount; // ivar: _proxyProbeServerErrorCount
@property (nonatomic) NSUInteger proxyProbeSuccessCount; // ivar: _proxyProbeSuccessCount
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType


-(id)analyticsDict;
-(id)eventName;


@end


#endif