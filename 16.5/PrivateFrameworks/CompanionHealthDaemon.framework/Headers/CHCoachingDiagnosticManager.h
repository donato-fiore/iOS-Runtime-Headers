// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCOACHINGDIAGNOSTICMANAGER_H
#define CHCOACHINGDIAGNOSTICMANAGER_H

@class HDProfile, HDPeriodicActivity, NSDate, NSString;
@protocol HDPeriodicActivityDelegate, HDDiagnosticObject, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHCoachingDiagnosticManager : NSObject <HDPeriodicActivityDelegate, HDDiagnosticObject, HDProfileReadyObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_scheduler;
    NSDate *_cachedLastSubmittedDate;
    NSInteger _lastRingCompletionSubmittedIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_performRingCompletionDiagnostics;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(NSInteger)_queue_lastRingCompletionSubmittedIndex;
-(id)_queue_lastSubmittedDate;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_setLastRingCompletionSubmittedIndex:(NSInteger)arg0 ;
-(void)_queue_setLastSubmittedDate:(id)arg0 ;
-(void)dealloc;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif