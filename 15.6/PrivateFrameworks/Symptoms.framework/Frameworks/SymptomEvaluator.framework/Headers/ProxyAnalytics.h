// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROXYANALYTICS_H
#define PROXYANALYTICS_H

@class NSXPCConnection;
@protocol ProxyAnalyticsDelegate;

#import <Foundation/Foundation.h>


@interface ProxyAnalytics : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSObject<ProxyAnalyticsDelegate> *delegate; // ivar: _delegate


-(void)dealloc;
-(void)performAppEndpointTrackingPeriodicTasks;
-(void)performAppExperiencePeriodicTasks;
-(void)performAppPeriodicTasks;
-(void)performAppTrackingPeriodicTasks;
-(void)performPersistentStoreHealthCheck;
-(void)trainModelAndScore:(BOOL)arg0 lastScoreDate:(id)arg1 ;


@end


#endif