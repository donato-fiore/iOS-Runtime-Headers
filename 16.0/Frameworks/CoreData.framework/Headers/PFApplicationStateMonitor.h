// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAPPLICATIONSTATEMONITOR_H
#define PFAPPLICATIONSTATEMONITOR_H

@protocol PFApplicationStateMonitorDelegate;

#import <Foundation/Foundation.h>

#import "PFCloudKitThrottledNotificationObserver.h"

@interface PFApplicationStateMonitor : NSObject {
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;
    uint8_t _transitionCounter;
    NSInteger _backgroundTimeout;
    NSUInteger _applicationState;
    NSObject<PFApplicationStateMonitorDelegate> *_delegate;
}




-(id)init;
-(void)applicationDidActivate:(id)arg0 ;
-(void)applicationWillDeactivate:(id)arg0 ;
-(void)dealloc;


@end


#endif