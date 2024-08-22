// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROTAANNOUNCETIMER_H
#define HMMTROTAANNOUNCETIMER_H

@class HMFObject, HMFTimer, NSString, NSNumber;
@protocol HMFTimerDelegate;


#import "HMMTRAccessoryServer.h"

@interface HMMTROTAAnnounceTimer : HMFObject <HMFTimerDelegate>



@property (retain, nonatomic) HMFTimer *announceTimer; // ivar: _announceTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *nodeId; // ivar: _nodeId
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithServer:(id)arg0 nodeId:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 ;
-(id)logIdentifier;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif