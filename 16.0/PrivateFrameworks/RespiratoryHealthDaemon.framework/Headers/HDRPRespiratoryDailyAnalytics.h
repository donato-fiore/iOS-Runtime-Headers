// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRPRESPIRATORYDAILYANALYTICS_H
#define HDRPRESPIRATORYDAILYANALYTICS_H

@class NSString, HDPeriodicActivity, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate, HKFeatureAvailabilityProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDRPRespiratoryDailyAnalytics : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>



@property (readonly, nonatomic) CGFloat calculationPeriod; // ivar: _calculationPeriod
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityProvider; // ivar: _featureAvailabilityProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity; // ivar: _periodicActivity
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) CGFloat retryPeriod; // ivar: _retryPeriod
@property (readonly) Class superclass;


-(BOOL)_hasAnalyticsBeenReportedForToday:(id)arg0 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(NSInteger)_gatherAndSendDailyAnalyticsAndReturnError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 featureAvailabilityProvider:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif