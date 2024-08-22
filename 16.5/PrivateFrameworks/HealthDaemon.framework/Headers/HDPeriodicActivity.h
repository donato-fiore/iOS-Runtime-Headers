// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPERIODICACTIVITY_H
#define HDPERIODICACTIVITY_H

@class HDXPCPeriodicActivity, NSString;
@protocol HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, OS_xpc_object, HDPeriodicActivityDelegate, OS_os_log;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject>

 {
    HDProfile *_profile;
    HDXPCPeriodicActivity *_activity;
    BOOL _unitTest_shouldDefer;
}


@property (readonly) NSObject<OS_xpc_object> *currentActivity; // ivar: _currentActivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDPeriodicActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger errorCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // ivar: _loggingCategory
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly) Class superclass;


+(void)registerDisabledPeriodicActivityWithName:(id)arg0 loggingCategory:(id)arg1 ;
-(BOOL)isWaitingToRun;
-(id)currentCriteria;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 name:(id)arg1 interval:(CGFloat)arg2 delegate:(id)arg3 loggingCategory:(id)arg4 ;
-(id)lastSuccessfulRunDate;
-(void)daemonActivated:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)didPerformActivityWithResult:(NSInteger)arg0 minimumRetryInterval:(CGFloat)arg1 activityStartDate:(id)arg2 error:(id)arg3 ;
-(void)reset;
-(void)synthesizeActivityFire;
-(void)updateCriteria;


@end


#endif