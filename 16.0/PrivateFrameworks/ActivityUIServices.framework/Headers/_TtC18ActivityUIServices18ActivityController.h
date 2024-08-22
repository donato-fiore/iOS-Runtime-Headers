// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES18ACTIVITYCONTROLLER_H
#define _TTC18ACTIVITYUISERVICES18ACTIVITYCONTROLLER_H


#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices22ActivityMetricsRequest.h"

@interface _TtC18ActivityUIServices18ActivityController : NSObject {
    ? activityManager;
    ? cancellableSet;
    ? observingActivityUpdates;
    ? activities;
    ? activityProviders;
    ? alertClient;
    ? activityPlatterPublisher;
    ? activityPlatterStream;
    ? activityAlertPublisher;
    ? activityAlertStream;
    ? queue;
}


@property (nonatomic, readonly) BOOL areActivitiesEnabled;
@property (nonatomic, retain) _TtC18ActivityUIServices22ActivityMetricsRequest *systemMetricsRequest; // ivar: systemMetricsRequest


+(id)shared;
-(BOOL)isActivityActiveWithIdentifier:(id)arg0 ;
-(id)init;
-(id)observeActivityAlertsWithHandler:(id)arg0 ;
-(id)observeActivityUpdatesWithHandler:(id)arg0 ;
-(void)disableActivitiesForBundleId:(id)arg0 ;
-(void)endActivityWithIdentifier:(id)arg0 ;
-(void)observeActivityUpdates;


@end


#endif