// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROTAAPPLYUPDATEREQUESTTIMER_H
#define HMMTROTAAPPLYUPDATEREQUESTTIMER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMMTROTAProviderDelegate.h"
#import "HMMTRAccessoryServer.h"

@interface HMMTROTAApplyUpdateRequestTimer : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMMTROTAProviderDelegate *otaProvider; // ivar: _otaProvider
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server; // ivar: _server
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *updateTimer; // ivar: _updateTimer


+(id)logCategory;
-(id)initWithServer:(id)arg0 otaProvider:(id)arg1 queue:(id)arg2 ;
-(id)logIdentifier;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif