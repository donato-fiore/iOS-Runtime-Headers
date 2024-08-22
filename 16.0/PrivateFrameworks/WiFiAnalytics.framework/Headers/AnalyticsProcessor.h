// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANALYTICSPROCESSOR_H
#define ANALYTICSPROCESSOR_H

@class NSDateFormatter;

#import <Foundation/Foundation.h>

#import "DeploymentMetricHandler.h"
#import "LinkChangePolicyHandler.h"
#import "AnalyticsStoreMOHandler.h"
#import "RoamPolicyStore.h"

@interface AnalyticsProcessor : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatterWAMessage; // ivar: _dateFormatterWAMessage
@property (nonatomic) NSUInteger deploymentMetricDiffDays; // ivar: _deploymentMetricDiffDays
@property (retain, nonatomic) DeploymentMetricHandler *deploymentMetricHandler; // ivar: _deploymentMetricHandler
@property (retain, nonatomic) LinkChangePolicyHandler *linkChangePolicyHandler; // ivar: _linkChangePolicyHandler
@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler; // ivar: _managedObjectHandler
@property (nonatomic) NSUInteger numRoamSamples; // ivar: _numRoamSamples
@property (retain, nonatomic) RoamPolicyStore *roamPolicyHandler; // ivar: _roamPolicyHandler
@property (nonatomic) NSUInteger testDateDiffDays; // ivar: _testDateDiffDays


+(id)formattedMACAddressNotation:(id)arg0 octetCount:(NSUInteger)arg1 ;
-(BOOL)unpackRssiSnrCCAFromRssiMetricField:(id)arg0 unpackedRssi:(*id)arg1 unpackedCca:(*id)arg2 unpackedSnr:(*id)arg3 ;
-(id)apProfileForBssid:(id)arg0 andSSID:(id)arg1 ;
-(id)formattedNotation:(id)arg0 octetCount:(NSUInteger)arg1 ;
-(id)getDateFromDateString:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)summarizeAnalyticsForNetwork:(id)arg0 maxAgeInDays:(NSUInteger)arg1 ;
-(void)ageOutAnalytics:(CGFloat)arg0 ;
-(void)performPruneBasedOnStoreSizeAndSave;
-(void)processDatapathMetricStream:(id)arg0 withDate:(id)arg1 ;
-(void)processMetricAssociationFailure:(id)arg0 ;
-(void)processMetricBeaconCache:(id)arg0 ;
-(void)processMetricClientAssociation:(id)arg0 ;
-(void)processMetricHistoricalNetworkQuality:(id)arg0 ;
-(void)processMetricIpV4Latency:(id)arg0 ;
-(void)processMetricKnownNetworkEvent:(id)arg0 ;
-(void)processMetricLinkChange:(id)arg0 ;
-(void)processMetricNetworkGeotag:(id)arg0 ;
-(void)processMetricParsedBeaconInfo:(id)arg0 ;
-(void)processMetricRoamStatus:(id)arg0 ;
-(void)processWAMessageMetric:(id)arg0 data:(id)arg1 ;
-(void)storeMetricStreamFragment:(id)arg0 withDate:(id)arg1 ;


@end


#endif