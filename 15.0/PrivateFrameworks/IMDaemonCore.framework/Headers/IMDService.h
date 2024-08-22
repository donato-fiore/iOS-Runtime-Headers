// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDSERVICE_H
#define IMDSERVICE_H

@class NSString, NSDictionary, NSBundle;
@protocol IMSystemMonitorListener;

#import <Foundation/Foundation.h>


@interface IMDService : NSObject <IMSystemMonitorListener>

 {
    Class _sessionClass;
    NSString *_internalName;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    BOOL _blockPrefWriting;
}


@property (readonly, nonatomic) Class accountClass;
@property (readonly, retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, retain, nonatomic) NSDictionary *defaultAccountSettings;
@property (readonly, nonatomic) BOOL disallowDeactivation;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, retain, nonatomic) NSString *internalName;
@property (readonly, nonatomic) BOOL isIDSBased;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, nonatomic) BOOL serviceChatsIgnoreLoginStatus;
@property (readonly, retain, nonatomic) NSDictionary *serviceDefaults;
@property (readonly, retain, nonatomic) NSDictionary *serviceDefaultsForSetup;
@property (readonly, retain, nonatomic) NSString *serviceDomain;
@property (readonly, nonatomic) BOOL serviceIgnoresNetworkConnectivity;
@property (readonly, nonatomic) BOOL serviceNeedsLogin;
@property (readonly, nonatomic) BOOL serviceNeedsPassword;
@property (retain, nonatomic) NSDictionary *serviceProperties; // ivar: _serviceProperties
@property (readonly, nonatomic) NSInteger serviceProtocolVersion;
@property (readonly, nonatomic) BOOL serviceRequiresHost;
@property (readonly, nonatomic) BOOL serviceRequiresSingleAccount;
@property (readonly, nonatomic) BOOL serviceShouldBeAlwaysLoggedIn;
@property (readonly, nonatomic) BOOL serviceSupportsAuthorization;
@property (readonly, nonatomic) BOOL serviceSupportsOneSessionForAllAccounts;
@property (readonly, nonatomic) BOOL serviceSupportsPresence;
@property (readonly, nonatomic) BOOL serviceSupportsRegistration;
@property (readonly, nonatomic) BOOL serviceWantsNullHostReachability;
@property (readonly, nonatomic) Class sessionClass;
@property (readonly, nonatomic) BOOL shouldCreateActiveAccounts;
@property (readonly, nonatomic) BOOL shouldForceAccountsActive;
@property (readonly, nonatomic) BOOL shouldForceAccountsConnected;
@property (readonly, nonatomic) BOOL supportsDatabase;


-(BOOL)clearOneTimeImportAccounts;
-(id)_copyServicePropertiesFromIMServiceBundle:(id)arg0 ;
-(id)_defaultDefaults;
-(id)_oldServiceDomain;
-(id)_serviceDefaultsForDomain:(id)arg0 ;
-(id)createDiscontinuedAccount;
-(id)description;
-(id)initWithBundle:(id)arg0 ;
-(id)mainService;
-(id)newAccountWithAccountDefaults:(id)arg0 accountID:(id)arg1 ;
-(id)oldInternalName;
-(void)_reallyUnloadServiceBundle;
-(void)accountAdded:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)dealloc;
-(void)delayedSaveSettings;
-(void)disableAccount:(id)arg0 ;
-(void)enableAccount:(id)arg0 ;
-(void)loadServiceBundle;
-(void)purgeMemoryCaches;
-(void)saveSettings;
-(void)synchronizeServiceDefaults;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidStartBackup;
-(void)unloadServiceBundle;


@end


#endif