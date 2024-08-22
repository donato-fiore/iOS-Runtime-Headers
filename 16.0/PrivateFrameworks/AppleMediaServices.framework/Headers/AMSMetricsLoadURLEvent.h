// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMETRICSLOADURLEVENT_H
#define AMSMETRICSLOADURLEVENT_H

@class NSString, NSArray;


#import "AMSMetricsEvent.h"

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *DNSServers;
@property (nonatomic) BOOL TFOEnabled;
@property (retain, nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TLSSessionTickets;
@property (retain, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (nonatomic) BOOL cachedResponse;
@property (retain, nonatomic) NSString *cellularDataBearerTechnology;
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
@property (retain, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) CGFloat fetchStartTime;
@property (retain, nonatomic) NSArray *networkQualityReports;
@property (retain, nonatomic) NSString *originalApp;
@property (retain, nonatomic) NSString *radioTechnology;
@property (retain, nonatomic) NSString *radioType;
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
@property (nonatomic) NSUInteger responseMessageSizeUncompressed;
@property (nonatomic) CGFloat responseStartTime;
@property (nonatomic) CGFloat secureConnectionStartTime;
@property (nonatomic) NSInteger statusCode;
@property (retain, nonatomic) NSString *wt;
@property (nonatomic) BOOL xpSamplingForced;
@property (nonatomic) CGFloat xpSamplingPercentageCachedResponses;
@property (nonatomic) CGFloat xpSamplingPercentageUsers;
@property (nonatomic) CGFloat xpSessionDuration;
@property (retain, nonatomic) NSString *xxdc;


+(BOOL)shouldCollectMetricsForContext:(id)arg0 ;
+(CGFloat)_randomDouble;
+(CGFloat)_timingDataMetricToServerTimeInterval:(id)arg0 ;
+(id)_DNSServerIPAddresses;
+(id)_fetchNetworkQualityReports;
+(id)_metricsDictionaryFromConfig:(id)arg0 ;
+(id)_radioTypeStringValueFromRadioType:(int)arg0 ;
+(id)_resolvedIPAddressFromTask:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_prepareEventWithContext:(id)arg0 ;


@end


#endif