// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPACCOUNTREPRESENTATION_H
#define CDPACCOUNTREPRESENTATION_H

@class NSString, AKAccountManager, ACAccountStore, ACAccount;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPAccountRepresentation : NSObject

@property (readonly, copy, nonatomic) NSString *DSID;
@property (retain, nonatomic) AKAccountManager *accountManager; // ivar: _accountManager
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (readonly, nonatomic) ACAccount *authKitAccount; // ivar: _authKitAccount
@property (readonly, copy, nonatomic) NSString *authenticationToken;
@property (readonly, copy, nonatomic) NSString *escrowURLString;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) CDPContext *generatedContext;
@property (readonly, copy, nonatomic) NSString *iCloudEnvironment;
@property (readonly, nonatomic) BOOL isBeneficiary;
@property (readonly, nonatomic) BOOL isICDPEnabled;
@property (readonly, nonatomic) BOOL isSilentEscrowRecordRepairEnabled;
@property (readonly, nonatomic) NSUInteger securityLevel;
@property (readonly, nonatomic) BOOL shouldPerformSilentEscrowRecordRepair;
@property (readonly, copy, nonatomic) NSString *stashedPRK;
@property (readonly, copy, nonatomic) NSString *username;


+(id)representationForAccount:(id)arg0 ;
+(id)representationForAltDSID:(id)arg0 ;
+(id)representationForPrimaryAccount;
-(BOOL)isICDPEnabledByCheckingWithServer:(BOOL)arg0 ;
-(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 staleModifiedDate:(id)arg2 account:(id)arg3 isStale:(*BOOL)arg4 ;
-(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 valueProducer:(id)arg2 ;
// -(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 valueProducer:(id)arg2 checkForStale:(unk)arg3 account:(BOOL)arg4  ;
// -(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 valueProducer:(id)arg2 checkForStale:(unk)arg3 account:(BOOL)arg4 saveHandler:(id)arg5  ;
// -(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 valueProducer:(id)arg2 saveHandler:(unk)arg3  ;
// -(id)_cachedPropertyValueOfClass:(Class)arg0 forKey:(id)arg1 valueProducer:(id)arg2 staleModifiedDate:(unk)arg3 account:(id)arg4 saveHandler:(id)arg5  ;
-(id)_deserializedPropertyDictionaryForData:(id)arg0 withPropertyValueOfClass:(Class)arg1 error:(*id)arg2 ;
-(id)_serializedPropertyDictionaryWithValue:(id)arg0 lastModifiedDate:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 accountStore:(id)arg1 accountManager:(id)arg2 ;
-(void)_cachePropertyValue:(id)arg0 forKey:(id)arg1 lastModifiedDate:(id)arg2 account:(id)arg3 saveHandler:(id)arg4 ;
-(void)silentEscrowRecordRepairEnabledWithCompletion:(id)arg0 ;


@end


#endif