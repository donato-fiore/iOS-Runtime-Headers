// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IDSGROUPSESSION_H
#define _IDSGROUPSESSION_H

@class NSString, NSSet, NSDictionary, IDSBaseSocketPairConnection, CUTWeakReference, NSMutableDictionary, NSArray, NSError, NSNumber, NSMutableArray;
@protocol IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSGroupEncryptionKeyMaterialCache.h"

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>

 {
    id *_delegateContext;
    NSString *_instanceID;
    NSString *_accountID;
    NSSet *_destinations;
    NSDictionary *_destinationsLightweightStatus;
    NSString *_fromID;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isInvalidated;
    NSInteger _transportType;
    NSUInteger _connectionCountHint;
    BOOL _needsToWaitForPreConnectionData;
    BOOL _disallowCellularInterface;
    BOOL _disallowWifiInterface;
    NSUInteger _preferredAddressFamily;
    BOOL _preferCellularForCallSetup;
    NSString *_clientUUID;
    BOOL _alwaysSkipSelf;
    BOOL _startAsUPlusOneSession;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
    BOOL _useConfServer;
    NSString *_stableGroupID;
    NSString *_groupID;
    NSDictionary *_participantInfo;
    *cfs_client_s _cfs_client;
    int _cfs_requestID;
    BOOL _cfsJoinReply;
    BOOL _didJoinCallback;
    BOOL _cfsLeaveReply;
    BOOL _didLeaveCallback;
    NSArray *_existingParticipants;
    NSError *_joinLeaveError;
    NSNumber *_qrReason;
    NSNumber *_previousError;
    IDSGroupEncryptionKeyMaterialCache *_keyMaterialCache;
    NSMutableArray *_dataCryptorRequests;
    NSMutableDictionary *_createParticipantIDAliasCallbacks;
    NSMutableDictionary *_getParticipantIDForAliasCallbacks;
    NSMutableArray *_getParticipantIDForAliasDelegateQueueCallbacks;
}


@property (retain, nonatomic) id *boostContext; // ivar: _boostContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isLightweightParticipant; // ivar: _isLightweightParticipant
@property (readonly, nonatomic) NSUInteger localParticipantID; // ivar: _localParticipantID
@property (readonly, nonatomic) NSSet *requiredCapabilities; // ivar: _requiredCapabilities
@property (readonly, nonatomic) NSSet *requiredLackOfCapabilities; // ivar: _requiredLackOfCapabilities
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(id)getDestinations;
-(id)getDestinationsLightweightStatusDict;
-(id)initWithAccount:(id)arg0 destinations:(id)arg1 options:(id)arg2 delegateContext:(id)arg3 ;
-(id)sessionIDAliasWithSalt:(id)arg0 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_callDelegateWithBlock:(id)arg0 ;
-(void)_checkAndSendDataCryptor;
-(void)_cleanupSocketPairConnections;
-(void)createAliasForLocalParticipantIDWithSalt:(id)arg0 delegateQueueCompletionHandler:(id)arg1 ;
-(void)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 completionHandler:(id)arg2 ;
-(void)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 delegateQueueCompletionHandler:(id)arg2 ;
-(void)createSessionIDAliasWithSalt:(id)arg0 delegateQueueCompletionHandler:(id)arg1 ;
-(void)daemonDisconnected;
-(void)dealloc;
-(void)getParticipantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 completionHandler:(id)arg2 ;
-(void)getParticipantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 delegateQueueCompletionHandler:(id)arg2 ;
-(void)groupSessionDidTerminate:(id)arg0 ;
-(void)groupSessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)invalidate;
-(void)joinWithOptions:(id)arg0 ;
-(void)leaveGroupSession;
-(void)manageDesignatedMembers:(id)arg0 withType:(unsigned short)arg1 ;
-(void)participantUpdatedForSession:(id)arg0 ;
-(void)reconnectUPlusOneSession;
-(void)registerPluginWithOptions:(id)arg0 ;
-(void)removeParticipantIDs:(id)arg0 ;
-(void)requestActiveParticipants;
-(void)requestDataCryptorForTopic:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEncryptionKeyForParticipants:(id)arg0 ;
-(void)session:(id)arg0 didCreateParticipantIDAlias:(NSUInteger)arg1 forParticipantID:(NSUInteger)arg2 salt:(id)arg3 ;
-(void)session:(id)arg0 didReceiveActiveLightweightParticipants:(id)arg1 success:(BOOL)arg2 ;
-(void)session:(id)arg0 didReceiveActiveParticipants:(id)arg1 success:(BOOL)arg2 ;
-(void)session:(id)arg0 didReceiveBlockedParticipantIDs:(id)arg1 withCode:(unsigned int)arg2 withType:(unsigned short)arg3 isTruncated:(BOOL)arg4 ;
-(void)session:(id)arg0 didReceiveKeyMaterial:(id)arg1 ;
-(void)session:(id)arg0 didReceiveParticipantID:(NSUInteger)arg1 forParticipantIDAlias:(NSUInteger)arg2 salt:(id)arg3 ;
-(void)session:(id)arg0 didReceivePluginAllocationInfo:(id)arg1 ;
-(void)session:(id)arg0 didReceiveQueryBlockedParticipantIDs:(id)arg1 withCode:(unsigned int)arg2 isTruncated:(BOOL)arg3 ;
-(void)session:(id)arg0 didReceiveReport:(id)arg1 ;
-(void)session:(id)arg0 didRegisterPluginAllocationInfo:(id)arg1 ;
-(void)session:(id)arg0 didRemoveParticipantIDs:(id)arg1 withCode:(unsigned int)arg2 isTruncated:(BOOL)arg3 ;
-(void)session:(id)arg0 didUnregisterPluginAllocationInfo:(id)arg1 ;
-(void)session:(id)arg0 hasOutdatedSKI:(id)arg1 ;
-(void)session:(id)arg0 participantDidJoinGroupWithInfo:(id)arg1 ;
-(void)session:(id)arg0 participantDidLeaveGroupWithInfo:(id)arg1 ;
-(void)session:(id)arg0 shouldInvalidateKeyMaterialByKeyIndexes:(id)arg1 ;
-(void)sessionDidJoinGroup:(id)arg0 participantInfo:(id)arg1 error:(id)arg2 ;
-(void)sessionDidJoinGroup:(id)arg0 participantUpdateDictionary:(id)arg1 error:(id)arg2 ;
-(void)sessionDidJoinGroup:(id)arg0 participantsInfo:(id)arg1 error:(id)arg2 ;
-(void)sessionDidLeaveGroup:(id)arg0 error:(id)arg1 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setKeyMaterialCache:(id)arg0 ;
-(void)setParticipantInfo:(id)arg0 ;
-(void)setPreferences:(id)arg0 ;
-(void)unregisterPluginWithOptions:(id)arg0 ;
-(void)updateMembers:(id)arg0 withContext:(id)arg1 messagingCapabilities:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(void)updateMembers:(id)arg0 withContext:(id)arg1 triggeredLocally:(BOOL)arg2 ;
-(void)updateParticipantData:(id)arg0 withContext:(id)arg1 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif