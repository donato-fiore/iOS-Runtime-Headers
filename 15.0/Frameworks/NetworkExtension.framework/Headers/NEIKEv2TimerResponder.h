// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2TIMERRESPONDER_H
#define NEIKEV2TIMERRESPONDER_H


#import <Foundation/Foundation.h>


@interface NEIKEv2TimerResponder : NSObject



+(id)sharedTimerResponder;
-(void)childTimerFired:(id)arg0 ;
-(void)ikeTimerFired:(id)arg0 ;


@end


#endif