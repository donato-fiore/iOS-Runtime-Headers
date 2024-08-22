// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAIDSSESSIONRECEIVER_H
#define HMDCAMERAIDSSESSIONRECEIVER_H

@class NSString, IDSSession;
@protocol IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol, HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;


#import "HMDCameraIDSSessionHandler.h"
#import "HMDCameraIDSSessionInviterDeviceVerifier.h"

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraIDSSessionReceiverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *remoteDestination;
@property (readonly) IDSSession *session;
@property (readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // ivar: _sessionInviterDeviceVerifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 sessionInviterDeviceVerifier:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)logIdentifier;
-(void)_callSessionEndedWithError:(id)arg0 ;
-(void)_callSessionSetup:(id)arg0 ;
-(void)_receivedIDSSession:(id)arg0 ;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withContext:(id)arg4 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;
-(void)setUpRemoteConnectionWithDevice:(id)arg0 ;


@end


#endif