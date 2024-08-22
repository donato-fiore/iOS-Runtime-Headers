// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSLOADURLEVENT_H
#define AMSMETRICSLOADURLEVENT_H

@class NSString, NSArray;


#import "AMSMetricsEvent.h"

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (copy, nonatomic) NSString *DNSServers;
@property (nonatomic) BOOL TFOEnabled;
@property (copy, nonatomic) NSString *TIDState;
@property (nonatomic) BOOL TLSSessionTickets;
@property (copy, nonatomic) NSString *appleTimingApp;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL apsRelayDidFallback;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (nonatomic) BOOL cachedResponse;
@property (retain, nonatomic) NSString *cellularDataBearerTechnology;
@property (copy, nonatomic) NSString *clientCorrelationKey;
@property (copy, nonatomic) NSString *clientError;
@property (nonatomic) CGFloat connectionEndTime;
@property (copy, nonatomic) NSString *connectionInterface;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) NSUInteger connectionStartNStatRXBytes;
@property (nonatomic) NSUInteger connectionStartNStatTXBytes;
@property (nonatomic) CGFloat connectionStartTime;
@property (nonatomic) NSUInteger connectionStopNStatRXBytes;
@property (nonatomic) NSUInteger connectionStopNStatTXBytes;
@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) CGFloat domainLookupEndTime;
@property (nonatomic) CGFloat domainLookupStartTime;
@property (copy, nonatomic) NSString *edgeNodeCacheStatus;
@property (copy, nonatomic) NSString *environmentDataCenter;
@property (nonatomic) CGFloat fetchStartTime;
@property (copy, nonatomic) NSArray *networkQualityReports;
@property (copy, nonatomic) NSString *originalApp;
@property (copy, nonatomic) NSString *radioTechnology;
@property (copy, nonatomic) NSString *radioType;
@property (nonatomic) NSUInteger redirectCount;
@property (nonatomic) CGFloat redirectEndTime;
@property (nonatomic) CGFloat redirectStartTime;
@property (nonatomic) NSUInteger requestMessageSize;
@property (nonatomic) CGFloat requestStartTime;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *resolvedIPAddress;
@property (copy, nonatomic) NSString *responseDate;
@property (nonatomic) CGFloat responseEndTime;
@property (nonatomic) NSUInteger responseMessageSize;
@property (nonatomic) NSUInteger responseMessageSizeUncompressed;
@property (nonatomic) CGFloat responseStartTime;
@property (nonatomic) CGFloat secureConnectionStartTime;
@property (nonatomic) NSInteger statusCode;
@property (copy, nonatomic) NSString *wt;
@property (nonatomic) BOOL xpSamplingForced;
@property (nonatomic) CGFloat xpSamplingPercentageCachedResponses;
@property (nonatomic) CGFloat xpSamplingPercentageUsers;
@property (nonatomic) CGFloat xpSessionDuration;
@property (copy, nonatomic) NSString *xxdc;


+(BOOL)shouldCollectMetricsForContext:(id)arg0 ;
+(CGFloat)_randomDouble;
+(CGFloat)_timingDataMetricToServerTimeInterval:(id)arg0 ;
+(id)_DNSServerIPAddresses;
+(id)_fetchNetworkQualityReports;
+(id)_metricsDictionaryFromConfig:(id)arg0 ;
+(id)_propertyValueClassesForKnownProperties;
+(id)_radioTypeStringValueFromRadioType:(int)arg0 ;
+(id)_resolvedIPAddressFromTask:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_prepareEventWithContext:(id)arg0 ;


@end


#endif