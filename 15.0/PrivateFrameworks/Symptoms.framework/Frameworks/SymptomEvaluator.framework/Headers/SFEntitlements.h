// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFENTITLEMENTS_H
#define SFENTITLEMENTS_H


#import <Foundation/Foundation.h>


@interface SFEntitlements : NSObject

@property (nonatomic) BOOL symptomAnalyticsConfigure; // ivar: _symptomAnalyticsConfigure
@property (nonatomic) BOOL symptomAnalyticsHealthCheck; // ivar: _symptomAnalyticsHealthCheck
@property (nonatomic) BOOL symptomAnalyticsNetworkBitmap; // ivar: _symptomAnalyticsNetworkBitmap
@property (nonatomic) BOOL symptomAnalyticsQuery; // ivar: _symptomAnalyticsQuery
@property (nonatomic) BOOL symptomAnalyticsRefresh; // ivar: _symptomAnalyticsRefresh
@property (nonatomic) BOOL symptomAnalyticsReset; // ivar: _symptomAnalyticsReset
@property (nonatomic) BOOL symptomAnalyticsSetSnapshot; // ivar: _symptomAnalyticsSetSnapshot
@property (nonatomic) BOOL symptomAnalyticsSetWatchpoint; // ivar: _symptomAnalyticsSetWatchpoint
@property (nonatomic) BOOL symptomAnalyticsSweep; // ivar: _symptomAnalyticsSweep
@property (nonatomic) BOOL symptomAnalyticsTrain; // ivar: _symptomAnalyticsTrain
@property (nonatomic) BOOL symptomsNDF; // ivar: _symptomsNDF
@property (nonatomic) BOOL symptomsNetDomainsAdmin; // ivar: _symptomsNetDomainsAdmin
@property (nonatomic) BOOL symptomsNetworkOfInterest; // ivar: _symptomsNetworkOfInterest
@property (nonatomic) BOOL symptomsRNFTest; // ivar: _symptomsRNFTest
@property (nonatomic) BOOL symptomsSymptomsToolTest; // ivar: _symptomsSymptomsToolTest


+(NSUInteger)entitlementForString:(id)arg0 ;
+(id)stringForEntitlement:(NSUInteger)arg0 ;
-(BOOL)boolForEntitlement:(NSUInteger)arg0 ;
-(BOOL)boolForEntitlementString:(id)arg0 ;


@end


#endif