// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCOMMANDCONTROLSTREAMEVENTMONITOR_H
#define CSCOMMANDCONTROLSTREAMEVENTMONITOR_H

@class NSString;
@protocol CSCommandControlBehaviorMonitorDelegate;


#import "CSEventMonitor.h"

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate>

 {
    BOOL _isCommandControlStreaming;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isStreaming;
-(id)init;
-(void)_notifyStopCommandControl;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)commandControlBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 ;
-(void)commandControlBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 ;
-(void)commandControlBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)commandControlBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 ;


@end


#endif