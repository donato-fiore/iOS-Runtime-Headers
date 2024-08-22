// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15REMINDERSUICORE24TTRLOCATIONCHANGEMONITOR_H
#define _TTC15REMINDERSUICORE24TTRLOCATIONCHANGEMONITOR_H


#import <Foundation/Foundation.h>


@interface _TtC15RemindersUICore24TTRLocationChangeMonitor : NSObject {
    ? locationChange;
    ? lastResult;
    ? locationManager;
    ? timerInterval;
    ? hasStarted;
    ? state;
    ? locationChangePassthroughSubject;
}




-(id)init;
-(void)dealloc;
-(void)timerFired;


@end


#endif