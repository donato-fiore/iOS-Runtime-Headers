// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYACTIVATIONCLIENT_H
#define HAPRELAYACTIVATIONCLIENT_H

@class HMFObject;
@protocol HAPRelayActivationClientDelegate;



@interface HAPRelayActivationClient : HMFObject

@property (weak) NSObject<HAPRelayActivationClientDelegate> *delegate; // ivar: _delegate


-(void)close;
-(void)open;
-(void)requestCertificateWithPublicKey:(id)arg0 challengeCertificate:(id)arg1 challengeResponse:(id)arg2 ;
-(void)requestChallenge;


@end


#endif