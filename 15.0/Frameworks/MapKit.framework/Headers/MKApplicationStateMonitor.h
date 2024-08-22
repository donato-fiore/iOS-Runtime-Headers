// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKAPPLICATIONSTATEMONITOR_H
#define MKAPPLICATIONSTATEMONITOR_H

@class BKSApplicationStateMonitor;

#import <Foundation/Foundation.h>


@interface MKApplicationStateMonitor : NSObject {
    BKSApplicationStateMonitor *_appStateMonitor;
    NSUInteger _observerCount;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) BOOL forceBackboardServicesMonitoring; // ivar: _forceBackboardServicesMonitoring
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground; // ivar: _inBackground


+(id)sharedInstance;
-(void)_becomeActive;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_handleApplicationStateChange:(id)arg0 interestedPID:(int)arg1 ;
-(void)_performSynchronouslyOnMainQueue:(id)arg0 ;
-(void)_resignActive;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif