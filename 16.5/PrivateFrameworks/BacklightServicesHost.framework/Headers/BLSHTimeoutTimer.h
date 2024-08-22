// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHTIMEOUTTIMER_H
#define BLSHTIMEOUTTIMER_H



#import "BLSHAssertionAttributeTimer.h"

@interface BLSHTimeoutTimer : BLSHAssertionAttributeTimer



-(BOOL)reactivateIfPossible;
-(void)restartTimer;
-(void)timerFired;


@end


#endif