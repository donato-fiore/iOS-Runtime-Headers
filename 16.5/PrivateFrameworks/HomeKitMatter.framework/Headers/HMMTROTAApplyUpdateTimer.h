// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROTAAPPLYUPDATETIMER_H
#define HMMTROTAAPPLYUPDATETIMER_H

@class HMFObject, NSString, NSNumber, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMMTROTAProviderDelegate.h"
#import "HMMTRAccessoryServer.h"

@interface HMMTROTAApplyUpdateTimer : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *expectedVersion; // ivar: _expectedVersion
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMMTROTAProviderDelegate *otaProvider; // ivar: _otaProvider
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server; // ivar: _server
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *updateTimer; // ivar: _updateTimer


+(id)logCategory;
-(id)initWithServer:(id)arg0 otaProvider:(id)arg1 newVersion:(id)arg2 delay:(id)arg3 queue:(id)arg4 ;
-(id)logIdentifier;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif