// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYACTIVATIONCLIENT_H
#define HMDRELAYACTIVATIONCLIENT_H

@class HAPRelayActivationClient, NSString;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSString *challengeIdentifier; // ivar: _challengeIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 ;
-(void)_closeWithError:(id)arg0 ;
-(void)close;
-(void)open;
-(void)requestCertificateWithPublicKey:(id)arg0 challengeCertificate:(id)arg1 challengeResponse:(id)arg2 ;
-(void)requestChallenge;


@end


#endif