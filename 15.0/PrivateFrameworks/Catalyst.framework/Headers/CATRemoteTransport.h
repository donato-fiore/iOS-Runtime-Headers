// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATREMOTETRANSPORT_H
#define CATREMOTETRANSPORT_H

@class NSMutableDictionary, NSString;
@protocol CATRemoteConnectionDelegate, CATRemoteTransportDelegate;


#import "CATTransport.h"
#import "CATRemoteConnection.h"

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate>

 {
    CATRemoteConnection *mConnection;
    NSMutableDictionary *mOperationByUUID;
    BOOL mConnectionHasOpened;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__SecTrust peerTrust;
@property (weak, nonatomic) NSObject<CATRemoteTransportDelegate> *remoteTransportDelegate; // ivar: _remoteTransportDelegate
@property (readonly) Class superclass;


+(id)new;
+(void)createRemoteTransportPairWithTransport:(*id)arg0 andTransport:(*id)arg1 ;
-(id)init;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)name;
-(id)operationToSendMessage:(id)arg0 ;
-(void)connection:(id)arg0 didFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didSendData:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 encounteredTrustDecisionWhileTryingToSecure:(id)arg1 ;
-(void)connectionDidClose:(id)arg0 ;
-(void)connectionDidSecure:(id)arg0 ;
-(void)connectionWillSecure:(id)arg0 ;
-(void)invalidateConnection;
-(void)remoteTransportSendMessageOperation:(id)arg0 sendData:(id)arg1 ;
-(void)resumeConnection;
-(void)setName:(id)arg0 ;
-(void)suspendConnection;


@end


#endif