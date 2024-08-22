// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTHORIZATIONCONTEXT_H
#define CNAUTHORIZATIONCONTEXT_H

@class NSNumber;
@protocol CNTCCSimulation, CNTCC><CNTCCSimulation;

#import <Foundation/Foundation.h>

#import "CNAuditToken.h"

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>



@property (retain, nonatomic) CNAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue; // ivar: _authorizationStatusCachedValue
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue; // ivar: _isClientFirstOrSecondPartyCachedValue
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // ivar: _isNotesAccessGrantedCachedValue
@property (retain, nonatomic) NSObject<CNTCC><CNTCCSimulation> *tccServices; // ivar: _tccServices


+(id)os_log;
+(id)sharedInstance;
-(BOOL)checkIsClientNotesEntitled;
-(BOOL)checkIsClientTCCWhitelisted;
-(BOOL)requestAccessWithError:(*id)arg0 ;
-(NSInteger)resolveRequestAuthorizationFuture:(id)arg0 ;
-(id)checkIfNotesAccessGranted;
-(id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
-(id)errorForStatus:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithCNAuditToken:(id)arg0 tccServices:(id)arg1 ;
-(id)requestAuthorizationFuture:(NSInteger)arg0 ;
-(void)checkAndUpdateAuthorizationStatusIfUnknown;
-(void)requestAuthorization:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)simulateStatus:(NSInteger)arg0 ;
-(void)stopSimulation;


@end


#endif