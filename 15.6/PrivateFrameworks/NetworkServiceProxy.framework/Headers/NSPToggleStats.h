// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPTOGGLESTATS_H
#define NSPTOGGLESTATS_H



#import "NSPProxyAnalytics.h"
#import "NSPProxyAgentNetworkStatistics.h"

@interface NSPToggleStats : NSPProxyAnalytics

@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *fallbackPathStatistics; // ivar: _fallbackPathStatistics
@property (nonatomic) NSUInteger fraudAlertCount; // ivar: _fraudAlertCount
@property (nonatomic) NSUInteger networkOutageCount; // ivar: _networkOutageCount
@property (nonatomic) NSUInteger networkRedirectOutageCount; // ivar: _networkRedirectOutageCount
@property (nonatomic) NSUInteger odohAuthFailureCount; // ivar: _odohAuthFailureCount
@property (nonatomic) NSUInteger odohBadMessageCount; // ivar: _odohBadMessageCount
@property (nonatomic) NSUInteger odohOutageCount; // ivar: _odohOutageCount
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *primaryPathStatistics; // ivar: _primaryPathStatistics
@property (nonatomic) NSUInteger proxyOutageCount; // ivar: _proxyOutageCount
@property (nonatomic) NSUInteger systemIncompatibleCount; // ivar: _systemIncompatibleCount
@property (nonatomic) BOOL toggleState; // ivar: _toggleState
@property (nonatomic) NSUInteger tokenOutageCount; // ivar: _tokenOutageCount


-(id)analyticsDict;
-(id)eventName;
-(id)init;
-(void)addNetworkStatsToToggleStatsDict:(id)arg0 networkStats:(id)arg1 ;
-(void)resetStats;
-(void)sendToggleOffStats;
-(void)sendToggleOnStats;


@end


#endif