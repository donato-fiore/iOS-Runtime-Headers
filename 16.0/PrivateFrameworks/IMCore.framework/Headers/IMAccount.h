// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMACCOUNT_H
#define IMACCOUNT_H

@class NSString, NSDictionary, NSData, NSMutableDictionary, NSArray, NSMapTable, NSRecursiveLock, NSDate, NSAttributedString;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IMPeople.h"
#import "IMHandle.h"
#import "IMServiceImpl.h"

@interface IMAccount : NSObject <IMSystemMonitorListener>

 {
    NSString *_uniqueID;
    NSString *_displayName;
}


@property (readonly, nonatomic) BOOL _isUsableForSending;
@property (readonly, nonatomic) NSDictionary *_persistentProperties;
@property (retain, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) id *accountImage; // ivar: _accountImage
@property (retain, nonatomic) NSData *accountImageData; // ivar: _accountImageData
@property (retain, nonatomic) NSDictionary *accountPersistentProperties; // ivar: _accountPersistentProperties
@property (retain, nonatomic) NSMutableDictionary *accountPersistentPropertiesChanges; // ivar: _accountPersistentPropertiesChanges
@property (retain, nonatomic) NSDictionary *accountPreferences; // ivar: _accountPreferences
@property (retain, nonatomic) NSMutableDictionary *accountPreferencesChanges; // ivar: _accountPreferencesChanges
@property (retain, nonatomic) NSDictionary *accountSubtypeInfo; // ivar: _accountSubtypeInfo
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (retain, nonatomic) NSArray *aliases; // ivar: _aliases
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (retain, nonatomic) NSArray *allowList;
@property (readonly, nonatomic) BOOL allowsMMSRelay;
@property (readonly, nonatomic) BOOL allowsSMSRelay;
@property (nonatomic) BOOL allowsVCRelay;
@property (readonly, nonatomic) NSArray *arrayOfAllIMHandles;
@property (nonatomic) BOOL asleep; // ivar: _asleep
@property (readonly, nonatomic) NSString *authorizationID;
@property (readonly, nonatomic) NSString *authorizationToken;
@property (nonatomic) BOOL autoLogin;
@property (nonatomic) BOOL blockIdleStatus; // ivar: _blockIdleStatus
@property (retain, nonatomic) NSArray *blockList;
@property (nonatomic) BOOL blockOtherAddresses;
@property (readonly, nonatomic) unsigned int blockingMode;
@property (retain, nonatomic) IMPeople *buddyList; // ivar: _buddyList
@property (retain, nonatomic) NSArray *cachedAllowList; // ivar: _cachedAllowList
@property (retain, nonatomic) NSArray *cachedBlockList; // ivar: _cachedBlockList
@property (nonatomic) unsigned int cachedBlockingMode; // ivar: _cachedBlockingMode
@property (readonly, nonatomic) BOOL canActivate;
@property (readonly, nonatomic) BOOL canSendMessages;
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (nonatomic) int coalesceCount; // ivar: _coalesceCount
@property (retain, nonatomic) NSMutableDictionary *coalescedChanges; // ivar: _coalescedChanges
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSMutableDictionary *dataChanges; // ivar: _dataChanges
@property (nonatomic) NSUInteger defaultHandleCapabilities; // ivar: _defaultHandleCapabilities
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *emailDomains;
@property (nonatomic) BOOL goIdle;
@property (readonly, nonatomic) NSArray *groupList;
@property (retain, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) BOOL handlesChatInvites;
@property (nonatomic) BOOL hasBeenRemoved; // ivar: _hasBeenRemoved
@property (nonatomic) BOOL hasCheckedDefaultHandleCapabilities; // ivar: _hasCheckedDefaultHandleCapabilities
@property (readonly, nonatomic) BOOL hasCustomDescription;
@property (nonatomic) BOOL hasPostedOfflineNotification; // ivar: _hasPostedOfflineNotification
@property (nonatomic) BOOL hasReceivedSync; // ivar: _hasReceivedSync
@property (readonly, nonatomic) BOOL hasSyncedWithRemoteBuddies;
@property (readonly, nonatomic) BOOL hasTargetGroupStateBeenMet;
@property (nonatomic) BOOL iconChecked; // ivar: _iconChecked
@property (retain, nonatomic) NSMapTable *imHandles; // ivar: _imHandles
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSInteger invalidSettings;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isAsleep;
@property (readonly, nonatomic) BOOL isAwaitingTargetGroupState;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isOperational;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) BOOL isSMSRelayCapable;
@property (nonatomic) BOOL justLoggedIn; // ivar: _justLoggedIn
@property (retain, nonatomic) NSArray *lastReceivedGroupState; // ivar: _lastReceivedGroupState
@property (retain, nonatomic) NSMutableDictionary *localCache; // ivar: _localCache
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) NSString *login;
@property (retain, nonatomic) NSString *loginID; // ivar: _loginID
@property (retain, nonatomic) IMHandle *loginIMHandle; // ivar: _loginIMHandle
@property (nonatomic) NSUInteger loginStatus; // ivar: _loginStatus
@property (readonly, nonatomic) NSString *loginStatusMessage;
@property (readonly, nonatomic) BOOL makingChanges;
@property (readonly, nonatomic, getter=isMakoAccount) BOOL makoAccount;
@property (retain, nonatomic) NSDictionary *members; // ivar: _members
@property (retain, nonatomic) NSDate *myIdleSince; // ivar: _myIdleSince
@property (retain, nonatomic) NSDictionary *myNowPlaying; // ivar: _myNowPlaying
@property (readonly, nonatomic) NSString *myNowPlayingString;
@property (retain, nonatomic) NSData *myPictureData; // ivar: _myPictureData
@property (retain, nonatomic) NSAttributedString *myProfile; // ivar: _myProfile
@property (nonatomic) NSUInteger myStatus; // ivar: _myStatus
@property (retain, nonatomic) NSMutableDictionary *myStatusDictionary; // ivar: _myStatusDictionary
@property (retain, nonatomic) NSString *myStatusMessage; // ivar: _myStatusMessage
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needToCheckForWatchedIMHandles; // ivar: _needToCheckForWatchedIMHandles
@property (nonatomic) int numHolding; // ivar: _numHolding
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSInteger port;
@property (retain, nonatomic) NSDictionary *profile; // ivar: _profile
@property (retain, nonatomic) NSMutableDictionary *profileChanges; // ivar: _profileChanges
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (nonatomic) NSInteger profileStatus; // ivar: _profileStatus
@property (retain, nonatomic) NSDictionary *registrationAlertInfo; // ivar: _registrationAlertInfo
@property (readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property (nonatomic) NSInteger registrationFailureReason; // ivar: _registrationFailureReason
@property (nonatomic) NSInteger registrationStatus; // ivar: _registrationStatus
@property (readonly, nonatomic) NSString *server;
@property (weak, nonatomic) IMServiceImpl *service; // ivar: _service
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *shortName;
@property (retain, nonatomic) id *smallImage; // ivar: _smallImage
@property (retain, nonatomic) NSMutableDictionary *sortOrders; // ivar: _sortOrders
@property (retain, nonatomic) NSString *strippedLogin; // ivar: _strippedLogin
@property (readonly, nonatomic) BOOL supportsAuthorization;
@property (readonly, nonatomic) BOOL supportsRegistration;
@property (nonatomic) BOOL syncedWithRemoteBuddyList; // ivar: _syncedWithRemoteBuddyList
@property (retain, nonatomic) NSArray *targetGroupState; // ivar: _targetGroupState
@property (readonly, nonatomic) NSString *temporaryPassword;
@property (readonly, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL useMeCardName; // ivar: _useMeCardName
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, nonatomic) BOOL validLogin;
@property (readonly, nonatomic) BOOL validPort;
@property (readonly, nonatomic) BOOL validServer;
@property (retain, nonatomic) NSArray *vettedAliases; // ivar: _vettedAliases


+(id)_groupSummaryFromGroupList:(id)arg0 ;
+(id)allBuddyListIMHandles;
+(id)nameOfLoginStatus:(NSUInteger)arg0 ;
+(id)passwordForAccount:(id)arg0 forServiceName:(id)arg1 ;
+(id)temporaryPasswordForAccount:(id)arg0 forAuthID:(id)arg1 forServiceName:(id)arg2 ;
+(void)removePasswordForAccount:(id)arg0 forServiceName:(id)arg1 ;
+(void)removeTemporaryPasswordForAccount:(id)arg0 forServiceName:(id)arg1 ;
-(BOOL)_aliasIsVisible:(id)arg0 ;
-(BOOL)_updateDisplayName:(id)arg0 ;
-(BOOL)addAlias:(id)arg0 ;
-(BOOL)addAlias:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)addAliases:(id)arg0 ;
-(BOOL)addIMHandle:(id)arg0 toGroups:(id)arg1 atLocation:(NSInteger)arg2 ;
-(BOOL)addPeople:(id)arg0 toGroups:(id)arg1 atLocation:(NSInteger)arg2 ;
-(BOOL)authenticateAccount;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForPreferenceKey:(id)arg0 ;
-(BOOL)emailAddressIsID:(id)arg0 ;
-(BOOL)equalID:(id)arg0 andID:(id)arg1 ;
-(BOOL)hasAlias:(id)arg0 ;
-(BOOL)hasAlias:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)hasCapability:(NSUInteger)arg0 ;
-(BOOL)registerAccount;
-(BOOL)removeAlias:(id)arg0 ;
-(BOOL)removeAlias:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)removeAliases:(id)arg0 ;
-(BOOL)removeIMHandle:(id)arg0 fromGroups:(id)arg1 ;
-(BOOL)removePeople:(id)arg0 fromGroups:(id)arg1 ;
-(BOOL)removeProfileValueForKey:(id)arg0 ;
-(BOOL)requestNewAuthorizationCredentials;
-(BOOL)unregisterAccount;
-(BOOL)unvalidateAlias:(id)arg0 ;
-(BOOL)unvalidateAliases:(id)arg0 ;
-(BOOL)updateAuthorizationCredentials:(id)arg0 token:(id)arg1 ;
-(BOOL)validateAlias:(id)arg0 ;
-(BOOL)validateAlias:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)validateAliases:(id)arg0 ;
-(BOOL)validateProfile;
-(Class)imHandleClass;
-(NSInteger)compareAccountNames:(id)arg0 ;
-(NSInteger)compareIDs:(id)arg0 ;
-(NSInteger)compareLoginStatus:(id)arg0 ;
-(NSInteger)compareNames:(id)arg0 ;
-(NSInteger)compareServices:(id)arg0 ;
-(NSInteger)compareStatus:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSInteger)typeForAlias:(id)arg0 ;
-(NSInteger)validationErrorReasonForAlias:(id)arg0 ;
-(NSInteger)validationErrorReasonForAlias:(id)arg0 type:(NSInteger)arg1 ;
-(NSInteger)validationStatusForAlias:(id)arg0 ;
-(NSInteger)validationStatusForAlias:(id)arg0 type:(NSInteger)arg1 ;
-(NSUInteger)sortOrderForIMHandle:(id)arg0 inGroup:(id)arg1 ;
-(id)_aliasInfoForAlias:(id)arg0 ;
-(id)_imHandleWithID:(id)arg0 alreadyCanonical:(BOOL)arg1 originalID:(id)arg2 countryCode:(id)arg3 ;
-(id)_persistentPropertyForKey:(id)arg0 ;
-(id)_serverWithSSL:(BOOL)arg0 ;
-(id)_statuses;
-(id)aliasesForType:(NSInteger)arg0 ;
-(id)canonicalFormOfID:(id)arg0 ;
-(id)canonicalFormOfID:(id)arg0 countryCode:(id)arg1 ;
-(id)chatIDForRoomName:(id)arg0 ;
-(id)defaultChatSuffix;
-(id)description;
-(id)dictionaryDataForKey:(id)arg0 ;
-(id)dictionaryDataForPreferenceKey:(id)arg0 ;
-(id)existingIMHandleWithID:(id)arg0 ;
-(id)existingIMHandleWithID:(id)arg0 alreadyCanonical:(BOOL)arg1 ;
-(id)existingIMHandleWithID:(id)arg0 countryCode:(id)arg1 ;
-(id)existingIMHandleWithInfo:(id)arg0 ;
-(id)existingIMHandleWithInfo:(id)arg0 alreadyCanonical:(BOOL)arg1 ;
-(id)groupMembers:(id)arg0 ;
-(id)handlesForCNContact:(id)arg0 ;
-(id)imHandleWithID:(id)arg0 ;
-(id)imHandleWithID:(id)arg0 alreadyCanonical:(BOOL)arg1 ;
-(id)imHandleWithID:(id)arg0 countryCode:(id)arg1 ;
-(id)imHandleWithInfo:(id)arg0 ;
-(id)imHandleWithInfo:(id)arg0 alreadyCanonical:(BOOL)arg1 ;
-(id)initWithService:(id)arg0 ;
-(id)initWithUniqueID:(id)arg0 service:(id)arg1 ;
-(id)memberGroups:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForPreferenceKey:(id)arg0 ;
-(id)profileStringForKey:(id)arg0 ;
-(id)profileValueForKey:(id)arg0 ;
-(id)propertiesForGroup:(id)arg0 ;
-(id)recalculatedSubtypeInfo;
-(id)stringForKey:(id)arg0 ;
-(id)stringForPreferenceKey:(id)arg0 ;
-(int)integerForPreferenceKey:(id)arg0 ;
-(struct _FZChatRoomValidity )validityOfChatRoomName:(id)arg0 ;
-(void)_applyChangesToTemporaryCache:(id)arg0 ;
-(void)_clearImageCache;
-(void)_ensureGroupsExists:(id)arg0 ;
-(void)_invalidateCachedAliases;
-(void)_loadFromDictionary:(id)arg0 force:(BOOL)arg1 ;
-(void)_loginWithAutoLogin:(BOOL)arg0 ;
-(void)_markHasSyncedWithRemoteBuddies;
-(void)_notJustLoggedIn;
-(void)_refreshLoginIMHandle;
-(void)_registrationStatusChanged:(id)arg0 ;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)_removePersistentPropertyForKey:(id)arg0 ;
-(void)_resumeBuddyUpdatesNow;
-(void)_serviceDidConnect:(id)arg0 ;
-(void)_serviceDidDisconnect:(id)arg0 ;
-(void)_serviceDidReconnect:(id)arg0 ;
-(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_setPersistentPropertyObject:(id)arg0 forKey:(id)arg1 ;
-(void)_setString:(id)arg0 forKey:(id)arg1 ;
-(void)_syncWithRemoteBuddies;
-(void)_updateLogin:(id)arg0 ;
-(void)_updateMyStatus:(NSUInteger)arg0 message:(id)arg1 ;
-(void)_updateProfileInfo:(id)arg0 ;
-(void)_updateRegistrationStatus:(int)arg0 error:(int)arg1 info:(id)arg2 ;
-(void)_watchBuddiesIfNecessary;
-(void)accountDidBecomeActive;
-(void)accountDidDeactivate;
-(void)accountWillBeRemoved;
-(void)addBuddyToBuddyList:(id)arg0 ;
-(void)beginChanges;
-(void)blockMessages:(BOOL)arg0 fromID:(id)arg1 ;
-(void)buddyPictureChanged:(id)arg0 imageData:(id)arg1 imageHash:(id)arg2 ;
-(void)buddyPropertiesChanged:(id)arg0 ;
-(void)changeBuddyList:(id)arg0 add:(BOOL)arg1 groups:(id)arg2 atLocation:(NSInteger)arg3 ;
-(void)clearServiceCaches;
-(void)clearTargetState;
-(void)dealloc;
-(void)disconnectAllIMHandles;
-(void)endChanges;
-(void)enrollDeviceInSMSRelay:(id)arg0 ;
-(void)enrollSelfDeviceInSMSRelay;
-(void)forgetAllWatches;
-(void)groupsChanged:(id)arg0 error:(id)arg1 ;
-(void)handleSubscriptionRequestFrom:(id)arg0 withMessage:(id)arg1 ;
-(void)holdBuddyUpdates;
-(void)hookupToDaemon;
-(void)imHandle:(id)arg0 buddyStatusChanged:(BOOL)arg1 ;
-(void)loadFromDictionary:(id)arg0 ;
-(void)loginStatusChanged:(unsigned int)arg0 message:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)logoutAccount;
-(void)nowLoggedIn;
-(void)nowLoggedOut;
-(void)recalculateSubtypeInfo;
-(void)registerIMHandle:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForPreferenceKey:(id)arg0 ;
-(void)removePassword;
-(void)removeTemporaryPassword;
-(void)renameGroup:(id)arg0 to:(id)arg1 ;
-(void)reorderGroup:(id)arg0 order:(id)arg1 ;
-(void)reorderGroups:(id)arg0 ;
-(void)requestBuddyListAuthorizationFromIMHandle:(id)arg0 ;
-(void)requestGroups;
-(void)requestProperty:(id)arg0 ofIMHandle:(id)arg1 ;
-(void)resetToDefaults;
-(void)resumeBuddyUpdates;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forPreferenceKey:(id)arg1 ;
-(void)setBuddyProperties:(id)arg0 buddyPictures:(id)arg1 ;
-(void)setCachedBlockIdleStatus:(BOOL)arg0 ;
-(void)setCurrentAccountStatus:(id)arg0 ;
-(void)setIMAccountLoginStatus:(NSUInteger)arg0 ;
-(void)setIMAccountLoginStatus:(NSUInteger)arg0 errorMessage:(id)arg1 ;
-(void)setIMAccountLoginStatus:(NSUInteger)arg0 errorMessage:(id)arg1 reason:(int)arg2 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setInteger:(int)arg0 forPreferenceKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)setTargetGroupsState:(id)arg0 ;
-(void)setValue:(id)arg0 ofExtraProperty:(id)arg1 ofIMHandle:(id)arg2 ;
-(void)setWaitForTargetState;
-(void)startWatchingIMHandle:(id)arg0 ;
-(void)stopWatchingIMHandle:(id)arg0 ;
-(void)syncWithRemoteBuddies;
-(void)systemDidWake;
-(void)systemWillSleep;
-(void)unEnrollDeviceInSMSRelay:(id)arg0 ;
-(void)unregisterIMHandleWithID:(id)arg0 ;
-(void)updateCapabilities:(NSUInteger)arg0 ;
-(void)updateWithTargetGroups;
-(void)watchBuddiesIfNecessary;
-(void)writeSettings;


@end


#endif