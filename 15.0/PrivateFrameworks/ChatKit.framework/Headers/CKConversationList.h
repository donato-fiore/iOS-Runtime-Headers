// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLIST_H
#define CKCONVERSATIONLIST_H

@class NSMutableArray, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CKConversation.h"
#import "CKConversationListScrollingController.h"

@interface CKConversationList : NSObject {
    NSMutableArray *_trackedConversations;
}


@property (readonly, nonatomic) NSArray *conversations;
@property (retain, nonatomic) NSMutableDictionary *conversationsDictionary; // ivar: _conversationsDictionary
@property (readonly, nonatomic) BOOL hasActiveConversations;
@property (nonatomic, getter=isHoldingWasKnownSenderUpdates) BOOL holdingWasKnownSenderUpdates; // ivar: _holdingWasKnownSenderUpdates
@property (readonly, nonatomic) BOOL loadedConversations; // ivar: _loadedConversations
@property (nonatomic) BOOL loadedPinnedConversations; // ivar: _loadedPinnedConversations
@property (readonly, nonatomic) BOOL loadingConversations; // ivar: _loadingConversations
@property (retain, nonatomic) CKConversation *pendingConversation; // ivar: _pendingConversation
@property (retain, nonatomic) NSArray *pinnedConversations; // ivar: _pinnedConversations
@property (nonatomic) BOOL remergingConversations; // ivar: _remergingConversations
@property (readonly, nonatomic) CKConversationListScrollingController *scrollingController; // ivar: _scrollingController
@property (readonly, nonatomic) NSArray *trackedConversations;


+(id)conversationListAlertSuppressionContextForFilterMode:(NSUInteger)arg0 ;
+(id)numberForFilterMode:(NSUInteger)arg0 ;
+(id)sharedConversationList;
+(id)stringForFilterMode:(NSUInteger)arg0 ;
+(void)_handleRegistryDidLoadNotification:(id)arg0 ;
+(void)initialize;
-(BOOL)_isUnreadChat:(id)arg0 ignoringMessages:(id)arg1 ;
-(BOOL)_messageSpamFilteringEnabled;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_shouldBailBeginTrackingForCurrentProcess;
-(BOOL)_shouldFilterForParticipants:(id)arg0 ;
-(NSInteger)unreadCountForFilterMode:(NSUInteger)arg0 ;
-(NSInteger)unreadFilteredConversationCountIgnoringMessages:(id)arg0 ;
-(NSUInteger)filterModeForConversation:(id)arg0 ;
-(id)_alreadyTrackedConversationForChat:(id)arg0 ;
-(id)_beginTrackingConversationWithChatIndirect:(id)arg0 ;
-(id)_conversationForChat:(id)arg0 ;
-(id)_copyEntitiesForAddressStrings:(id)arg0 ;
-(id)_testingTrackedConversations;
-(id)conversationForExistingChat:(id)arg0 ;
-(id)conversationForExistingChatWithChatIdentifier:(id)arg0 ;
-(id)conversationForExistingChatWithDeviceIndependentID:(id)arg0 ;
-(id)conversationForExistingChatWithGUID:(id)arg0 ;
-(id)conversationForExistingChatWithGroupID:(id)arg0 ;
-(id)conversationForExistingChatWithPersonCentricID:(id)arg0 ;
-(id)conversationForExistingChatWithPinningIdentifier:(id)arg0 ;
-(id)conversationForHandles:(id)arg0 displayName:(id)arg1 joinedChatsOnly:(BOOL)arg2 create:(BOOL)arg3 ;
-(id)conversationForHandles:(id)arg0 displayName:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 joinedChatsOnly:(BOOL)arg4 create:(BOOL)arg5 ;
-(id)conversationsForFilterMode:(NSUInteger)arg0 ;
-(id)description;
-(id)firstUnreadFilteredConversationIgnoringMessages:(id)arg0 ;
-(id)init;
-(id)pinningIdentifierMap;
-(id)topMostConversation;
-(id)unreadLastMessages;
-(void)_abChanged:(id)arg0 ;
-(void)_abPartialChanged:(id)arg0 ;
-(void)_beginTrackingAllExistingChatsIfNeeded;
-(void)_beginTrackingConversationWithChat:(id)arg0 completion:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_chatPropertiesChanged:(id)arg0 ;
-(void)_handleChatJoinStateDidChange:(id)arg0 ;
-(void)_handleChatParticipantsDidChange:(id)arg0 ;
-(void)_handleChatsDidRemergeNotification:(id)arg0 ;
-(void)_handleChatsWillRemergeNotification:(id)arg0 ;
-(void)_handleEngroupFinishedUpdating:(id)arg0 ;
-(void)_handleGroupNameChanged:(id)arg0 ;
-(void)_handleGroupPhotoChanged:(id)arg0 ;
-(void)_handleMemoryWarning:(id)arg0 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg0 ;
-(void)_handleRegistryDidRegisterChatNotification:(id)arg0 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg0 ;
-(void)_invalidateABCaches:(id)arg0 ;
-(void)_invalidatePartialABCaches:(id)arg0 ;
-(void)_postConversationListChangedNotification;
-(void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg0 ;
-(void)beginTrackingConversation:(id)arg0 forChat:(id)arg1 ;
-(void)beginWasKnownSenderHold;
-(void)deleteConversation:(id)arg0 ;
-(void)deleteConversations:(id)arg0 ;
-(void)logConversationsTopCount:(NSInteger)arg0 bottomCount:(NSInteger)arg1 ;
-(void)postFinishedInitalPinLoadIfNecessary;
-(void)releaseWasKnownSenderHold;
-(void)removeConversation:(id)arg0 ;
-(void)resetCaches;
-(void)resort;
-(void)setNeedsReload;
-(void)stopTrackingConversation:(id)arg0 ;
-(void)unpendConversation;
-(void)updateConversationFilteredFlagsAndReportSpam;
-(void)updateConversationListsAndSortIfEnabled;
-(void)updateConversationsForNewPinnedConversations:(id)arg0 ;
-(void)updateConversationsWasKnownSender;
-(void)updatePinnedConversationsFromDataSource;


@end


#endif