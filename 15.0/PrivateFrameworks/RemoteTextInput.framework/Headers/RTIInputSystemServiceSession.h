// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTIINPUTSYSTEMSERVICESESSION_H
#define RTIINPUTSYSTEMSERVICESESSION_H

@class NSXPCConnection, NSString;
@protocol RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate, OS_dispatch_queue;


#import "RTIInputSystemSession.h"
#import "RTIDataPayload.h"

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly) Class superclass;


+(id)sessionWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_killConnectionWithCallback;
-(void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id)arg0 ;
-(void)beginRemoteTextInputSessionWithID:(id)arg0 documentTraits:(id)arg1 initialDocumentState:(id)arg2 ;
-(void)dealloc;
-(void)didInitializeWithConnection:(id)arg0 ;
-(void)endRemoteTextInputSessionWithID:(id)arg0 ;
-(void)flushOperations;
-(void)flushOperationsWithResultHandler:(id)arg0 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didChangePause:(BOOL)arg1 withReason:(id)arg2 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentDidChange:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentTraitsDidChange:(id)arg1 ;


@end


#endif