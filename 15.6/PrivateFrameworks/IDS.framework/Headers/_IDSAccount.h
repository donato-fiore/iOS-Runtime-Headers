// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IDSACCOUNT_H
#define _IDSACCOUNT_H

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSDate, NSData;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>


@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol>

 {
    NSDictionary *_accountConfig;
    NSString *_serviceToken;
    NSString *_uniqueID;
    NSString *_service;
    NSMutableArray *_devices;
    NSMutableArray *_suppressedDevices;
    id *_delegateContext;
    NSMapTable *_delegateToInfo;
    NSMapTable *_registrationDelegateToInfo;
    BOOL _devicesLoaded;
    BOOL _isEnabled;
}


@property (nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property (retain, nonatomic) NSDictionary *accountInfo;
@property (readonly, weak, nonatomic) NSArray *accountRegisteredURIs;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSArray *aliasStrings;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, weak, nonatomic) NSDate *dateRegistered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isInTransientRegistrationState;
@property (readonly, nonatomic) BOOL isTransientAllowlistedAccount;
@property (readonly, nonatomic) BOOL isUsableForOuterMessaging;
@property (readonly, nonatomic) BOOL isUserDisabled;
@property (retain, nonatomic) NSString *loginID; // ivar: _loginID
@property (readonly, nonatomic) NSArray *nearbyDevices;
@property (readonly, weak, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, weak, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) int profileValidationErrorReason;
@property (readonly, nonatomic) NSInteger profileValidationStatus;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (readonly, nonatomic) NSArray *pseudonyms;
@property (readonly, weak, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSString *pushTopic;
@property (retain, nonatomic) NSString *regionBasePhoneNumber;
@property (retain, nonatomic) NSString *regionID;
@property (readonly, weak, nonatomic) NSDictionary *regionServerContext;
@property (readonly, weak, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, weak, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *suppressedDevices;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *userUniqueIdentifier;
@property (readonly, nonatomic) NSArray *vettedAliases;


-(BOOL)_isInvisibleAlias:(id)arg0 ;
-(BOOL)_isThumperService;
-(BOOL)_isiCloudPairingService;
-(BOOL)isTemporary;
-(id)_keychainRegistration;
-(id)_objectForKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 uniqueID:(id)arg1 serviceName:(id)arg2 delegateContext:(id)arg3 ;
-(id)initWithLoginID:(id)arg0 uniqueID:(id)arg1 serviceName:(id)arg2 delegateContext:(id)arg3 ;
-(id)registrationInfo;
-(void)_callCloudConnectedDevicesChanged;
-(void)_callConnectedDevicesChanged;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3  ;
// -(void)_callDelegatesRespondingToSelector:(SEL)arg0 withPreCallbacksBlock:(id)arg1 callbackBlock:(unk)arg2 postCallbacksBlock:(id)arg3 group:(unk)arg4  ;
-(void)_callDelegatesWithBlock:(id)arg0 ;
// -(void)_callDelegatesWithBlock:(id)arg0 group:(unk)arg1  ;
-(void)_callDevicesChanged;
-(void)_callNearbyDevicesChanged;
-(void)_callRegistrationDelegatesWithBlock:(id)arg0 ;
-(void)_connect;
-(void)_loadCachedDevices;
-(void)_reloadCachedDevices;
-(void)_reregisterAndReidentify:(BOOL)arg0 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg0 ;
-(void)account:(id)arg0 aliasesChanged:(id)arg1 ;
-(void)account:(id)arg0 dependentDevicesUpdated:(id)arg1 ;
-(void)account:(id)arg0 dependentDevicesUpdatedUponReconnect:(id)arg1 ;
-(void)account:(id)arg0 displayNameChanged:(id)arg1 ;
-(void)account:(id)arg0 localDeviceAdded:(id)arg1 ;
-(void)account:(id)arg0 localDeviceRemoved:(id)arg1 ;
-(void)account:(id)arg0 loginChanged:(id)arg1 ;
-(void)account:(id)arg0 profileChanged:(id)arg1 ;
-(void)account:(id)arg0 pseudonymsChanged:(id)arg1 ;
-(void)account:(id)arg0 registrationStatusInfoChanged:(id)arg1 ;
-(void)account:(id)arg0 vettedAliasesChanged:(id)arg1 ;
-(void)addAliases:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addRegistrationDelegate:(id)arg0 queue:(id)arg1 ;
-(void)authenticateAccount;
-(void)deactivateAndPurgeIdentify;
-(void)dealloc;
-(void)forceRemoveAccount;
-(void)passwordUpdated;
-(void)refreshRegistrationForAccount:(id)arg0 ;
-(void)registerAccount;
-(void)removeAliases:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeRegistrationDelegate:(id)arg0 ;
-(void)setAuthToken:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)unregisterAccount;
-(void)unvalidateAliases:(id)arg0 ;
-(void)updateAccountWithAccountInfo:(id)arg0 ;
-(void)updateAuthorizationCredentials:(id)arg0 token:(id)arg1 ;
-(void)validateAliases:(id)arg0 ;
-(void)validateProfile;


@end


#endif