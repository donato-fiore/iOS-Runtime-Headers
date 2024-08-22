// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCHAT_H
#define IMDCHAT_H

@class NSRecursiveLock, NSString, NSDictionary, NSArray, IMMessageItem, NSMutableDictionary, NSDate;
@protocol INSpeakable, IMDaemonListenerChatProtocol;

#import <Foundation/Foundation.h>

#import "IMDAccount.h"
#import "IMDService.h"
#import "IMDServiceSession.h"

@interface IMDChat : NSObject <INSpeakable>

 {
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_engramID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSString *_lastAddressedSIMID;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    NSInteger _state;
    NSUInteger _unreadCount;
    NSInteger _rowID;
    NSInteger _cloudKitSyncState;
    NSString *_originalGroupID;
    NSString *_serverChangeToken;
    NSInteger _lastReadMessageTimeStamp;
    NSInteger _lastMessageTimeStampOnLoad;
    unsigned char _style;
    BOOL _isArchived;
    NSInteger _isFiltered;
    BOOL _isBlackholed;
    BOOL _hasHadSuccessfulQuery;
    NSInteger _autoDonationBehavior;
    NSDate *_autoDonationBehaviorLastModificationDate;
}


@property (readonly, retain) IMDAccount *account;
@property (copy) NSString *accountID;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly, nonatomic) NSInteger autoDonationBehavior;
@property (readonly, nonatomic) NSDate *autoDonationBehaviorLastModificationDate;
@property (readonly, nonatomic) NSObject<IMDaemonListenerChatProtocol> *broadcaster;
@property (copy) NSString *chatIdentifier;
@property (readonly, retain) NSDictionary *chatProperties;
@property (copy) NSString *cloudKitRecordID; // ivar: _cloudKitRecordID
@property NSInteger cloudKitSyncState;
@property BOOL createEngramGroupOnMessageSend; // ivar: _createEngramGroupOnMessageSend
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIndependentID;
@property (readonly, retain) NSDictionary *dictionaryRepresentation;
@property (copy) NSString *displayName;
@property (copy, setter=setEngramID:) NSString *engramID;
@property (copy, setter=setGroupID:) NSString *groupID;
@property (copy) NSString *guid;
@property BOOL hasHadSuccessfulQuery;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) BOOL isArchived;
@property BOOL isBlackholed;
@property NSInteger isFiltered;
@property (readonly, nonatomic) BOOL isUnnamedChat;
@property (copy) NSString *lastAddressedLocalHandle;
@property (copy) NSString *lastAddressedSIMID;
@property (retain) IMMessageItem *lastMessage;
@property NSInteger lastMessageTimeStampOnLoad;
@property (nonatomic) NSInteger lastReadMessageTimeStamp;
@property (readonly, copy) NSString *lastSeenMessageGuid; // ivar: _lastSeenMessageGuid
@property (retain, nonatomic) NSDate *lastTUConversationCreatedDate;
@property BOOL meCardUpdated; // ivar: _meCardUpdated
@property (readonly, nonatomic) NSDictionary *nicknamesForParticipants; // ivar: _nicknamesForParticipants
@property NSUInteger numMessagesSent; // ivar: _numMessagesSent
@property (readonly, copy) NSString *originalGroupID;
@property (copy) NSArray *participants;
@property BOOL pendingENGroupParticipantUpdate; // ivar: _pendingENGroupParticipantUpdate
@property (readonly, nonatomic) NSString *persistentID;
@property (readonly, nonatomic) NSString *personCentricID;
@property (readonly, nonatomic) NSString *pinningIdentifier;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (retain) NSDictionary *properties;
@property (copy) NSString *roomName;
@property (setter=_setRowID:) NSInteger rowID;
@property (copy, nonatomic) NSString *serverChangeToken;
@property (readonly, retain) IMDService *service;
@property (copy) NSString *serviceName;
@property (readonly, retain) IMDServiceSession *serviceSession;
@property (readonly, nonatomic) NSString *spokenPhrase;
@property NSInteger state;
@property unsigned char style;
@property (readonly) Class superclass;
@property (setter=_setUnreadCount:) NSUInteger unreadCount;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property BOOL wasReportedAsJunk; // ivar: _wasReportedAsJunk


