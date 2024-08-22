// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSACCOUNT_H
#define IDSACCOUNT_H

@class NSDictionary, NSArray, NSDate, NSString, NSData;

#import <Foundation/Foundation.h>

#import "_IDSAccount.h"

@interface IDSAccount : NSObject {
    _IDSAccount *_internal;
}


@property (readonly, retain, nonatomic) _IDSAccount *_internal;
@property (nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property (retain, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) NSArray *accountRegisteredURIs;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSArray *aliasStrings;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isUsableForOuterMessaging;
@property (readonly, nonatomic) BOOL isUserDisabled;
@property (retain, nonatomic) NSString *loginID; // ivar: _loginID
@property (readonly, nonatomic) NSArray *nearbyDevices;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) int profileValidationErrorReason;
@property (readonly, nonatomic) NSInteger profileValidationStatus;
@property (readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property (readonly, nonatomic) NSArray *pseudonyms;
@property (readonly, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *regionBasePhoneNumber;
@property (retain, nonatomic) NSString *regionID;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *userUniqueIdentifier;
@property (readonly, nonatomic) NSArray *vettedAliases;


-(id)_initWithDictionary:(id)arg0 uniqueID:(id)arg1 serviceName:(id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 uniqueID:(id)arg1 serviceName:(id)arg2 ;
-(id)initWithLoginID:(id)arg0 uniqueID:(id)arg1 serviceName:(id)arg2 ;
-(id)matchingSim;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(void)_reregisterAndReidentify:(BOOL)arg0 ;
-(void)addAliases:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)addRegistrationDelegate:(id)arg0 queue:(id)arg1 ;
-(void)authenticateAccount;
-(void)deactivateAndPurgeIdentify;
-(void)dealloc;
-(void)forceRemoveAccount;
-(void)passwordUpdated;
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