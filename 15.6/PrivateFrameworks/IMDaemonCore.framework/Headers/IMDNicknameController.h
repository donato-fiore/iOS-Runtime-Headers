// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDNICKNAMECONTROLLER_H
#define IMDNICKNAMECONTROLLER_H

@class NSSet, NSMutableArray, NSMutableSet, IDSKVStore, NSMutableDictionary, IMNickname;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>


@interface IMDNicknameController : NSObject <IMSystemMonitorListener>



@property (readonly, nonatomic) NSSet *allowListedHandlesForSharing;
@property (retain, nonatomic) NSMutableArray *chatsToSendNicknameInfoTo; // ivar: _chatsToSendNicknameInfoTo
@property (readonly, nonatomic) NSSet *denyListedHandlesForSharing;
@property (retain, nonatomic) NSMutableSet *handleAllowList; // ivar: _handleAllowList
@property (retain, nonatomic) NSMutableSet *handleDenyList; // ivar: _handleDenyList
@property (retain, nonatomic) IDSKVStore *handleSharingKVStore; // ivar: _handleSharingKVStore
@property (retain, nonatomic) NSMutableDictionary *handledNicknames; // ivar: _handledNicknames
@property (retain, nonatomic) IDSKVStore *handledNicknamesKVStore; // ivar: _handledNicknamesKVStore
@property (retain, nonatomic) IDSKVStore *kvStore; // ivar: _kvStore
@property (nonatomic) CGFloat lastMeContactStoreSync; // ivar: _lastMeContactStoreSync
@property (nonatomic) BOOL needToLoadMapsInfoFromDisk; // ivar: _needToLoadMapsInfoFromDisk
@property (nonatomic) BOOL nicknameIsUploadingToCK; // ivar: _nicknameIsUploadingToCK
@property (retain, nonatomic) NSMutableDictionary *pendingNicknameUpdates; // ivar: _pendingNicknameUpdates
@property (retain, nonatomic) IDSKVStore *pendingNicknameUpdatesKVStore; // ivar: _pendingNicknameUpdatesKVStore
@property (retain, nonatomic) IMNickname *personalNickname; // ivar: _personalNickname


+(id)sharedInstance;
-(BOOL)_deviceUnderFirstUnlock;
-(BOOL)_isNicknamesSharingEnabled;
-(BOOL)_isUnderScrutiny;
-(BOOL)_nicknameFeatureEnabled;
-(BOOL)_populateNicknameDictionary:(id)arg0 forKVStore:(id)arg1 limitToLoad:(NSUInteger)arg2 ;
-(BOOL)_requestingToSendLocalNicknameInfo:(id)arg0 ;
-(BOOL)_sendMessageDictionary:(id)arg0 toDevice:(id)arg1 ;
-(BOOL)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)arg0 nickname:(id)arg1 ;
-(NSUInteger)_reuploadLocalProfileVersionNumber;
-(id)_getPendingNicknameForUpload;
-(id)allNicknames;
-(id)defaults;
-(id)init;
-(id)messageDictionaryWithPersonalRecordIDAndVersion;
-(id)nickNameDecryptionKey;
-(id)nickNameRecordID;
-(id)nicknameForHandle:(id)arg0 ;
-(id)nicknameForHandleURI:(id)arg0 ;
-(id)nicknameForRecordID:(id)arg0 ;
-(id)nicknameForRecordID:(id)arg0 handle:(id)arg1 ;
-(id)pendingPersonalNickname;
-(id)storedPersonalNickname;
-(id)substringRecordIDForNickname:(id)arg0 ;
-(id)transferServicesController;
-(void)NicknameWithRecordID:(id)arg0 URI:(id)arg1 decryptionKey:(id)arg2 withCompletionBlock:(id)arg3 ;
-(void)_beginNicknameUpload:(id)arg0 ;
-(void)_broadcastPendingMapChanged;
-(void)_ckAccountChanged:(id)arg0 ;
-(void)_clearSharingLists;
-(void)_deleteAvatarForNickname:(id)arg0 ;
-(void)_deleteDataUnderScrutiny;
-(void)_deleteHandleIDFromHandledMap:(id)arg0 ;
-(void)_deleteHandleIDFromPendingMap:(id)arg0 ;
-(void)_deleteNicknameFromPendingMap:(id)arg0 ;
-(void)_deletePendingNicknameForUpload;
-(void)_deletePublicNicknameLocationAndKey;
-(void)_endNicknameUpload;
-(void)_evaluateIfAccountHasMultiplePhoneNumbers;
-(void)_loadAllInfoFromDiskIfAble;
-(void)_makeAllNicknameContentsClassC;
-(void)_markNicknameAsUpdated:(id)arg0 incrementPendingNicknameVersion:(BOOL)arg1 ;
-(void)_markNicknameAsUpdatedForHandleID:(id)arg0 ;
-(void)_newDeviceDidSignIntoiMessageWithRetryCount:(NSUInteger)arg0 ;
-(void)_resetHandleSharingList;
-(void)_retryPeerRequestWithRetry:(NSUInteger)arg0 ;
-(void)_setUnderScrutiny:(BOOL)arg0 ;
-(void)_showDebugAlertWithHeader:(id)arg0 message:(id)arg1 ;
-(void)_storePendingNicknameForUpload:(id)arg0 ;
-(void)_storePublicNickname:(id)arg0 nicknameLocation:(id)arg1 encryptionKey:(id)arg2 ;
-(void)_syncHandleAllowDenyListToOtherDevices;
-(void)_tryToReuploadPersonalNicknameWithRetryCount:(NSUInteger)arg0 reuploadVersion:(NSUInteger)arg1 ;
-(void)_updateCloudKitRecordIDAndDecryptionKeyIfNeededFromMadridMessage:(id)arg0 ;
-(void)_updateDenyAllowListHandlesVersion;
-(void)_updateHandleDenyAllowListIfNeeded:(id)arg0 ;
-(void)_updateHandleList:(id)arg0 withHandles:(id)arg1 forKey:(id)arg2 broadcastUpdates:(BOOL)arg3 ;
-(void)_updateHandledNicknamesIfNeeded:(id)arg0 ;
-(void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)arg0 ;
-(void)_updateNicknameInHandledMap:(id)arg0 ;
-(void)_updatePendingNicknameVersion;
-(void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)arg0 ;
-(void)_uploadPendingNicknameIfNecessary;
-(void)_writeNicknameToKVStore:(id)arg0 nickname:(id)arg1 ;
-(void)addNicknameToPendingUpdates:(id)arg0 ;
-(void)aliasesDidChange:(BOOL)arg0 ;
-(void)allowHandlesForSharing:(id)arg0 onChatGUIDs:(id)arg1 ;
-(void)broadcastHandlesSharingNicknamesDidChange;
-(void)cleanUpNicknameForID:(id)arg0 ;
-(void)clearPendingNicknameForHandleID:(id)arg0 ;
-(void)currentPersonalNicknameWithRecordID:(id)arg0 decryptionKey:(id)arg1 completionBlock:(id)arg2 ;
-(void)currentPersonalNicknamewithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllPersonalNicknames:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)denyHandlesForSharing:(id)arg0 ;
-(void)deviceSignedOutOfiMessage;
-(void)evaluateAccountStateForFeatureEligibility;
-(void)getNicknameWithRecordID:(id)arg0 decryptionKey:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleNicknameUpdatesFromPeerDevice:(id)arg0 fromPeerDevice:(id)arg1 ;
-(void)ignorePendingNicknameForHandleID:(id)arg0 ;
-(void)loadHandledNicknamesAndPendingUpdates;
-(void)loadPersonalNicknameIfNeeded;
-(void)loadSharingHandlesPrefs;
-(void)markAllNicknamesAsPending;
-(void)markNicknameAsUpdated:(id)arg0 ;
-(void)newDeviceDidSignIntoiMessage;
-(void)queueChatToSendNicknamePostUploadIfNeeded:(id)arg0 ;
-(void)reuploadProfileIfNeeded;
-(void)saveNicknameForRecordID:(id)arg0 handleID:(id)arg1 userNickname:(id)arg2 ;
-(void)sendNicknamePreferencesDidChange;
-(void)sendPendingNicknameUpdatesDidChange;
-(void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)arg0 ;
-(void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
-(void)sendPersonalNicknameToChat:(id)arg0 ;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)arg0 forChat:(id)arg1 ;


@end


#endif