// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPREFERENCES_H
#define GKPREFERENCES_H

@class NSString, NSDictionary, NSDate;
@protocol GKPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface GKPreferences : NSObject

@property (readonly, nonatomic) BOOL HTTPShouldUsePipelining;
@property (nonatomic) BOOL _shouldSynchronizeOnNextRead; // ivar: _shouldSynchronizeOnNextRead
@property (nonatomic) BOOL accessPointIsOnAutomatically;
@property (nonatomic) NSInteger accessPointLocation;
@property (nonatomic) BOOL accessPointShowHighlights;
@property (readonly, nonatomic, getter=isAccountModificationRestricted) BOOL accountModificationRestricted;
@property (nonatomic) BOOL activityFeedTestFeedOnly;
@property (readonly, nonatomic, getter=isAddingFriendsRestricted) BOOL addingFriendsRestricted;
@property (readonly, nonatomic, getter=isAppInstallationRestricted) BOOL appInstallationRestricted;
@property (nonatomic) BOOL arcadeDashboardSection;
@property (nonatomic) CGFloat cacheTTLOverride;
@property (nonatomic, getter=isClipGestureEnabled) BOOL clipGestureEnabled;
@property (nonatomic, getter=isComprehensiveLoggingEnabled) BOOL comprehensiveLoggingEnabled;
@property (nonatomic) NSUInteger coreRecentMultiplier;
@property (nonatomic) NSUInteger coreRecentUpperLimit;
@property (readonly, nonatomic, getter=isCustomizedCommunicationRestricted) BOOL customizedCommunicationRestricted;
@property (nonatomic) BOOL dashboardDeepLinkEnabled;
@property (nonatomic) CGFloat debugRequestTimeout;
@property (readonly, nonatomic) BOOL enhancedWelcomeBanner;
@property (nonatomic) BOOL enterSandbox;
@property (nonatomic) NSInteger environment;
@property (readonly, nonatomic) NSUInteger exchangeDataDefaultMaximumSize;
@property (nonatomic) NSUInteger exchangeDataMaximumSize;
@property (readonly, nonatomic) NSUInteger exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property (nonatomic) NSUInteger exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic) NSInteger fakeFriendRequestCount;
@property (nonatomic) BOOL forceDefaultContactsIntegrationConsent;
@property (nonatomic) BOOL forceDefaultNickname;
@property (nonatomic) BOOL forceDefaultPrivacy;
@property (nonatomic) BOOL forcePrivacyNotice;
@property (nonatomic) BOOL forceRelay;
@property (nonatomic) BOOL forceUnderage;
@property (readonly, nonatomic, getter=isFriendRequestsRestricted) BOOL friendRequestsRestricted;
@property (readonly, nonatomic, getter=isFriendsSharingRestricted) BOOL friendsSharingRestricted;
@property (readonly, nonatomic, getter=isGameCenterRestricted) BOOL gameCenterRestricted;
@property (nonatomic) CGFloat garbageCollectionInterval;
@property (nonatomic) BOOL inboxContactsOnly;
@property (nonatomic) unsigned int logFilter;
@property (nonatomic) NSUInteger loginDisableThreshold;
@property (readonly, nonatomic) NSUInteger maxDefaultGameStateSizeTurnBased;
@property (readonly, nonatomic) NSUInteger maxDefaultPlayersHosted;
@property (readonly, nonatomic) NSUInteger maxDefaultPlayersP2P;
@property (readonly, nonatomic) NSUInteger maxDefaultPlayersTurnBased;
@property (nonatomic) NSUInteger maxGameStateSizeTurnBased;
@property (nonatomic) NSUInteger maxPlayersHosted;
@property (nonatomic) NSUInteger maxPlayersP2P;
@property (nonatomic) NSUInteger maxPlayersTurnBased;
@property (nonatomic) NSUInteger maxRecentPlayersCount;
@property (nonatomic) CGFloat maxRecentPlayersTime;
@property (nonatomic) NSUInteger mescalSetupRetries;
@property (nonatomic) CGFloat minimumCacheTTL;
@property (readonly, nonatomic) NSUInteger multiplayerAllowedPlayerType;
@property (readonly, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property (readonly, nonatomic) BOOL multiplayerShouldAlwaysReloadCollectionView;
@property (readonly, nonatomic, getter=isNearbyMultiplayerRestricted) BOOL nearbyMultiplayerRestricted;
@property (nonatomic) NSInteger networkManagerStateOverride;
@property (nonatomic) NSString *networkManagerUserOverride;
@property (nonatomic) BOOL notificationAlertsEnabled;
@property (nonatomic) BOOL notificationBadgesEnabled;
@property (nonatomic, getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property (nonatomic) BOOL notificationSoundsEnabled;
@property (nonatomic) NSUInteger operationRetryCount;
@property (nonatomic) CGFloat operationRetryDelay;
@property (nonatomic) CGFloat operationTimeout;
@property (retain, nonatomic) NSDictionary *overrideValues; // ivar: _overrideValues
@property (nonatomic) NSInteger pipeliningSetting;
@property (nonatomic) BOOL preemptiveRelay;
@property (weak, nonatomic) NSObject<GKPreferencesDelegate> *preferencesDelegate;
@property (readonly, nonatomic, getter=isProfileModificationRestricted) BOOL profileModificationRestricted;
@property (readonly, nonatomic, getter=isProfilePrivacyModificationRestricted) BOOL profilePrivacyModificationRestricted;
@property (nonatomic) NSInteger pushEnvironment;
@property (nonatomic) NSUInteger recentNumberOfPlayers;
@property (retain, nonatomic) NSDictionary *recentNumberOfPlayersPerGame;
@property (nonatomic) BOOL restrictToAutomatch;
@property (nonatomic) BOOL restrictToTournamentPlayers;
@property (readonly, nonatomic, getter=isSharingRestricted) BOOL sharingRestricted;
@property (nonatomic) BOOL shouldAddPlayerInfoToAddressBook;
@property (readonly, nonatomic) BOOL shouldAllowCustomCommunication;
@property (nonatomic) BOOL shouldAllowNearbyMultiplayer;
@property (readonly, nonatomic) BOOL shouldAllowSharing;
@property (nonatomic) BOOL shouldAnnotateImageUsage;
@property (readonly, nonatomic) BOOL shouldDisallowInvitesFromStrangers;
@property (nonatomic) BOOL shouldLinkPlayerToFacebook;
@property (nonatomic) BOOL shouldLinkPlayerToICloud;
@property (nonatomic) BOOL shouldLinkPlayerToTwitter;
@property (nonatomic) BOOL shouldTrackAtlasImageUsage;
@property (nonatomic) BOOL shouldUseTestIcons;
@property (retain, nonatomic) NSString *storeBagURL;
@property (readonly, nonatomic, getter=isStoreDemoModeEnabled) BOOL storeDemoModeEnabled;
@property (nonatomic) BOOL supportsChallenges;
@property (nonatomic) CGFloat terminationInterval;
@property (copy, nonatomic) NSString *testRunID;
@property (nonatomic) NSInteger tournamentAutoDuration;
@property (nonatomic) NSInteger tournamentCreationMethod;
@property (nonatomic) NSInteger tournamentCustomDuration;
@property (nonatomic) NSInteger tournamentCustomMaxPlayers;
@property (nonatomic) NSInteger tournamentCustomMaxReplays;
@property (nonatomic) NSInteger tournamentCustomMinPlayers;
@property (nonatomic) BOOL tournamentDemoModeEnabled;
@property (nonatomic) NSInteger tournamentDuration;
@property (retain, nonatomic) NSDate *tournamentEndDate;
@property (nonatomic) NSInteger tournamentMaxPlayers;
@property (nonatomic) NSInteger tournamentMaxReplays;
@property (nonatomic) NSInteger tournamentMaxSimulatedFriends;
@property (nonatomic) NSInteger tournamentMaxSimulatedPlayers;
@property (nonatomic) NSInteger tournamentMinPlayers;
@property (nonatomic) NSInteger tournamentParticipantState;
@property (nonatomic) NSInteger tournamentPlayers;
@property (nonatomic) NSInteger tournamentReplays;
@property (nonatomic) NSInteger tournamentServer;
@property (retain, nonatomic) NSDate *tournamentStartDate;
@property (nonatomic) NSInteger tournamentState;
@property (nonatomic) NSInteger tournamentUIAppearanceStyle;
@property (nonatomic) BOOL tournamentsDebuggingEnabled;
@property (nonatomic) BOOL useInternalHeader;
@property (nonatomic) BOOL useSharePlayToExchangeData;
@property (nonatomic) BOOL useTestProtocols;
@property (nonatomic) BOOL verboseLogging;
@property (nonatomic, getter=isWebKitInspectElementEnabled) BOOL webKitInspectElementEnabled; // ivar: _webKitInspectElementEnabled


+(id)displayNameForEnvironment:(NSInteger)arg0 ;
+(id)hostNameForEnvironment:(NSInteger)arg0 ;
+(id)shared;
-(BOOL)booleanValueForKey:(id)arg0 ;
-(BOOL)booleanValueForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)isInternalBuild;
-(BOOL)restrictionEnabledForKey:(id)arg0 ;
-(CGFloat)timeIntervalForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(NSInteger)integerValueForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSInteger)unsignedIntegerValueForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSUInteger)recentNumberOfPlayersForBundleID:(id)arg0 ;
-(id)dictionaryValueForKey:(id)arg0 ;
-(id)init;
-(id)initWithUIKitNotifications;
-(id)initWithoutUIKitNotifications;
-(id)overrideValueForKey:(id)arg0 ;
-(id)preferencesValueForKey:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)valueRestrictionForKey:(id)arg0 ;
-(void)_didWriteKey:(id)arg0 ;
-(void)applicationWillEnterBackground:(id)arg0 ;
-(void)getMultiplayerAllowedPlayerTypeWithHandler:(id)arg0 ;
-(void)invalidate;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeOverrideForKey:(id)arg0 ;
-(void)setBooleanValue:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDictionaryValue:(id)arg0 forKey:(id)arg1 ;
-(void)setIntegerValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 ;
-(void)setTimeInterval:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setUnsignedIntegerValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif