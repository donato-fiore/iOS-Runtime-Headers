// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONPERIODICSCHEDULER_H
#define HDMEDICATIONPERIODICSCHEDULER_H

@class HDDaemon, HDPeriodicActivity, NSString;
@protocol HDPeriodicActivityDelegate, HDProfileReadyObserver;

#import <Foundation/Foundation.h>


@interface HDMedicationPeriodicScheduler : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver>

 {
    HDDaemon *_daemon;
    HDPeriodicActivity *_periodicActivity;
}


@property (readonly, nonatomic) HDPeriodicActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif