// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFOREGROUNDMONITOR_H
#define PLFOREGROUNDMONITOR_H

@class NSMutableSet, BKSApplicationStateMonitor;
@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}


@property (weak, nonatomic) NSObject<PLForegroundMonitorDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_applicationChangeToBG:(id)arg0 ;
-(void)_applicationChangeToFG:(id)arg0 ;
-(void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg0 ;
-(void)_locked_applicationDidMoveToBackground:(id)arg0 ;
-(void)_locked_applicationDidMoveToForeground:(id)arg0 ;
-(void)dealloc;


@end


#endif