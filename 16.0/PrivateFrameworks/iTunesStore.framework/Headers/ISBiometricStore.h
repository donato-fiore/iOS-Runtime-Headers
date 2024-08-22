// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISBIOMETRICSTORE_H
#define ISBIOMETRICSTORE_H

@class NSCache, NSLock, NSNumber;

#import <Foundation/Foundation.h>


@interface ISBiometricStore : NSObject {
    NSCache *_contextCache;
    NSLock *_lock;
}


@property NSInteger biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;


+(BOOL)isActionSupported:(NSInteger)arg0 withBiometricAuthenticationContext:(id)arg1 ;
+(BOOL)shouldUseApplePayClassic;
+(BOOL)shouldUseAutoEnrollment;
+(BOOL)shouldUseExtendedEnrollment;
+(BOOL)shouldUseUpsellEnrollment;
+(BOOL)shouldUseX509;
+(BOOL)tokenUpdateShouldStartWithLogKey:(id)arg0 ;
+(NSInteger)tokenUpdateState;
+(id)applePayClassicNetworks;
+(id)countryCode;
+(id)diskBasedPaymentSheet;
+(id)keychainLabelForAccountID:(id)arg0 purpose:(NSInteger)arg1 ;
+(id)keychainLabelForCertWithAccountID:(id)arg0 purpose:(NSInteger)arg1 ;
+(id)keychainLabelForKeyWithAccountID:(id)arg0 purpose:(NSInteger)arg1 ;
+(id)sharedInstance;
+(void)tokenUpdateDidFinishWithLogKey:(id)arg0 ;
-(BOOL)canPerformBiometricOptIn;
-(BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg0 ;
-(BOOL)deleteKeychainTokensForAccountIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isIdentityMapValidForAccountIdentifier:(id)arg0 ;
-(NSInteger)biometricAvailabilityForAccountIdentifier:(id)arg0 ;
-(NSUInteger)identityMapCount;
-(NSUInteger)keyCountForAccountIdentifier:(id)arg0 ;
-(id)createAttestationDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 error:(*id)arg2 ;
-(id)createX509CertChainDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 error:(*id)arg2 ;
-(id)fetchContextFromCacheWithToken:(id)arg0 evict:(BOOL)arg1 ;
-(id)init;
-(id)publicKeyDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 error:(*id)arg2 ;
-(id)signData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)x509CertChainDataForAccountIdentifier:(id)arg0 purpose:(NSInteger)arg1 regenerateCerts:(BOOL)arg2 error:(*id)arg3 ;
-(void)addContextToCache:(id)arg0 withToken:(id)arg1 ;
-(void)clearLastRegisteredAccountIdentifier;
-(void)registerAccountIdentifier:(id)arg0 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg0 ;


@end


#endif