// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIINPUTSYSTEMCLIENT_H
#define RTIINPUTSYSTEMCLIENT_H

@class NSMutableDictionary, NSMutableSet, NSString, NSArray;
@protocol RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol, RTIInputSystemClientDelegate;

#import <Foundation/Foundation.h>

#import "RTIDocumentRequest.h"

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionResponseProtocol, RTIInputSystemSessionProtocol>

 {
    NSUInteger _environmentOptions;
    BOOL _isInDealloc;
}


@property (retain, nonatomic) NSMutableDictionary *activeSessions; // ivar: _activeSessions
@property (retain, nonatomic) NSMutableSet *allowanceRequestors; // ivar: _allowanceRequestors
@property (retain, nonatomic) NSMutableSet *begunSessionIDs; // ivar: _begunSessionIDs
@property (retain, nonatomic) NSMutableDictionary *connections; // ivar: _connections
@property (readonly, nonatomic) NSUInteger currentEnvironmentOptions; // ivar: _currentEnvironmentOptions
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RTIDocumentRequest *defaultDocumentRequest; // ivar: _defaultDocumentRequest
@property (weak, nonatomic) NSObject<RTIInputSystemClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *endpointConnections; // ivar: _endpointConnections
@property (readonly, nonatomic, getter=isEnvironmentEnabled) BOOL environmentEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *invalidatedServices; // ivar: _invalidatedServices
@property (retain, nonatomic) NSArray *machNames; // ivar: _machNames
@property (readonly) Class superclass;


-(BOOL)_canResumeConnection;
-(BOOL)_remoteTextEditingIsAllowed;
-(BOOL)hasActiveSessionWithID:(id)arg0 ;
-(id)initWithMachNames:(id)arg0 ;
-(void)_beginAllActiveSessions;
-(void)_beginAllActiveSessionsForServices:(id)arg0 ;
-(void)_beginAllActiveSessionsForServices:(id)arg0 force:(BOOL)arg1 ;
-(void)_beginSessionWithID:(id)arg0 forServices:(id)arg1 ;
-(void)_beginSessionWithID:(id)arg0 forServices:(id)arg1 force:(BOOL)arg2 ;
-(void)_configureConnection:(id)arg0 withMachName:(id)arg1 ;
-(void)_didIntializeConnection:(id)arg0 withMachName:(id)arg1 ;
-(void)_endAllActiveSessions;
-(void)_endAllActiveSessionsForServices:(id)arg0 ;
-(void)_endSessionWithID:(id)arg0 forServices:(id)arg1 options:(id)arg2 ;
-(void)_initializeConnectionWithMachName:(id)arg0 ;
-(void)_modifyTextEditingAllowedForReason:(id)arg0 notify:(BOOL)arg1 block:(id)arg2 ;
-(void)_updateAttributesForSessionWithID:(id)arg0 ;
-(void)_updateTextForSessionWithID:(id)arg0 ;
-(void)addEndpoint:(id)arg0 ;
-(void)beginAllowingRemoteTextInput:(id)arg0 ;
-(void)beginRemoteTextInputSessionWithID:(id)arg0 documentTraits:(id)arg1 initialDocumentState:(id)arg2 ;
-(void)beginRemoteTextInputSessionWithID:(id)arg0 options:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3 ;
-(void)dealloc;
-(void)endAllowingRemoteTextInput:(id)arg0 ;
-(void)endRemoteTextInputSessionWithID:(id)arg0 ;
-(void)endRemoteTextInputSessionWithID:(id)arg0 options:(id)arg1 ;
-(void)enumerateServices:(id)arg0 force:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)notifyServiceOfPause:(BOOL)arg0 withReason:(id)arg1 ;
-(void)performDocumentRequest:(id)arg0 completion:(id)arg1 ;
-(void)performTextOperations:(id)arg0 ;
-(void)performTextOperations:(id)arg0 resultHandler:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didAddRTISupplementalLexicon:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didAddSupplementalLexicon:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didRemoveRTISupplementalLexiconWithIdentifier:(NSUInteger)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 didRemoveSupplementalLexiconWithIdentifier:(NSUInteger)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentDidChange:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 documentTraitsDidChange:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 performInputOperation:(id)arg1 ;
-(void)remoteTextInputSessionWithID:(id)arg0 performInputOperation:(id)arg1 withResponse:(id)arg2 ;
-(void)remoteTextInputSessionWithID:(id)arg0 textSuggestionsChanged:(id)arg1 ;
-(void)removeEndpoint:(id)arg0 ;
-(void)setEnvironmentOptions:(NSUInteger)arg0 withReason:(id)arg1 ;
-(void)updateDefaultDocumentRequest:(id)arg0 ;


@end


#endif