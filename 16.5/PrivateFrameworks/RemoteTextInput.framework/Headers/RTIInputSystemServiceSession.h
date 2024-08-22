// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMSERVICESESSION_H
#define RTIINPUTSYSTEMSERVICESESSION_H

@class NSMutableSet, NSMutableDictionary, NSXPCConnection, NSString, NSSet;
@protocol RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate, OS_dispatch_queue;


#import "RTIInputSystemSession.h"
#import "RTIDataPayload.h"
#import "RTIDocumentRequest.h"

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_externalOperationsQueue;
    NSMutableSet *_supplementalLexicons;
    NSMutableSet *_rtiSupplementalLexicons;
    NSMutableDictionary *_pendingSupplementalLexicons;
    NSMutableDictionary *_pendingRTISupplementalLexicons;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RTIDocumentRequest *defaultRequest; // ivar: _defaultRequest
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly, nonatomic) NSUInteger payloadVersion; // ivar: _payloadVersion
@property (readonly, nonatomic) NSSet *rtiSupplementalLexicons;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *supplementalLexicons;


+(id)sessionWithConnection:(id)arg0 ;
-(id)bundleIdentifier;
-(id)initWithConnection:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(int)pid;
-(void)_killConnectionWithCallback;
-(void)_queue_sessionWithID:(id)arg0 didAddRTISupplementalLexicon:(id)arg1 ;
-(void)_queue_sessionWithID:(id)arg0 didAddSupplementalLexicon:(id)arg1 ;
-(void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id)arg0 ;
-(void)beginRemoteTextInputSessionWithID:(id)arg0 documentTraits:(id)arg1 initialDocumentState:(id)arg2 ;
-(void)beginRemoteTextInputSessionWithID:(id)arg0 options:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3 ;
-(void)dealloc;
-(void)didInitializeWithConnection:(id)arg0 ;
-(void)endRemoteTextInputSessionWithID:(id)arg0 ;
-(void)endRemoteTextInputSessionWithID:(id)arg0 options:(id)arg1 ;
-(void)flushOperations;
-(void)flushOperationsWithResultHandler:(id)arg0 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)performDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didAddRTISupplementalLexicon:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didAddSupplementalLexicon:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didChangePause:(BOOL)arg1 withReason:(id)arg2 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didRemoveRTISupplementalLexiconWithIdentifier:(NSUInteger)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didRemoveSupplementalLexiconWithIdentifier:(NSUInteger)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentDidChange:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentTraitsDidChange:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 performInputOperation:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 performInputOperation:(id)arg1 withResponse:(id)arg2 ;
-(void)remoteTextInputSessionWithID:(id)arg0 textSuggestionsChanged:(id)arg1 ;


@end


#endif