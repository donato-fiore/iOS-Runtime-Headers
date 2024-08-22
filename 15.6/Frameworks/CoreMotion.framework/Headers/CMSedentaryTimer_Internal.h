// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSEDENTARYTIMER_INTERNAL_H
#define CMSEDENTARYTIMER_INTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSedentaryTimer_Internal : NSObject {
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    *void fLocationdConnection;
}


@property (nonatomic, getter=isTimerArmed) BOOL timerArmed; // ivar: _timerArmed


-(BOOL)_isActive;
-(id)init;
-(void)_handleAlarmDataResponse:(struct shared_ptr<CLConnectionMessage> )arg0 withHandler:(id)arg1 ;
-(void)_handleStartStopTimerResponse:(struct shared_ptr<CLConnectionMessage> )arg0 withHandler:(id)arg1 ;
-(void)_registerForAlarmsWithHandler:(id)arg0 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif