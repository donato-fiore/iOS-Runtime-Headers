// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDOCELOTSTORE_H
#define ASDOCELOTSTORE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDOcelotStore : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)flushMetricsWithCompletionBlock:(id)arg0 ;
-(void)getAppPayoutEventsWithCompletionBlock:(id)arg0 ;
-(void)getAppSummaryEventsWithCompletionBlock:(id)arg0 ;
-(void)recordLaunchesWithCompletionBlock:(id)arg0 ;
-(void)recordMetricsWithCompletionBlock:(id)arg0 ;
-(void)reportAppEvent:(id)arg0 completionBlock:(id)arg1 ;
-(void)resetPayoutWithCompletionBlock:(id)arg0 ;
-(void)resetSummaryWithCompletionBlock:(id)arg0 ;
-(void)sbsyncIfSubscribedWithAccount:(id)arg0 completionBlock:(id)arg1 ;
-(void)sbsyncWithCompletionBlock:(id)arg0 ;
-(void)sbsyncWithDuration:(id)arg0 completionBlock:(id)arg1 ;
-(void)sendPayoutWithCompletionBlock:(id)arg0 ;
-(void)sendSummaryWithCompletionBlock:(id)arg0 ;
-(void)subscriptionDetailsWithCompletionBlock:(id)arg0 ;
-(void)subscriptionStateWithCompletionBlock:(id)arg0 ;
-(void)topAppsForAccount:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif