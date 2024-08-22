// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FKFRIENDSMANAGER_H
#define FKFRIENDSMANAGER_H

@class NSString, NSMutableArray, NPSManager, NSTimer, NSHashTable, NSMapTable, NSMutableSet, NSArray, NSMutableDictionary, IDSBatchIDQueryController;
@protocol FKFriendGroupDelegate, IDSBatchIDQueryControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FKDelayedOperation.h"

@interface FKFriendsManager : NSObject <FKFriendGroupDelegate, IDSBatchIDQueryControllerDelegate>

 {
    NSString *_domain;
    NSUInteger _maxFriendGroups;
    NSUInteger _maxFriendsPerGroup;
    BOOL _shouldAddEmptyTrailingGroup;
    *__CFString _friendsChangedExternallyNotificationName;
    *__CFString _friendGroupTitleChangedExternallyNotificationName;
    BOOL _shouldDeduplicateFriendList;
    BOOL _shouldRemoveDestinationlessFriends;
    NSMutableArray *_friendList;
    NSMutableArray *_friendGroups;
    NPSManager *_npsManager;
    NSTimer *_addressBookRefreshTimer;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSObject<OS_dispatch_queue> *_changeLogQueue;
    NSUInteger _postCount;
    NSHashTable *_sourcedPersons;
    NSMapTable *_identifiersToPersonMap;
    BOOL _needsFriendListSync;
    BOOL _needsAddressBookRefresh;
    BOOL _didCompleteInitialLoading;
    NSMutableSet *_highPriorityDestinations;
    NSArray *_pendingDestinations;
    NSMutableDictionary *_cachedStatuses;
    NSTimer *_idsQueryTimeoutTimer;
    IDSBatchIDQueryController *_queryController;
}


@property (retain, nonatomic) NSMutableDictionary *changeLog; // ivar: _changeLog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=didLastLoadHaveChanges) BOOL lastLoadHadChanges; // ivar: _lastLoadHadChanges
@property (nonatomic, getter=isRefreshAgainstContactsEnabled) BOOL refreshAgainstContactsEnabled; // ivar: _refreshAgainstContactsEnabled
@property (retain, nonatomic) FKDelayedOperation *saveOperation; // ivar: _saveOperation
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)collapseChangeLogsIntoChangeLog:(id)arg0 ;
+(id)managerForDomain:(id)arg0 ;
+(void)setEnableEmptyTrailingGroup:(BOOL)arg0 domain:(id)arg1 ;
+(void)setFriendGroupTitleChangedExternallyNotificationName:(id)arg0 domain:(id)arg1 ;
+(void)setFriendsChangedExternallyNotificationName:(id)arg0 domain:(id)arg1 ;
+(void)setGroupSize:(NSUInteger)arg0 domain:(id)arg1 ;
+(void)setMaxGroupCount:(NSUInteger)arg0 domain:(id)arg1 ;
+(void)setRefreshAgainstContactsOnInitEnabled:(BOOL)arg0 domain:(id)arg1 ;
-(BOOL)_addressBookSequenceNumberDidChange;
-(BOOL)_canAddFriendGroup;
-(BOOL)_shouldAddEmptyGroup;
-(BOOL)_shouldBypassDestinationStatusCheck;
-(BOOL)addFriend:(id)arg0 ;
-(BOOL)canAddFriend;
-(BOOL)containsFriendWithABRecordGUID:(id)arg0 ;
-(BOOL)isPersonFriend:(id)arg0 ;
-(BOOL)refreshAgainstAddressBook;
-(BOOL)shouldAllowAddingContact:(id)arg0 withContactStore:(id)arg1 personValueCache:(id)arg2 ;
-(NSInteger)_compareStatus:(NSInteger)arg0 toStatus:(NSInteger)arg1 ;
-(NSInteger)_firstEmptyPosition;
-(NSInteger)statusForPerson:(id)arg0 requery:(BOOL)arg1 ;
-(NSUInteger)_indexForPosition:(NSUInteger)arg0 inGroup:(id)arg1 ;
-(NSUInteger)_numberOfFriendsInList:(id)arg0 ;
-(NSUInteger)groupIndexContainingFriend:(id)arg0 ;
-(NSUInteger)positionOfFriendInGroup:(id)arg0 ;
-(id)_curatedFriendList;
-(id)_destinations;
-(id)_friendAtPosition:(NSUInteger)arg0 ;
-(id)allPeople;
-(id)friendGroups;
-(id)initWithDomain:(id)arg0 ;
-(id)personLikePerson:(id)arg0 ;
-(id)personWithABRecordGUID:(id)arg0 ;
-(id)personWithDestinations:(id)arg0 ;
-(id)reachableDestinationsForPerson:(id)arg0 ;
-(int)_lastKnownAddressBookSequenceNumber;
-(struct __CFString *)_notificationForExternalListChange;
-(void)_addCuratedFriends:(id)arg0 ;
-(void)_addEmptyGroup;
-(void)_addEntryToChangeLogForPerson:(id)arg0 changeType:(id)arg1 ;
-(void)_addPersonToIdentifiersToPersonMap:(id)arg0 ;
-(void)_addressBookChanged:(id)arg0 ;
-(void)_aggdLogFriendCount;
-(void)_aggdLogFriendGroupCount;
-(void)_aggdSetValue:(NSInteger)arg0 forScalarKey:(struct __CFString *)arg1 ;
-(void)_cleanUpFriendListIfNecessary;
-(void)_createAddressToPersonDictionary;
-(void)_createEmptyFriendList;
-(void)_deduplicateFriendListIfNecessary;
-(void)_friendsChangedExternally;
-(void)_groupTitleChangedExternally;
-(void)_idsQueryTimeoutTimerFired;
-(void)_incrementExternalChangePostCount;
-(void)_initiateIDSDestinationStatusQuery:(id)arg0 ;
-(void)_loadFriendList;
-(void)_loadGroupTitles;
-(void)_personValuesChanged:(id)arg0 ;
-(void)_postChangeNotificationIfNecessary;
-(void)_postGroupListChangedNotification;
-(void)_queryDestinations:(id)arg0 ;
-(void)_removeDestinationlessFriendsIfNecessary;
-(void)_removeFriendsAtIndices:(id)arg0 ;
-(void)_removeGroupAtIndex:(NSUInteger)arg0 ;
-(void)_removePersonFromIdentifiersToPersonMap:(id)arg0 ;
-(void)_save;
-(void)_setupQueryController;
-(void)_startIDSQueryTimeoutTimer;
-(void)_stopIDSQueryTimeoutTimer;
-(void)_storeSourcedPerson:(id)arg0 ;
-(void)_updateFriendGroups;
-(void)_updateFriends:(id)arg0 ;
-(void)_updateLastKnownAddressBookSequenceNumber:(int)arg0 ;
-(void)dealloc;
-(void)friendGroup:(id)arg0 didMoveFriends:(id)arg1 ;
-(void)friendGroup:(id)arg0 didRemoveFriend:(id)arg1 atPosition:(NSUInteger)arg2 ;
-(void)friendGroup:(id)arg0 didSetFriend:(id)arg1 atPosition:(NSUInteger)arg2 ;
-(void)idStatusUpdatedForDestinations:(id)arg0 ;
-(void)markFriendListAsNormalized;
-(void)purgeEmptyFriendGroups;
-(void)refreshDestinationStatuses;
-(void)reloadFriendList;
-(void)save;
-(void)saveFriendGroupTitles;
-(void)syncFriendGroup:(id)arg0 ;


@end


#endif