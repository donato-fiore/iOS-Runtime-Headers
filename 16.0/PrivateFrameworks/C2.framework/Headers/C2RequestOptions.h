// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2REQUESTOPTIONS_H
#define C2REQUESTOPTIONS_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding, C2NetworkingDelegate;

#import <Foundation/Foundation.h>

#import "C2MetricOptions.h"

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL _allowsExpensiveAccess; // ivar: __allowsExpensiveAccess
@property (nonatomic) BOOL _allowsPowerNapScheduling; // ivar: __allowsPowerNapScheduling
@property (nonatomic) BOOL _allowsRetryForBackgroundDataTasks; // ivar: __allowsRetryForBackgroundDataTasks
@property (copy, nonatomic) NSString *_appleIDContextSessionIdentifier; // ivar: __appleIDContextSessionIdentifier
@property (copy, nonatomic) NSString *_sourceApplicationBundleIdentifier; // ivar: __sourceApplicationBundleIdentifier
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // ivar: __sourceApplicationSecondaryIdentifier
@property (nonatomic) CGFloat _timeoutIntervalForRequest; // ivar: __timeoutIntervalForRequest
@property (nonatomic) CGFloat _timeoutIntervalForResource; // ivar: __timeoutIntervalForResource
@property (nonatomic) BOOL allowExpiredDNSBehavior; // ivar: _allowExpiredDNSBehavior
@property (nonatomic) BOOL allowRouting; // ivar: _allowRouting
@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (copy, nonatomic) NSURL *c2MetricsEndpoint; // ivar: _c2MetricsEndpoint
@property (nonatomic) NSUInteger c2MetricsReportFrequency; // ivar: _c2MetricsReportFrequency
@property (nonatomic) NSUInteger c2MetricsReportFrequencyBase; // ivar: _c2MetricsReportFrequencyBase
@property (nonatomic) NSUInteger discretionaryNetworkBehavior; // ivar: _discretionaryNetworkBehavior
@property (nonatomic) NSUInteger duetPreClearedMode; // ivar: _duetPreClearedMode
@property (readonly, nonatomic) CGFloat emptySessionExpiryInSeconds;
@property (nonatomic) BOOL hasAllowsCellularAccess; // ivar: _hasAllowsCellularAccess
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSURL *invokedURL; // ivar: _invokedURL
@property (copy, nonatomic) C2MetricOptions *metricOptions; // ivar: _metricOptions
@property (nonatomic) BOOL metricRequest; // ivar: _metricRequest
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate; // ivar: _networkingDelegate
@property (copy, nonatomic) NSString *originalHost; // ivar: _originalHost
@property (readonly, nonatomic) BOOL outOfProcess;
@property (nonatomic) BOOL outOfProcessDiscretionary; // ivar: _outOfProcessDiscretionary
@property (copy, nonatomic) NSString *outOfProcessPoolName; // ivar: _outOfProcessPoolName
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL redactRemoteEndpointFromNetworkMetrics; // ivar: _redactRemoteEndpointFromNetworkMetrics
@property (nonatomic) BOOL redactUniformResourceIdentifierFromNetworkMetrics; // ivar: _redactUniformResourceIdentifierFromNetworkMetrics
@property (readonly, nonatomic) CGFloat taskCallbackConsideredHangInSeconds;
@property (copy, nonatomic) id *testBehavior_sessionGroupCreated; // ivar: _testBehavior_sessionGroupCreated
@property (nonatomic) BOOL tlsPinning; // ivar: _tlsPinning
@property (nonatomic) BOOL useAdaptiveTimeouts; // ivar: _useAdaptiveTimeouts


+(BOOL)supportsSecureCoding;
+(BOOL)triesteMetricsEnabled;
+(id)stringForDiscretionaryNetworkBehavior:(NSUInteger)arg0 ;
+(id)stringForDuetPreClearedMode:(NSUInteger)arg0 ;
+(id)stringForQualityOfService:(NSInteger)arg0 ;
+(id)testNetworkingDelegate;
+(void)initialize;
+(void)setTestNetworkingDelegate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyAndDecorateRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decorateTask:(id)arg0 ;
-(id)defaultSessionConfigurationWithName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sessionConfigurationNameWithRouteHost:(id)arg0 ;
-(id)sessionConfigurationWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif