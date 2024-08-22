// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSGESTUREMONITORPHONE_H
#define CSGESTUREMONITORPHONE_H

@class CMWakeGestureManager, NSString;
@protocol CMWakeGestureDelegate;


#import "CSGestureMonitor.h"

@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate>

 {
    CMWakeGestureManager *_gestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_didReceiveSleepGesture;
-(void)_didReceiveWakeGesture;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif