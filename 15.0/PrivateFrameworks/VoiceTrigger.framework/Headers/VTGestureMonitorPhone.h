// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTGESTUREMONITORPHONE_H
#define VTGESTUREMONITORPHONE_H

@class CMWakeGestureManager, NSString;
@protocol CMWakeGestureDelegate;


#import "VTGestureMonitor.h"

@interface VTGestureMonitorPhone : VTGestureMonitor <CMWakeGestureDelegate>

 {
    CMWakeGestureManager *_gestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)startObserving;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif