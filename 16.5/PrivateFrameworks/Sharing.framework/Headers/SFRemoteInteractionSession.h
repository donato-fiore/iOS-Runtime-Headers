// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFREMOTEINTERACTIONSESSION_H
#define SFREMOTEINTERACTIONSESSION_H

@class NSXPCConnection, SDRemoteInteractionAgent;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) SDRemoteInteractionAgent *agent; // ivar: _agent
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *remoteTextEventHandler; // ivar: _remoteTextEventHandler
@property (copy, nonatomic) id *textSessionDidBegin; // ivar: _textSessionDidBegin
@property (copy, nonatomic) id *textSessionDidChange; // ivar: _textSessionDidChange
@property (copy, nonatomic) id *textSessionDidEnd; // ivar: _textSessionDidEnd


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_sessionHandleEvent:(id)arg0 ;
-(void)_sessionSendPayload:(id)arg0 ;
-(void)_sessionStart;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)remoteInteractionSessionRemoteTextEvent:(id)arg0 ;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg0 ;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg0 ;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg0 ;
-(void)sendPayload:(id)arg0 ;


@end


#endif