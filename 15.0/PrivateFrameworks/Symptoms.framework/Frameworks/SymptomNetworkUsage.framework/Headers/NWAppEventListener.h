// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAPPEVENTLISTENER_H
#define NWAPPEVENTLISTENER_H

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor;
@protocol NWAppStateEventListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWAppEventListener : NSObject {
    BKSApplicationStateMonitor *appStateMonitor;
    FBSDisplayLayoutMonitor *displayLayoutMonitor;
}


@property (weak, nonatomic) NSObject<NWAppStateEventListenerDelegate> *appStateDelegate; // ivar: _appStateDelegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(void)_applicationStateMonitorInit;
-(void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg0 UUID:(id)arg1 pid:(int)arg2 state:(unsigned int)arg3 ;
-(void)dealloc;


@end


#endif