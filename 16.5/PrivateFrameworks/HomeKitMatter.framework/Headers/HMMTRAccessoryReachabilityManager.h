// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRACCESSORYREACHABILITYMANAGER_H
#define HMMTRACCESSORYREACHABILITYMANAGER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMMTRAccessoryServer.h"

@interface HMMTRAccessoryReachabilityManager : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *reachabilityTimer; // ivar: _reachabilityTimer
@property (nonatomic) BOOL reachable; // ivar: _reachable
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithServer:(id)arg0 timeout:(NSInteger)arg1 queue:(id)arg2 ;
-(void)reachabilityUpdate;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif