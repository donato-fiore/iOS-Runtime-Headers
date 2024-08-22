// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTHORIZATIONCONTEXT_H
#define CNAUTHORIZATIONCONTEXT_H

@class NSNumber, NSString;
@protocol CNAuthorizationContext, CNTCCSimulation, OS_tcc_identity, CNTCC><CNTCCSimulation;

#import <Foundation/Foundation.h>

#import "CNUnfairLock.h"
#import "CNAuditToken.h"

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>



@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // ivar: _assumedIdentity
@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue; // ivar: _authorizationStatusCachedValue
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock; // ivar: _authorizationStatusLock
@property (retain, nonatomic) CNAuditToken *cnAuditToken; // ivar: _cnAuditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue; // ivar: _isClientFirstOrSecondPartyCachedValue
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;
@property (retain, nonatomic) NSNumber *isClientTCCWhitelistedCachedValue; // ivar: _isClientTCCWhitelistedCachedValue
@property (retain, nonatomic) NSNumber *isFirstPartyNotesEntitledCachedValue; // ivar: _isFirstPartyNotesEntitledCachedValue
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // ivar: _isNotesAccessGrantedCachedValue
@property (retain, nonatomic) NSNumber *isThirdPartyNotesEntitledCachedValue; // ivar: _isThirdPartyNotesEntitledCachedValue
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock; // ivar: _notesAccessStatusLock
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue; // ivar: _shouldAlwaysQueryAuthorizationStatusCachedValue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CNTCC><CNTCCSimulation> *tccServices; // ivar: _tccServices


+(BOOL)shouldIgnoreAssumedIdentity:(id)arg0 ;
+(BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)arg0 ;
+(id)bundleIdentifierForAssumedIdentity:(id)arg0 ;
+(id)os_log;
+(id)sharedInstance;
-(BOOL)checkClientIsFirstOrSecondParty;
-(BOOL)checkTCCEntitlementNamesAllowContacts:(id)arg0 ;
-(BOOL)doesClientHaveEntitlement:(id)arg0 ;
-(BOOL)isClientTCCCoupledProcess;
-(BOOL)isClientTCCKilledOnAuthorizationChange;
-(BOOL)isClientTCCUncoupledProcess;
-(BOOL)isFirstPartyNotesEntitled;
-(BOOL)isFirstPartyNotesEntitledImpl;
-(BOOL)isGreenTeaDevice;
-(BOOL)isThirdPartyNotesEntitled;
-(BOOL)isThirdPartyNotesEntitledImpl;
-(BOOL)isUnitTesting;
-(BOOL)requestAccessWithError:(*id)arg0 ;
-(BOOL)shouldAlwaysQueryAuthorizationStatus;
-(BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
-(NSInteger)resolveRequestAuthorizationFuture:(id)arg0 ;
-(id)errorForStatus:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 ;
-(id)initWithAuditToken:(id)arg0 assumedIdentity:(id)arg1 tccServices:(id)arg2 ;
-(id)requestAuthorizationFuture:(NSInteger)arg0 ;
-(void)requestAuthorization:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)simulateStatus:(NSInteger)arg0 ;
-(void)stopSimulation;
-(void)updateCachedAuthorizationStatusIfNeeded;
-(void)updateCachedNotesAccessGrantedIfNeeded;


@end


#endif