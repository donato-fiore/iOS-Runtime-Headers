// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGCONTROLLER_H
#define CNFREGCONTROLLER_H

@class NSArray, NSMutableDictionary, NSTimer, NSString, IMAccount, NSDictionary, IMServiceImpl, IDSPhoneSubscriptionSelector, NSSet;
@protocol IMSystemMonitorListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CNFRegController : NSObject <IMSystemMonitorListener>

 {
    NSArray *_accounts;
    NSMutableDictionary *_accountFilterCache;
    NSObject<OS_dispatch_queue> *_springboardNetworkFlagQueue;
    NSTimer *_wifiAlertWatchTimer;
    NSInteger _requiredWifiCount;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    BOOL _originalUsesBackgroundNetwork;
    NSString *_logName;
    NSUInteger _logIndent;
    NSInteger _systemAccountType;
    IMAccount *_systemAccount;
    ? _controllerFlags;
}


@property (retain, nonatomic) NSArray *_temporaryDeviceAliases; // ivar: __temporaryDeviceAliases
@property (copy, nonatomic) id *accountActivationChangedBlock; // ivar: _accountActivationChangedBlock
@property (copy, nonatomic) id *accountAddedBlock; // ivar: _accountAddedBlock
@property (copy, nonatomic) id *accountAuthorizationChangedBlock; // ivar: _accountAuthorizationChangedBlock
@property (copy, nonatomic) id *accountRegistrationBlock; // ivar: _accountRegistrationBlock
@property (copy, nonatomic) id *accountRemovedBlock; // ivar: _accountRemovedBlock
@property (readonly, copy, nonatomic) NSArray *accounts;
@property (copy, nonatomic) id *aliasAddedBlock; // ivar: _aliasAddedBlock
@property (copy, nonatomic) id *aliasRemovedBlock; // ivar: _aliasRemovedBlock
@property (copy, nonatomic) id *aliasStatusChangedBlock; // ivar: _aliasStatusChangedBlock
@property (readonly, retain, nonatomic) NSArray *aliases;
@property (readonly, retain, nonatomic) NSArray *allAvailableAliases;
@property (readonly, copy, nonatomic) NSArray *appleIDAccounts;
@property (readonly, copy, nonatomic) NSDictionary *cachedCallerIDMap; // ivar: _cachedCallerIDMap
@property (copy, nonatomic) id *callerIdChangedBlock; // ivar: _callerIdChangedBlock
@property (readonly, retain, nonatomic) NSArray *emailAliases;
@property (readonly, copy, nonatomic) NSArray *failedAccounts;
@property (readonly, retain, nonatomic) IMServiceImpl *firstService;
@property (readonly, copy, nonatomic) NSArray *phoneAccounts;
@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector; // ivar: _phoneSubscriptionSelector
@property (copy, nonatomic) id *profileChangedBlock; // ivar: _profileChangedBlock
@property (copy, nonatomic) id *profileStatusChangedBlock; // ivar: _profileStatusChangedBlock
@property (copy, nonatomic) id *resetBlock; // ivar: _resetBlock
@property (copy, nonatomic) id *serviceDidBecomeUnsupportedBlock; // ivar: _serviceDidBecomeUnsupportedBlock
@property (nonatomic, getter=isServiceEnabled) BOOL serviceEnabled;
@property (readonly, retain, nonatomic) NSSet *serviceNames;
@property (readonly, nonatomic, getter=isServiceSupported) BOOL serviceSupported;
@property (readonly, nonatomic) BOOL serviceSupportsDeviceAliasEnablement;
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSArray *services; // ivar: _services
@property (readonly, retain, nonatomic) IMAccount *systemAccount;
@property (readonly, nonatomic) NSInteger systemAccountType;
@property (readonly, retain, nonatomic) NSArray *useableAliases;
@property (readonly, retain, nonatomic) NSArray *vettedAliases;
@property (copy, nonatomic) id *vettedAliasesChangedBlock; // ivar: _vettedAliasesChangedBlock
@property (copy, nonatomic) id *willLaunchURLBlock; // ivar: _willLaunchURLBlock


+(id)controllerForServiceType:(NSInteger)arg0 ;
-(BOOL)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg0 ;
-(BOOL)_accountHasValidatedLocale:(id)arg0 ;
-(BOOL)_accountIsAuthenticated:(id)arg0 ;
-(BOOL)_addAliases:(id)arg0 toAccount:(id)arg1 validate:(BOOL)arg2 ;
-(BOOL)_aliasIsDevicePhoneNumber:(id)arg0 ;
-(BOOL)_aliasIsTemporaryDeviceAlias:(id)arg0 ;
-(BOOL)_isValidCallerIDAlias:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)_shouldFilterOutAlias:(id)arg0 onAccount:(id)arg1 ;
-(BOOL)accountIsAuthenticating;
-(BOOL)addAlias:(id)arg0 ;
-(BOOL)addAlias:(id)arg0 toAccount:(id)arg1 ;
-(BOOL)canRemoveAlias:(id)arg0 ;
-(BOOL)cellularDataEnabled;
-(BOOL)deviceCanTakeNetworkAction;
-(BOOL)deviceHasSaneNetworkConnection;
-(BOOL)hasAlias:(id)arg0 ;
-(BOOL)hasAliasNamed:(id)arg0 ;
-(BOOL)hasFailedLogin;
-(BOOL)hasFailedLoginDueToBadLogin;
-(BOOL)hasSystemAccount;
-(BOOL)isConnected;
-(BOOL)removeAlias:(id)arg0 fromAccount:(id)arg1 ;
-(BOOL)setDisplayAlias:(id)arg0 ;
-(BOOL)shouldHandleAccountNotification:(id)arg0 ;
-(BOOL)shouldShowAlertForError:(id)arg0 ;
-(BOOL)unvalidateAlias:(id)arg0 ;
-(BOOL)validateAlias:(id)arg0 ;
-(NSInteger)_phoneSubscriptionSlotMatchingLabel:(id)arg0 ;
-(NSInteger)_phoneSubscriptionSlotMatchingPhoneNumber:(id)arg0 ;
-(NSUInteger)accountState;
-(NSUInteger)accountState:(id)arg0 ;
-(NSUInteger)accountStateForAccount:(id)arg0 ;
-(id)__filter_activeAccountsPredicate:(SEL)arg0 ;
-(id)__filter_appleIDAccountPredicate:(SEL)arg0 ;
-(id)__filter_inactiveAccountsPredicate:(SEL)arg0 ;
-(id)__filter_operationalPredicate:(SEL)arg0 ;
-(id)__filter_phoneAccountPredicate:(SEL)arg0 ;
-(id)__filter_signInCompletePredicate:(SEL)arg0 ;
-(id)__filter_signedInPredicate:(SEL)arg0 ;
-(id)__filter_validatedAliasPredicate:(SEL)arg0 ;
-(id)__filter_validatedProfilePredicate:(SEL)arg0 ;
-(id)_accountForAlias:(id)arg0 accounts:(id)arg1 ;
-(id)_accountsPassingTests:(id)arg0 message:(id)arg1 ;
-(id)_aliasComparator:(SEL)arg0 ;
-(id)_aliasesForAccount:(id)arg0 ;
-(id)_aliasesFromAccounts:(id)arg0 passingTest:(id)arg1 ;
-(id)_aliasesPassingTest:(id)arg0 ;
-(id)_allAvailableAliasesForAccount:(id)arg0 ;
-(id)_createAccountWithLogin:(id)arg0 foundExisting:(*BOOL)arg1 ;
-(id)_guessedDisplayAliasFromAccounts:(id)arg0 ;
-(id)_logName;
-(id)_logSpace;
-(id)_predicatesWithFilter:(NSInteger)arg0 ;
-(id)_vettedAliasesForAccount:(id)arg0 ;
-(id)accountForAlias:(id)arg0 ;
-(id)accountWithLogin:(id)arg0 ;
-(id)accountsWithFilter:(NSInteger)arg0 ;
-(id)accountsWithFilter:(NSInteger)arg0 message:(id)arg1 ;
-(id)activeAccounts;
-(id)aliasNamed:(id)arg0 ;
-(id)aliasSummaryString:(*BOOL)arg0 ;
-(id)aliasesForAccounts:(id)arg0 ;
-(id)allAvailableAliasesForAccounts:(id)arg0 ;
-(id)beginAccountSetupWithAccount:(id)arg0 ;
-(id)beginAccountSetupWithLogin:(id)arg0 authID:(id)arg1 authToken:(id)arg2 regionInfo:(id)arg3 foundExisting:(*BOOL)arg4 ;
-(id)beginAccountSetupWithLogin:(id)arg0 password:(id)arg1 foundExisting:(*BOOL)arg2 ;
-(id)displayAccount;
-(id)displayAlias;
-(id)firstAccount;
-(id)guessedAccountName;
-(id)guessedAlias;
-(id)guessedDisplayAlias;
-(id)init;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(id)localPhoneNumberSentinelAlias;
-(id)loginForAccount:(id)arg0 ;
-(id)networkSettingsURLAllowingCellular:(BOOL)arg0 ;
-(id)usableDeviceAliases;
-(id)useableAliasesForAccounts:(id)arg0 ;
-(id)vettedAliasesForAccounts:(id)arg0 ;
-(void)__updateSystemAccount;
-(void)_clearAccountCache;
-(void)_clearCachedTemporaryDeviceAliases;
-(void)_clearFilterCache;
-(void)_decrementLogIndent;
-(void)_handleCallerIDChanged;
-(void)_handleCallerIDChangedForResume:(id)arg0 ;
-(void)_incrementLogIndent;
-(void)_nukeCallerIDCache;
-(void)_postCallerIDChanged;
-(void)_purgeExcessAccounts;
-(void)_showNetworkAlertWithMessage:(id)arg0 andViewController:(id)arg1 ;
-(void)_signOutAccount:(id)arg0 ;
-(void)_startListeningForCallerIDChanges;
-(void)_startWiFiAlertWatchTimer;
-(void)_stopListeningForCallerIDChanges;
-(void)_stopWiFiAlertWatchTimer;
-(void)_wifiAlertWatchTimerFired:(id)arg0 ;
-(void)accountActivationStateChanged:(id)arg0 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountRegistrationChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)activateAccounts;
-(void)activateAccountsExcludingAccounts:(id)arg0 ;
-(void)addDeviceAlias:(id)arg0 ;
-(void)aliasStatusChanged:(id)arg0 ;
-(void)aliasesChanged:(id)arg0 ;
-(void)authorizationCredentialsChanged:(id)arg0 ;
-(void)callerIdChanged:(id)arg0 ;
-(void)clearAllCaches;
-(void)connect;
-(void)connect:(BOOL)arg0 ;
-(void)deactivateAccounts;
-(void)dealloc;
-(void)deviceCapabilityChanged:(id)arg0 ;
-(void)disableDeviceAlias:(id)arg0 ;
-(void)enablePhoneNumberRegistration;
-(void)handleAliasAdded:(id)arg0 ;
-(void)handleAliasRemoved:(id)arg0 ;
-(void)nukeAllCallerIDSettings;
-(void)openURL:(id)arg0 ;
-(void)profileChanged:(id)arg0 ;
-(void)profileValidationStateChanged:(id)arg0 ;
-(void)refreshSystemAccount;
-(void)removeAllHandlers;
-(void)removeDeviceAlias:(id)arg0 ;
-(void)resetNetworkFirstRunAlert;
-(void)setCellularDataEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)showNetworkAlert:(id)arg0 ;
-(void)showNetworkAlertIfNecessary:(id)arg0 ;
-(void)showNetworkFirstRunAlert:(id)arg0 ;
-(void)showSetupFaceTimeOverCellularAlertWithCompletion:(id)arg0 ;
-(void)signoutAccount:(id)arg0 ;
-(void)startListeningForAccountChanges;
-(void)startRequiringWifi;
-(void)stopListeningForAccountChanges;
-(void)stopRequiringWifi;
-(void)systemApplicationDidEnterBackground;
-(void)vettedAliasesChanged:(id)arg0 ;


@end


#endif