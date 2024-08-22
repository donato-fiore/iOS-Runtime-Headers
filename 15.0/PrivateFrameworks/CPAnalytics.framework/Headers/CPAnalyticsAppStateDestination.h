// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSAPPSTATEDESTINATION_H
#define CPANALYTICSAPPSTATEDESTINATION_H

@class NSSet, NSString, NSArray;
@protocol CPAnalyticsDynamicPropertyProvider;


#import "CPAnalyticsDashboardDestination.h"
#import "CPAnalyticsScreenManager.h"

@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider>



@property (readonly, nonatomic) NSSet *appEventNames; // ivar: _appEventNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *featureCounters; // ivar: _featureCounters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPAnalyticsScreenManager *screenManager; // ivar: _screenManager
@property (retain, nonatomic) NSArray *sessionCounters; // ivar: _sessionCounters
@property (readonly) Class superclass;


+(BOOL)_isValidSessionEndEvent:(id)arg0 ;
-(BOOL)_shouldSendSampleWithRate:(NSUInteger)arg0 ;
-(id)_computeSessionData:(id)arg0 ;
-(id)_createCountersFromAppEvents:(id)arg0 ;
-(id)_createCountersFromConfig:(id)arg0 withKey:(id)arg1 ;
-(id)_createCountersFromScreenNames:(id)arg0 ;
-(id)_validateAndParseAppEvents:(id)arg0 ;
-(id)allStandardProperties;
-(id)getDynamicProperty:(id)arg0 forEventName:(id)arg1 payloadForSystemPropertyExtraction:(id)arg2 ;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_resetCounters;
-(void)_sendAppSessionEventFromSourceEvent:(id)arg0 payload:(id)arg1 ;
-(void)_sendDashboardAppEventForEvent:(id)arg0 ;
-(void)_sendDashboardErrorEventForEvent:(id)arg0 ;
-(void)_sendDashboardErrorEventIfNeededForEvent:(id)arg0 ;
-(void)_sendDashboardMediaEventForEvent:(id)arg0 ;
-(void)_sendDashboardMediaEventIfNeededForEvent:(id)arg0 ;
-(void)_sendDashboardScreenViewEventForEvent:(id)arg0 ;
-(void)_sendFeatureCounts;
-(void)_updateDependenciesBeforeProcessingEvent:(id)arg0 ;
-(void)processEvent:(id)arg0 ;
-(void)registerSystemProperties:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif