// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMETRICSLOADURLEVENT_H
#define SSMETRICSLOADURLEVENT_H

@class NSString, NSArray;


#import "SSMetricsMutableEvent.h"

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *DNSServers;
@property (nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TLSSessionTickets;
@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelayRequested;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (nonatomic) BOOL cachedResponse;
@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (retain, nonatomic) NSString *clientError;
@property (nonatomic) CGFloat connectionEndTime;
@property (retain, nonatomic) NSString *connectionInterface;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) NSUInteger connectionStartNStatRXBytes;
@property (nonatomic) NSUInteger connectionStartNStatTXBytes;
@property (nonatomic) CGFloat connectionStartTime;
@property (nonatomic) NSUInteger connectionStopNStatRXBytes;
@property (nonatomic) NSUInteger connectionStopNStatTXBytes;
@property (retain, nonatomic) NSString *connectionType;
@property (nonatomic) CGFloat domainLookupEndTime;
@property (nonatomic) CGFloat domainLookupStartTime;
@property (retain, nonatomic) NSString *edgeNodeCacheStatus;
@property (nonatomic) CGFloat fetchStartTime;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (nonatomic) NSUInteger redirectCount;
@property (nonatomic) CGFloat redirectEndTime;
@property (nonatomic) CGFloat redirectStartTime;
@property (nonatomic) NSUInteger requestMessageSize;
@property (nonatomic) CGFloat requestStartTime;
@property (retain, nonatomic) NSString *requestURL;
@property (retain, nonatomic) NSString *resolvedIPAddress;
@property (retain, nonatomic) NSString *responseDate;
@property (nonatomic) CGFloat responseEndTime;
@property (nonatomic) NSUInteger responseMessageSize;
@property (nonatomic) CGFloat responseStartTime;
@property (nonatomic) CGFloat secureConnectionStartTime;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageCachedResponses:) CGFloat xpSamplingPercentageCachedResponses;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) CGFloat xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSessionDuration:) CGFloat xpSessionDuration;


+(BOOL)shouldCollectTimingData;
+(BOOL)shouldCollectTimingDataWithSessionDelegate:(id)arg0 ;
+(BOOL)shouldCollectTimingDataWithSessionDuration:(CGFloat)arg0 samplingPercentage:(CGFloat)arg1 ;
+(BOOL)shouldLogTimingMetrics;
+(BOOL)shouldReportCachedEvent;
+(BOOL)shouldReportCachedEventWithSamplingPercentage:(CGFloat)arg0 ;
+(CGFloat)_randomDouble;
+(id)_timingMetricsWindowStartTime;
+(void)_setTimingMetricsWindowStartTime:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif