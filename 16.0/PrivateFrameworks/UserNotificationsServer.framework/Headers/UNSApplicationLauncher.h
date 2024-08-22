// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSAPPLICATIONLAUNCHER_H
#define UNSAPPLICATIONLAUNCHER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSLocationMonitor.h"

@interface UNSApplicationLauncher : NSObject {
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_bundleIdentifierToAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_queue_actionForNotificationResponse:(id)arg0 bundleIdentifier:(id)arg1 withHandler:(id)arg2 ;
// -(id)_queue_newProcessAssertionForBundleID:(id)arg0 PID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 watchdogInterval:(CGFloat)arg5 acquisitionHandler:(id)arg6 invalidationHandler:(unk)arg7  ;
-(id)initWithLocationMonitor:(id)arg0 ;
-(void)_queue_acquireActivityKitAssertionIfNeededForBundleIdentifier:(id)arg0 withResponse:(id)arg1 ;
-(void)_queue_addProcessAssertion:(id)arg0 forBundleID:(id)arg1 ;
-(void)_queue_backgroundLaunchApplication:(id)arg0 withResponse:(id)arg1 completionHandler:(id)arg2 ;
-(void)_queue_foregroundLaunchApplication:(id)arg0 withResponse:(id)arg1 launchImageName:(id)arg2 origin:(id)arg3 endpoint:(id)arg4 completionHandler:(id)arg5 ;
-(void)_queue_removeAllProcessAssertionsAndInvalidate:(BOOL)arg0 ;
-(void)_queue_removeProcessAssertion:(id)arg0 forBundleID:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg0 forBundleID:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)_queue_willPresentNotification:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_removeAllProcessAssertionsAndInvalidate:(BOOL)arg0 ;
-(void)backgroundLaunchApplication:(id)arg0 withResponse:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)foregroundLaunchApplication:(id)arg0 withResponse:(id)arg1 launchImageName:(id)arg2 origin:(id)arg3 endpoint:(id)arg4 completionHandler:(id)arg5 ;
-(void)willPresentNotification:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif