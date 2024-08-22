// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLOCALPLAYER_H
#define GKLOCALPLAYER_H

@class NSString, NSError, UIAlertView, NSInvocation, GKEventEmitter<GKLocalPlayerListenerPrivate>;
@protocol NSCoding, NSSecureCoding, GKSavedGameListener;


#import "GKPlayer.h"
#import "GKInvite.h"

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>



@property (retain, nonatomic) GKInvite *acceptedInvite; // ivar: _acceptedInvite
@property (retain, nonatomic) NSString *accountName;
@property (readonly, nonatomic) BOOL allowNearbyMultiplayer;
@property (nonatomic) BOOL appIsInBackground;
@property (nonatomic) CGFloat authStartTimeStamp; // ivar: _authStartTimeStamp
@property (copy, nonatomic) id *authenticateHandler;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic, getter=isAuthenticating) BOOL authenticating;
@property (nonatomic) NSError *authenticationError; // ivar: _authenticationError
@property (nonatomic) NSUInteger authenticationState; // ivar: _authenticationState
@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (readonly, nonatomic, getter=isAvatarEditingRestricted) BOOL avatarEditingRestricted;
@property (nonatomic) UIAlertView *currentAlert; // ivar: _currentAlert
@property (retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // ivar: _currentFriendRequestInvocation
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultContactsIntegrationConsent) BOOL defaultContactsIntegrationConsent;
@property (nonatomic, getter=isDefaultNickname) BOOL defaultNickname;
@property (nonatomic, getter=isDefaultPrivacyVisibility) BOOL defaultPrivacyVisibility;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAuthenticate; // ivar: _didAuthenticate
@property (nonatomic) BOOL enteringForeground; // ivar: _enteringForeground
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (retain, nonatomic) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter; // ivar: _eventEmitter
@property (readonly, nonatomic, getter=isFindable) BOOL findable;
@property (retain, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL insideAuthenticatorInvocation;
@property (nonatomic) BOOL isShowingFriendRequestUI; // ivar: _isShowingFriendRequestUI
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) UIAlertView *loginAlertView; // ivar: _loginAlertView
@property (readonly, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property (nonatomic, getter=isNewToGameCenter) BOOL newToGameCenter; // ivar: _newToGameCenter
@property (readonly, nonatomic, getter=isPersonalizedCommunicationRestricted) BOOL personalizedCommunicationRestricted;
@property (nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property (nonatomic) BOOL shouldPreserveOnboardingUI; // ivar: _shouldPreserveOnboardingUI
@property (nonatomic, getter=isShowingInGameUI) BOOL showingInGameUI; // ivar: _showingInGameUI
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUnderage) BOOL underage;
@property (copy, nonatomic) id *validateAccountCompletionHandler; // ivar: _validateAccountCompletionHandler
@property (nonatomic) BOOL validatingAccount; // ivar: _validatingAccount


+(BOOL)supportsSecureCoding;
+(id)_localPlayersFromInternals:(id)arg0 authenticated:(BOOL)arg1 ;
+(id)authenticatedLocalPlayers;
+(id)authenticatedLocalPlayersFiltered:(NSInteger)arg0 ;
+(id)authenticatedLocalPlayersWithStatus:(NSUInteger)arg0 ;
+(id)local;
+(id)localPlayer;
+(id)localPlayerAccessQueue;
+(id)localPlayerForCredential:(id)arg0 ;
+(id)localPlayers;
+(void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)arg0 loggedOutPlayerInternals:(id)arg1 oldPrimary:(id)arg2 newPrimary:(id)arg3 ;
+(void)authenticateWithUsername:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
+(void)authenticatedLocalPlayersDidChange:(id)arg0 complete:(id)arg1 ;
+(void)loadHighlightsDataWithCompletionHandler:(id)arg0 ;
+(void)performAsync:(id)arg0 ;
+(void)performSync:(id)arg0 ;
-(BOOL)isWelcomeBannerTooLate;
-(BOOL)scopedIDsArePersistent;
-(BOOL)shouldDisplayWelcomeBannerForPlayer:(id)arg0 lastAuthDate:(id)arg1 remoteUI:(BOOL)arg2 timeBetweenBanners:(CGFloat)arg3 ;
-(id)_friendsAPICommunicationsError;
-(id)_friendsAPIDeniedError;
-(id)_friendsAPIDescriptionMissingError;
-(id)_friendsAPIRestrictedError;
-(id)_gkFriendListUsageDescription;
-(id)daemonProxy;
-(id)displayNameWithOptions:(unsigned char)arg0 ;
-(id)friendService;
-(id)friendServicePrivate;
-(id)friends;
-(id)initWithCoder:(id)arg0 ;
-(void)_loadFriendPlayersWithCompletionHandler:(id)arg0 ;
-(void)_loadFriendPlayersWithFilter:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_loadFriendsListGlobalAccessOptInFlow:(id)arg0 ;
-(void)_loadFriendsListPerGameAuthorizedFlow:(id)arg0 ;
-(void)_loadFriendsListPerGameNotDeterminedFlow:(id)arg0 ;
-(void)_startAuthenticationForExistingPrimaryPlayer;
-(void)_updatePerGameSettings:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)acceptFriendRequestWithIdentifier:(id)arg0 sendPush:(BOOL)arg1 handler:(id)arg2 ;
-(void)authenticateWithCompletionHandler:(id)arg0 ;
-(void)callAuthHandlerWithError:(id)arg0 ;
-(void)cancelFriendRequestWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)cancelGameInvite:(id)arg0 ;
-(void)cancelInviteWithNotification:(id)arg0 ;
-(void)createFriendRequestWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)deleteSavedGamesWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchItemsForIdentityVerificationSignature:(id)arg0 ;
-(void)fetchMultiplayerGameInvite;
-(void)fetchSavedGamesWithCompletionHandler:(id)arg0 ;
-(void)fetchTurnBasedEvent;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(id)arg0 ;
-(void)getPlayerIDFromFriendCode:(id)arg0 handler:(id)arg1 ;
-(void)handleChallengableFriendsResults:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)inviteeAcceptedGameInviteWithNotification:(id)arg0 ;
-(void)inviteeDeclinedGameInviteWithNotification:(id)arg0 ;
-(void)loadChallengableFriendsWithCompletionHandler:(id)arg0 ;
-(void)loadChallengableFriendsWithFetchOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg0 ;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id)arg0 ;
-(void)loadFriendPlayersWithCompletionHandler:(id)arg0 ;
-(void)loadFriendPlayersWithFilter:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadFriends:(id)arg0 ;
-(void)loadFriendsAuthorizationStatus:(id)arg0 ;
-(void)loadFriendsWithCompletionHandler:(id)arg0 ;
-(void)loadFriendsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadRecentPlayersWithCompletionHandler:(id)arg0 ;
-(void)promotePlayerInternalToLocalPlayerInternal:(id)arg0 ;
-(void)recordScopedIdState:(BOOL)arg0 ;
-(void)registerListener:(id)arg0 ;
-(void)rejectFriendRequestWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)removeAllFriendsWithBlock:(id)arg0 ;
-(void)removeFriend:(id)arg0 block:(id)arg1 ;
-(void)reportAuthenticatingWithAuthKitInvocation;
-(void)reportAuthenticatingWithGreenBuddyInvocation;
-(void)reportAuthenticationErrorNoInternetConnection;
-(void)reportAuthenticationLoginCanceled;
-(void)reportAuthenticationPlayerAuthenticated;
-(void)reportAuthenticationStartForPlayer;
-(void)resetTCCAuthorization;
-(void)resolveConflictingSavedGames:(id)arg0 withData:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveGameData:(id)arg0 withName:(id)arg1 completionHandler:(id)arg2 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)setFriendListAuthorizationStatus:(NSInteger)arg0 forBundleID:(id)arg1 handler:(id)arg2 ;
-(void)setLastContactsIntegrationConsentVersion:(id)arg0 ;
-(void)setLastFriendSuggestionsVersion:(id)arg0 ;
-(void)setLastPersonalizationVersion:(id)arg0 ;
-(void)setLastPrivacyNoticeVersion:(NSUInteger)arg0 ;
-(void)setLastProfilePrivacyVersion:(id)arg0 ;
-(void)setLastWelcomeWhatsNewCopyVersion:(NSUInteger)arg0 ;
-(void)setStatus:(id)arg0 ;
-(void)setStatus:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setupForCloudSavedGames;
-(void)showSettings;
-(void)signOutAndOptOut:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)signOutWithCompletionHandler:(id)arg0 ;
-(void)unregisterAllListeners;
-(void)unregisterListener:(id)arg0 ;
-(void)updateFromLocalPlayer:(id)arg0 ;
-(void)updateLoginStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif