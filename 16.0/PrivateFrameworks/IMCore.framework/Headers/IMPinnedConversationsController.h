// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPINNEDCONVERSATIONSCONTROLLER_H
#define IMPINNEDCONVERSATIONSCONTROLLER_H

@class NSDictionary, NSUbiquitousKeyValueStore, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface IMPinnedConversationsController : NSObject

@property (retain, nonatomic) NSDictionary *chatMetadata; // ivar: _chatMetadata
@property (retain, nonatomic) NSUbiquitousKeyValueStore *dataStore; // ivar: _dataStore
@property (nonatomic) BOOL hasCompletedInitialization; // ivar: _hasCompletedInitialization
@property (nonatomic) BOOL hasDefferedPinnedConversationsDidChangeNotification; // ivar: _hasDefferedPinnedConversationsDidChangeNotification
@property (nonatomic) NSInteger numberOfPendingForceSyncs; // ivar: _numberOfPendingForceSyncs
@property (retain, nonatomic) NSOrderedSet *pinnedConversationIdentifierSet; // ivar: _pinnedConversationIdentifierSet


+(BOOL)processSupportsPinnedConversations;
+(NSInteger)currentPinConfigurationRevision;
+(NSInteger)currentPinConfigurationVersion;
+(NSUInteger)maximumNumberOfPinnedConversations;
+(id)_forceSyncDispatchQueue;
+(id)_ubiquitousDispatchQueue;
+(id)pinConfigurationMigrationKey;
+(id)requiredKeys;
+(id)sharedInstance;
-(BOOL)_updateLocalStoreWithPinConfiguration:(id)arg0 ;
-(BOOL)pinConfigurationHasCompatibleVersion:(id)arg0 ;
-(BOOL)pinConfigurationHasCurrentVersion:(id)arg0 ;
-(BOOL)pinConfigurationIsValid:(id)arg0 ;
-(BOOL)pinnedConversationsContainsChat:(id)arg0 ;
-(BOOL)shouldSync;
-(BOOL)shouldUpdateExistingPinConfig:(id)arg0 withProposedPinConfig:(id)arg1 ;
-(BOOL)shouldWriteProposedPinConfiguration:(id)arg0 toUbiquitousStoreWithExistingPinConfiguration:(id)arg1 ;
-(NSUInteger)pinIndexForChat:(id)arg0 inIdentifierSet:(id)arg1 withMetadata:(id)arg2 ;
-(id)_dictionaryWithPinnedConversationIdentifiers:(id)arg0 chatMetadata:(id)arg1 updateReason:(id)arg2 timestamp:(id)arg3 ;
-(id)_locallyStoredPinConfiguration;
-(id)_metadataDictionaryForChat:(id)arg0 ;
-(id)_ubiquitousPinConfigurationInStore:(id)arg0 ;
-(id)chatMetadataFromPinConfiguration:(id)arg0 ;
-(id)dictionaryWithPinnedConversationIdentifiers:(id)arg0 chatMetadata:(id)arg1 updateReason:(id)arg2 ;
-(id)init;
-(id)matchingIdentifierForChat:(id)arg0 ;
-(id)matchingIdentifierForChat:(id)arg0 inIdentifierSet:(id)arg1 withMetadata:(id)arg2 ;
-(id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)arg0 toOtherPinConfiguration:(id)arg1 ;
-(id)pinnedConversationIdentifiers;
-(id)pinnedConversationIdentifiersFromPinConfiguration:(id)arg0 ;
-(id)validatedPinConfigurationWithCurrentVersionForPinConfiguration:(id)arg0 ;
-(void)_fetchUbiquitousPinConfiguration:(id)arg0 ;
-(void)_handleChatGroupIDDidChangeNotification:(id)arg0 ;
-(void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
-(void)_postPinnedConversationsDidChangeNotification;
-(void)_setPinnedConversationIdentifiers:(id)arg0 withChatMetadata:(id)arg1 updateReason:(id)arg2 shouldUpdateStores:(BOOL)arg3 ;
-(void)_updateUbiquitousStoreWithPinConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)conversationWasDeletedWithIdentifier:(id)arg0 ;
-(void)conversationsWereDeletedWithIdentifiers:(id)arg0 ;
-(void)fetchMostUpToDatePinConfiguration:(id)arg0 ;
-(void)fetchPinnedConversationIdentifiersFromLocalStore;
-(void)forceSynchronizeUbiquitousStore;
-(void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg0 ;
-(void)imCloudKitHooksSetEnabledDidReturn:(id)arg0 ;
-(void)performPinConfigValidationAndMigrationIfNecessary;
-(void)setPinnedChats:(id)arg0 withUpdateReason:(id)arg1 ;
-(void)synchronizeLocalDataStore;
-(void)updateStoresWithPinConfiguration:(id)arg0 ;


@end


#endif