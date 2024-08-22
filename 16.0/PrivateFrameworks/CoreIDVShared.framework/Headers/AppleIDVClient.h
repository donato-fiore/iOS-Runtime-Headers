// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPLEIDVCLIENT_H
#define APPLEIDVCLIENT_H


#import <Foundation/Foundation.h>


@interface AppleIDVClient : NSObject



+(id)prepareUnboundACLForBinding:(struct __SecAccessControl *)arg0 withConstraints:(id)arg1 ;
+(unsigned int)_getUUIDsFromACL:(id)arg0 intoArray:(*id)arg1 ;
+(unsigned int)_requireDoublePressOnACL:(id)arg0 intoACL:(*id)arg1 ;
+(unsigned int)appleIDVAuthorizePresentment:(id)arg0 withLAContextData:(id)arg1 onSESlot:(NSInteger)arg2 andPayloadDigest:(id)arg3 ;
+(unsigned int)appleIDVAuthorizePresentment:(id)arg0 withLAContextData:(id)arg1 onSESlot:(NSInteger)arg2 andPublicKey:(id)arg3 ;
+(unsigned int)appleIDVCredentialAuthenticationTokenStatus;
+(unsigned int)appleIDVEstablishPrearmTrustWithCertificate:(id)arg0 protectedPublicKey:(*id)arg1 ;
+(unsigned int)appleIDVGenerateNonceOnWatch:(*id)arg0 ;
+(unsigned int)appleIDVGeneratePhoneTokenWithNonce:(id)arg0 withReferenceACLBlob:(id)arg1 keyBlob:(id)arg2 phoneToken:(*id)arg3 ;
+(unsigned int)appleIDVGeneratePrearmTrustKeyForWatchAndCopyPrivateKey:(id)arg0 encryptedPrivateKey:(*id)arg1 attestation:(*id)arg2 publicKey:(*id)arg3 keyBlob:(*id)arg4 ;
+(unsigned int)appleIDVGetStatus:(*NSInteger)arg0 andSIDVVersion:(*id)arg1 andAppleIDVVersion:(*id)arg2 ;
+(unsigned int)appleIDVGetStatus:(*NSInteger)arg0 andVersion:(*id)arg1 ;
+(unsigned int)appleIDVPersistACLBlob:(id)arg0 intoBlob:(*id)arg1 returnBioUUIDs:(*id)arg2 ;
+(unsigned int)appleIDVPersistACLBlob:(id)arg0 intoBlob:(*id)arg1 returnBioUUIDs:(*id)arg2 andRequireDoublePress:(unsigned char)arg3 ;
+(unsigned int)appleIDVPersistModifiedACLBlob:(id)arg0 withReferenceACLBlob:(id)arg1 withLAContextData:(id)arg2 intoBlob:(*id)arg3 returnBioUUIDs:(*id)arg4 ;
+(unsigned int)appleIDVPersistModifiedSESlot:(NSInteger)arg0 withReferenceBlob:(id)arg1 withLAContextData:(id)arg2 intoBlob:(*id)arg3 ;
+(unsigned int)appleIDVPrearmCredentialWithAuthorizationToken:(id)arg0 protectedPublicKey:(id)arg1 ;
+(unsigned int)appleIDVRecoverPersistedACLBlob:(id)arg0 intoBlob:(*id)arg1 ;
+(unsigned int)appleIDVRevokeCredentialAuthorizationToken;
+(unsigned int)prepareACL:(*id)arg0 aclType:(unsigned int)arg1 forAclUsage:(unsigned int)arg2 forBioUUID:(id)arg3 ;
+(unsigned int)prepareACLForPhoneDecryption:(*id)arg0 withSubType:(unsigned int)arg1 forBioUUID:(id)arg2 ;
+(unsigned int)prepareACLForWatchDecryption:(*id)arg0 withSubType:(unsigned int)arg1 forAclUsage:(unsigned int)arg2 ;
+(unsigned int)prepareUnboundACLForBioBinding:(*id)arg0 ;
+(unsigned int)prepareUnboundACLForPasscodeBinding:(*id)arg0 ;
+(unsigned int)prepareUnboundACLForWatch:(*id)arg0 withAccessibilityEnabled:(BOOL)arg1 ;


@end


#endif