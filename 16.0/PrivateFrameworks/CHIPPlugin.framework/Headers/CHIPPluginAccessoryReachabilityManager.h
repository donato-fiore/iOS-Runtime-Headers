// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINACCESSORYREACHABILITYMANAGER_H
#define CHIPPLUGINACCESSORYREACHABILITYMANAGER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "CHIPAccessoryServer.h"

@interface CHIPPluginAccessoryReachabilityManager : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *reachabilityTimer; // ivar: _reachabilityTimer
@property (nonatomic) BOOL reachable; // ivar: _reachable
@property (readonly, weak, nonatomic) CHIPAccessoryServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithServer:(id)arg0 timeout:(NSInteger)arg1 queue:(id)arg2 ;
-(id)logIdentifier;
-(void)reachabilityUpdate;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif