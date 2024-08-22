// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPANALYTICSINTERVALDESTINATION_H
#define CPANALYTICSINTERVALDESTINATION_H

@class NSSet;


#import "CPAnalyticsDashboardDestination.h"

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination

@property (retain, nonatomic) NSSet *ignoredIntervalNames; // ivar: _ignoredIntervalNames
@property (retain, nonatomic) NSSet *trackedIntervalNames; // ivar: _trackedIntervalNames


-(id)_intervalNamesForKey:(id)arg0 inConfiguration:(id)arg1 ;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_handleEvent:(id)arg0 withUnknownIntervalName:(id)arg1 ;
-(void)processEvent:(id)arg0 ;
-(void)sendDashboardIntervalEventForEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif