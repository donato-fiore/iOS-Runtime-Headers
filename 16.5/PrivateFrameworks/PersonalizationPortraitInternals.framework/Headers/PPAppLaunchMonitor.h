// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPAPPLAUNCHMONITOR_H
#define PPAPPLAUNCHMONITOR_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPAppLaunchMonitor : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_contextHandlerQueue;
}




+(id)sharedInstance;
-(id)_init;
-(id)init;
-(id)registerForAppLaunchWithBundleId:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)deregisterForAppLaunchWithToken:(id)arg0 ;


@end


#endif