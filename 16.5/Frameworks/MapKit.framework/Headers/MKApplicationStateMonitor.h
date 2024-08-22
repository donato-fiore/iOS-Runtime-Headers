// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAPPLICATIONSTATEMONITOR_H
#define MKAPPLICATIONSTATEMONITOR_H

@class RBSProcessMonitor;

#import <Foundation/Foundation.h>


@interface MKApplicationStateMonitor : NSObject {
    RBSProcessMonitor *_processMonitor;
    BOOL _isVisible;
    NSUInteger _observerCount;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) BOOL forceRunningBoardServicesMonitoring; // ivar: _forceRunningBoardServicesMonitoring
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground; // ivar: _inBackground


+(id)sharedInstance;
-(BOOL)_applicationStateIsForegroundForTaskState:(unsigned char)arg0 ;
-(id)_stringForTaskState:(unsigned char)arg0 ;
-(id)init;
-(void)_becomeActive;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_handleApplicationStateChangeForMonitor:(id)arg0 handle:(id)arg1 update:(id)arg2 interestedPid:(int)arg3 ;
-(void)_performSynchronouslyOnMainQueue:(id)arg0 ;
-(void)_resignActive;
-(void)_setupProcessMonitorWithIdentifier:(id)arg0 interestedPid:(int)arg1 ;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif