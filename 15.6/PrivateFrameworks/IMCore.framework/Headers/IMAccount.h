// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMACCOUNT_H
#define IMACCOUNT_H

@class NSRecursiveLock, NSMapTable, NSArray, NSString, NSDictionary, NSMutableDictionary, NSData, NSDate, NSAttributedString;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IMPeople.h"
#import "IMServiceImpl.h"

@interface IMAccount : NSObject <IMSystemMonitorListener>

 {
    NSRecursiveLock *_lock;
    NSMapTable *_imHandles;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSString *_displayName;
    NSString *_uniqueID;
    NSInteger _accountType;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    NSMutableDictionary *_localCache;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    NSString *_countryCode;
    NSInteger _profileStatus;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    NSDictionary *_accountPersistentProperties;
    NSMutableDictionary *_accountPersistentPropertiesChanges;
    NSArray *_groups;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_members;
    NSMutableDictionary *_coalescedChanges;
    NSArray *_targetGroupState;
    NSArray *_lastReceivedGroupState;
    NSArray *_vettedAliases;
    NSArray *_aliases;
    NSDictionary *_myNowPlaying;
    NSData *_accountImageData;
    NSUInteger _defaultHandleCapabilities;
    BOOL _hasCheckedDefaultHandleCapabilities;
    NSInteger _registrationStatus;
    NSInteger _registrationFailureReason;
    NSDictionary *_registrationAlertInfo;
    BOOL _hasPostedOfflineNotification;
    BOOL _useMeCardName;
    BOOL _syncedWithRemoteBuddyList;
    BOOL _hasReceivedSync;
    int _numHolding;
    int _coalesceCount;
    BOOL _needToCheckForWatchedIMHandles;
    BOOL _iconChecked;
    BOOL _hasBeenRemoved;
    id *_smallImage;
    id *_accountImage;
    BOOL _asleep;
}


@property (readonly, nonatomic) BOOL _isUsableForSending;
@property (readonly, nonatomic) NSDictionary *_persistentProperties;
@property (retain, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSData *accountImageData;
@property (readonly, nonatomic) NSDictionary *accountPreferences;
@property (readonly, nonatomic) NSDictionary *accountSubtypeInfo; // ivar: _subtypeInfo
@property (readonly, nonatomic) NSInteger accountType;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (retain, nonatomic) NSArray *allowList;
@property (readonly, nonatomic) BOOL allowsMMSRelay;
@property (readonly, nonatomic) BOOL allowsSMSRelay;
@property (nonatomic) BOOL allowsVCRelay;
@property (readonly, nonatomic) NSArray *arrayOfAllIMHandles;
@property (readonly, nonatomic) NSString *authorizationID;
@property (readonly, nonatomic) NSString *authorizationToken;
@property (nonatomic) BOOL autoLogin;
@property (nonatomic) BOOL blockIdleStatus; // ivar: _blockIdleStatus
@property (retain, nonatomic) NSArray *blockList;
@property (nonatomic) BOOL blockOtherAddresses;
@property (nonatomic) unsigned int blockingMode; // ivar: _cachedBlockingMode
@property (readonly, nonatomic) IMPeople *buddyList; // ivar: _buddyList
@property (readonly, nonatomic) BOOL canActivate;
@property (readonly, nonatomic) BOOL canSendMessages;
@property (readonly, nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *emailDomains;
@property (nonatomic) BOOL goIdle;
@property (readonly, nonatomic) NSArray *groupList;
@property (readonly, nonatomic) BOOL handlesChatInvites;
@property (readonly, nonatomic) BOOL hasCustomDescription;
@property (readonly, nonatomic) BOOL hasSyncedWithRemoteBuddies;
@property (readonly, nonatomic) BOOL hasTargetGroupStateBeenMet;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSInteger invalidSettings;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isAsleep;
@property (readonly, nonatomic) BOOL isAwaitingTargetGroupState;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isOperational;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) BOOL isSMSRelayCapable;
@property (readonly, nonatomic) BOOL justLoggedIn; // ivar: _justLoggedIn
@property (retain, nonatomic) NSString *login; // ivar: _loginID
@property (readonly, nonatomic) id *loginIMHandle; // ivar: _loginIMHandle
@property (readonly, nonatomic) NSUInteger loginStatus; // ivar: _loginStatus
@property (readonly, nonatomic) NSString *loginStatusMessage;
@property (readonly, nonatomic) BOOL makingChanges;
@property (readonly, nonatomic, getter=isMakoAccount) BOOL makoAccount;
@property (readonly, nonatomic) NSDate *myIdleSince; // ivar: _myIdleSince
@property (readonly, nonatomic) NSString *myNowPlayingString;
@property (readonly, nonatomic) NSData *myPictureData; // ivar: _myPictureData
@property (readonly, nonatomic) NSAttributedString *myProfile; // ivar: _myProfile
@property (readonly, nonatomic) NSUInteger myStatus; // ivar: _myStatus
@property (readonly, nonatomic) NSDictionary *myStatusDictionary; // ivar: _currentAccountStatus
@property (readonly, nonatomic) NSString *myStatusMessage; // ivar: _myStatusMessage
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSInteger port;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property (readonly, nonatomic) NSInteger registrationFailureReason;
@property (readonly, nonatomic) NSInteger registrationStatus;
@property (readonly, nonatomic) NSString *server;
@property (readonly, weak, nonatomic) IMServiceImpl *service; // ivar: _service
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *strippedLogin; // ivar: _strippedLogin
@property (readonly, nonatomic) BOOL supportsAuthorization;
@property (readonly, nonatomic) BOOL supportsRegistration;
@property (readonly, nonatomic) NSString *temporaryPassword;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, nonatomic) BOOL validLogin;
@property (readonly, nonatomic) BOOL validPort;
@property (readonly, nonatomic) BOOL validServer;
@property (readonly, nonatomic) NSArray *vettedAliases;


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
-(BOOL)setProfileString:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setProfileValue:(id)arg0 forKey:(id)arg1 ;
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
-(NSInteger)profileValidationErrorReason;
-(NSInteger)profileValidationStatus;
-(NSInteger)typeForAlias:(id)arg0 ;
-(NSInteger)validationErrorReasonForAlias:(id)arg0 ;
-(NSInteger)validationErrorReasonForAlias:(id)arg0 type:(NSInteger)arg1 ;
-(NSInteger)validationStatusForAlias:(id)arg0 ;
-(NSInteger)validationStatusForAlias:(id)arg0 type:(NSInteger)arg1 ;
-(NSUInteger)defaultHandleCapabilities;
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
-(void)_setLocalCachedObject:(id)arg0 forKey:(id)arg1 ;
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
-(void)setCachedAllowList:(id)arg0 ;
-(void)setCachedBlockIdleStatus:(BOOL)arg0 ;
-(void)setCachedBlockList:(id)arg0 ;
-(void)setCachedBlockingMode:(unsigned int)arg0 ;
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
-(void)targetGroupStateTimeout;
-(void)unEnrollDeviceInSMSRelay:(id)arg0 ;
-(void)unregisterIMHandleWithID:(id)arg0 ;
-(void)updateCapabilities:(NSUInteger)arg0 ;
-(void)updateWithTargetGroups;
-(void)watchBuddiesIfNecessary;
-(void)writeSettings;


@end


#endif