+(id)_recordType;
+(id)chatWithCKRecord:(id)arg0 ;
-(BOOL)_addGroupPhotoToCKRecord:(id)arg0 ;
-(BOOL)applyChangesUsingCKRecord:(id)arg0 ;
-(BOOL)isBusinessChat;
-(BOOL)isEmergencyChat;
-(BOOL)isGroupChat;
-(BOOL)isNewerThan:(id)arg0 ;
-(BOOL)isOlderThan:(id)arg0 ;
-(BOOL)isSMS;
-(BOOL)isSMSSpam;
-(BOOL)isiMessageSpam;
-(BOOL)receivedBlackholeError;
-(BOOL)removeParticipant:(id)arg0 ;
-(BOOL)removeParticipants:(id)arg0 ;
-(BOOL)updateDonationStateWithSyndicationAction:(id)arg0 ;
-(NSInteger)compareBySequenceNumberAndDateDescending:(id)arg0 ;
-(NSInteger)engroupCreationDate;
-(NSUInteger)powerLogConversationType;
-(id)_chatRegistry;
-(id)_ckUniqueID;
-(id)_copyCKRecordFromExistingCKMetadataWithZoneID:(id)arg0 salt:(id)arg1 ;
-(id)_findChatParticipantsWithFromID:(id)arg0 ;
-(id)_mergeParticipantIDs;
-(id)_sortedParticipantIDHashForParticipants:(id)arg0 ;
-(id)_sortedParticipantIDHashForParticipants:(id)arg0 usesPersonCentricID:(BOOL)arg1 ;
-(id)cloudKitChatID;
-(id)cloudKitDebugDescription;
-(id)copyCKRecordRepresentationWithZoneID:(id)arg0 salt:(id)arg1 ;
-(id)copyDictionaryRepresentation:(BOOL)arg0 ;
-(id)generateNewGroupID;
-(id)groupPhotoGuid;
-(id)groupPhotoUploadFailureCount;
-(id)initWithAccountID:(id)arg0 service:(id)arg1 guid:(id)arg2 groupID:(id)arg3 chatIdentifier:(id)arg4 participants:(id)arg5 roomName:(id)arg6 displayName:(id)arg7 lastAddressedLocalHandle:(id)arg8 lastAddressedSIMID:(id)arg9 properties:(id)arg10 state:(NSInteger)arg11 style:(unsigned char)arg12 isFiltered:(NSInteger)arg13 hasHadSuccessfulQuery:(BOOL)arg14 engramID:(id)arg15 serverChangeToken:(id)arg16 cloudKitSyncState:(NSInteger)arg17 originalGroupID:(id)arg18 lastReadMessageTimeStamp:(NSInteger)arg19 lastMessageTimeStampOnLoad:(NSInteger)arg20 cloudKitRecordID:(id)arg21 isBlackholed:(BOOL)arg22 autoDonationBehavior:(NSInteger)arg23 autoDonationBehaviorLastModificationDate:(id)arg24 ;
-(id)lastSeenMessageGUID;
-(id)lastSentMessageDate;
-(id)lastTranslatableMessageGUIDWithLanguageCode:(id)arg0 ;
-(id)participantHandles;
-(id)recordName;
-(int)getNumberOfTimesRespondedToThread;
-(int)messageHandshakeState;
-(int)smsHandshakeState;
-(void)_convergeGroupChatIfNeededWithServiceSession:(id)arg0 account:(id)arg1 groupID:(id)arg2 incomingParticipants:(id)arg3 fromIdentifier:(id)arg4 toIdentifier:(id)arg5 receivedGroupParticipantVersion:(id)arg6 receivedGroupProtocolVersion:(id)arg7 messageTimeStamp:(id)arg8 groupPhotoCreationTime:(id)arg9 ;
-(void)_incrementParticipantVersion;
-(void)_modifyGroupWithServiceSession:(id)arg0 groupID:(id)arg1 toParticipants:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 account:(id)arg5 messageTimeStamp:(id)arg6 ;
-(void)_persistMergedIDMergedChatsIfNeeded:(id)arg0 ;
-(void)_setParticipantVersion:(NSInteger)arg0 ;
-(void)_updateCachedParticipants;
-(void)_updateLastMessage:(id)arg0 ;
-(void)addParticipant:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)dealloc;
-(void)meCardHasUpdated;
-(void)recoverParticipantsIfNeeded;
-(void)resetCKSyncState;
-(void)setLastSentMessageDate:(id)arg0 ;
-(void)storeAndBroadcastChatChanges;
-(void)tearDownToneNotificationSessionIfNeeded;
-(void)updateCloudKitRecordID:(id)arg0 ;
-(void)updateCloudKitSyncState:(NSInteger)arg0 ;
-(void)updateCollaborationMetadata:(id)arg0 forMessageGUID:(id)arg1 ;
-(void)updateDisplayName:(id)arg0 ;
-(void)updateDisplayName:(id)arg0 sender:(id)arg1 ;
-(void)updateEngramID:(id)arg0 ;
-(void)updateEngroupCreationDate:(NSInteger)arg0 ;
-(void)updateGroupID:(id)arg0 ;
-(void)updateGroupPhotoGuid:(id)arg0 ;
-(void)updateGroupPhotoUploadFailureCount:(id)arg0 ;
-(void)updateHasHadSuccessfulQuery:(BOOL)arg0 ;
-(void)updateIsBlackholed:(BOOL)arg0 ;
-(void)updateIsEmergencyChat:(BOOL)arg0 ;
-(void)updateIsFiltered:(NSInteger)arg0 ;
-(void)updateIsiMessageSpam:(BOOL)arg0 ;
-(void)updateLastAddressedHandle:(id)arg0 ;
-(void)updateLastAddressedHandle:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)updateLastAddressedSIMID:(id)arg0 ;
-(void)updateLastMessageGUID:(id)arg0 forLanguageCode:(id)arg1 ;
-(void)updateLastReadMessageTimeStampIfNeeded:(NSInteger)arg0 ;
-(void)updateLastSeenMessageGuidIfNeeded:(id)arg0 ;
-(void)updateMessageHandshakeState:(int)arg0 ;
-(void)updateNicknamesForParticipants:(id)arg0 ;
-(void)updateNumberOfTimesRespondedToThread;
-(void)updateOriginalGroupID:(id)arg0 ;
-(void)updateProperties:(id)arg0 ;
-(void)updateReceivedBlackholeError:(BOOL)arg0 ;
-(void)updateSMSCategory:(NSInteger)arg0 subCategory:(NSInteger)arg1 ;
-(void)updateSMSHandshakeState:(int)arg0 ;
-(void)updateSMSSpamExtensionNameChatProperty:(id)arg0 ;
-(void)updateServerChangeToken:(id)arg0 ;
-(void)updateShouldForceToSMS:(BOOL)arg0 ;


@end


#endif