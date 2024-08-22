// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUDIOANALYTICSMANAGER_H
#define HDAUDIOANALYTICSMANAGER_H

@class NSString, HDPeriodicActivity, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>



@property (readonly, nonatomic) CGFloat calculationPeriod; // ivar: _calculationPeriod
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity; // ivar: _periodicActivity
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) CGFloat retryPeriod; // ivar: _retryPeriod
@property (readonly) Class superclass;


-(BOOL)_dayComponents:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)_recordedDataForToday;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(id)_dayForDate:(id)arg0 ;
-(id)capturePhoneAnalytics;
-(id)initWithProfile:(id)arg0 ;
-(id)lastSuccessfulCalculation;
-(void)daemonReady:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;


@end


#endif