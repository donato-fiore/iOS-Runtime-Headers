// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUIAPPLICATIONSIRITASKDELIVERER_H
#define AFUIAPPLICATIONSIRITASKDELIVERER_H

@class NSString, BKSApplicationStateMonitor, BKSProcessAssertion;
@protocol AFSiriTaskDelivering, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFWatchdogTimer.h"
#import "AFSiriTaskmaster.h"

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>

 {
    NSString *_appBundleIdentifier;
    BKSApplicationStateMonitor *_appStateMonitor;
    BKSProcessAssertion *_bKSAssertionForBgLaunch;
    AFWatchdogTimer *_assertionTimer;
    NSObject<OS_dispatch_group> *_bKSAssertionSetupGroup;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) AFSiriTaskmaster *taskmaster; // ivar: _taskmaster


-(id)initWithAppBundleIdentifier:(id)arg0 ;
-(void)_handleSuccessfulAppLaunchToBackground:(BOOL)arg0 forRequest:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateAssertionTimer;
-(void)_invalidateBackboardServices;
-(void)_processAssertionWasAcquired:(BOOL)arg0 ;
-(void)_processAssertionWasInvalidatedForRequest:(id)arg0 ;
-(void)_startAppStateMonitoringForRequest:(id)arg0 ;
-(void)dealloc;
-(void)deliverSiriTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)processAssertionWasInvalidatedForRequest:(id)arg0 ;
-(void)siriTaskDidFinish;


@end


#endif