// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMTHREADEXTERNALCOMMISSIONER_H
#define HMTHREADEXTERNALCOMMISSIONER_H

@class BorderAgentConnector, BorderAgentFinder, NSError, NSUUID, NSString, HMFTimer;
@protocol BorderAgentListener, HMFCancellable, HMFTimerDelegate, HMFLogging, HMThreadExternalCommissioner, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMThreadNetworkCredentials.h"
#import "HMHome.h"

@interface HMThreadExternalCommissioner : NSObject <BorderAgentListener, HMFCancellable, HMFTimerDelegate, HMFLogging, HMThreadExternalCommissioner>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) BorderAgentConnector *borderAgentConnector; // ivar: _borderAgentConnector
@property (readonly, nonatomic) BorderAgentFinder *borderAgentFinder; // ivar: _borderAgentFinder
@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (nonatomic, getter=isCommissioning) BOOL commissioning; // ivar: _commissioning
@property (retain, nonatomic) HMThreadNetworkCredentials *credentials; // ivar: _credentials
@property (readonly, nonatomic) HMHome *credentialsHome; // ivar: _credentialsHome
@property (readonly, nonatomic) NSUUID *credentialsUUID; // ivar: _credentialsUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *finderCompletion; // ivar: _finderCompletion
@property (readonly, nonatomic) CGFloat finderTimeoutInterval; // ivar: _finderTimeoutInterval
@property (retain, nonatomic) HMFTimer *finderTimer; // ivar: _finderTimer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_txtRecordDataMatches:(id)arg0 ;
-(id)_computeJoinerPassphraseFromSetupCode:(id)arg0 ;
-(id)_ensureSetupCodeFormat:(id)arg0 ;
-(id)commissionAccessoryWithEui64:(id)arg0 setupCode:(id)arg1 completion:(id)arg2 ;
-(id)initCommon;
-(id)initWithFinderTimeoutInterval:(CGFloat)arg0 borderAgentFinder:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithNetworkCredentials:(id)arg0 ;
-(id)logIdentifier;
-(void)_cancelWithError:(id)arg0 ;
-(void)_commissionAccessoryWithService:(id)arg0 eui64:(id)arg1 commissionerPassphrase:(id)arg2 PSKc:(id)arg3 joinerPassphrase:(id)arg4 completion:(id)arg5 ;
-(void)_findBorderRouterForCredentials:(id)arg0 completion:(id)arg1 ;
-(void)_resolveCredentialsWithCompletion:(id)arg0 ;
-(void)agentChanged;
-(void)cancel;
-(void)timerDidFire:(id)arg0 ;


@end


#endif