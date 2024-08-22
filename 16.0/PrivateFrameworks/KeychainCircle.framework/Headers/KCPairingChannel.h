// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCPAIRINGCHANNEL_H
#define KCPAIRINGCHANNEL_H

@class NSXPCConnection, OTControlArguments, OTJoiningConfiguration, OTControl;

#import <Foundation/Foundation.h>

#import "KCPairingChannelContext.h"

@interface KCPairingChannel : NSObject

@property unsigned int acceptorInitialSyncCredentialsFlags; // ivar: _acceptorInitialSyncCredentialsFlags
@property BOOL acceptorWillSendInitialSyncCredentials; // ivar: _acceptorWillSendInitialSyncCredentials
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) OTControlArguments *controlArguments; // ivar: _controlArguments
@property unsigned int counter; // ivar: _counter
@property BOOL initiator; // ivar: _initiator
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // ivar: _joiningConfiguration
@property (readonly) BOOL needInitialSync; // ivar: _needInitialSync
@property (copy) id *nextOctagonState; // ivar: _nextOctagonState
@property (copy) id *nextState; // ivar: _nextState
@property (retain) OTControl *otControl; // ivar: _otControl
@property KCPairingChannelContext *peerVersionContext; // ivar: _peerVersionContext
@property BOOL sessionSupportsOctagon; // ivar: _sessionSupportsOctagon
@property BOOL sessionSupportsSOS; // ivar: _sessionSupportsSOS
@property (nonatomic) BOOL testFailOctagon; // ivar: _testFailOctagon
@property (nonatomic) BOOL testFailSOS; // ivar: _testFailSOS


+(BOOL)isSupportedPlatform;
+(id)pairingChannelAcceptor:(id)arg0 ;
+(id)pairingChannelCompressData:(id)arg0 ;
+(id)pairingChannelDecompressData:(id)arg0 ;
+(id)pairingChannelInitiator:(id)arg0 ;
-(BOOL)ensureControlChannel;
-(id)exchangePacket:(id)arg0 complete:(*BOOL)arg1 error:(*id)arg2 ;
-(id)initAsInitiator:(BOOL)arg0 version:(id)arg1 ;
-(void)acceptorFirstOctagonPacket:(id)arg0 reply:(id)arg1 complete:(id)arg2 ;
-(void)acceptorFirstPacket:(id)arg0 complete:(id)arg1 ;
-(void)acceptorSecondOctagonPacket:(id)arg0 reply:(id)arg1 complete:(id)arg2 ;
-(void)acceptorSecondPacket:(id)arg0 complete:(id)arg1 ;
-(void)acceptorThirdPacket:(id)arg0 complete:(id)arg1 ;
-(void)exchangePacket:(id)arg0 complete:(id)arg1 ;
-(void)initiatorCompleteSecondPacketOctagon:(id)arg0 application:(id)arg1 complete:(id)arg2 ;
-(void)initiatorCompleteSecondPacketWithSOS:(id)arg0 complete:(id)arg1 ;
-(void)initiatorFirstPacket:(id)arg0 complete:(id)arg1 ;
-(void)initiatorFourthPacket:(id)arg0 complete:(id)arg1 ;
-(void)initiatorSecondPacket:(id)arg0 complete:(id)arg1 ;
-(void)initiatorThirdPacket:(id)arg0 complete:(id)arg1 ;
-(void)oneStepTooMany:(id)arg0 complete:(id)arg1 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setControlObject:(id)arg0 ;
-(void)setOctagonMessageFailForTesting:(BOOL)arg0 ;
-(void)setSOSMessageFailForTesting:(BOOL)arg0 ;
-(void)setSessionControlArguments:(id)arg0 ;
-(void)setXPCConnectionObject:(id)arg0 ;
-(void)validateStart:(id)arg0 ;
-(void)waitForOctagonUpgrade;


@end


#endif