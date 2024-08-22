// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTRACEPLAYERETAUPDATER_H
#define MNTRACEPLAYERETAUPDATER_H

@class NSTimer;


#import "MNSessionUpdateManager.h"

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager {
    NSTimer *_delayTimer;
}




-(void)_handleDelayTimerWithUpdateRow:(id)arg0 ;
-(void)dealloc;
-(void)playETAUpdate:(id)arg0 ;
-(void)resumeUpdateRequests;
-(void)startUpdateRequestsForRoutes:(id)arg0 andNavigationType:(int)arg1 ;


@end


#endif