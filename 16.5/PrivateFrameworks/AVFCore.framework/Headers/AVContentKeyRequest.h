// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTENTKEYREQUEST_H
#define AVCONTENTKEYREQUEST_H

@class NSError, NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVContentKeyRequestInternal.h"
#import "AVContentKey.h"
#import "AVContentKeySpecifier.h"

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal *_contentKeyRequest;
}


@property (readonly) BOOL canProvidePersistableContentKey;
@property (readonly) AVContentKey *contentKey;
@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) NSError *error;
@property (readonly) id *identifier;
@property (readonly, nonatomic) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) NSInteger status;


+(BOOL)_prepareCryptor:(struct OpaqueFigCPECryptor *)arg0 forRenewal:(BOOL)arg1 andReturnKeyRequestID:(*NSUInteger)arg2 isInchargeOfKeyRequest:(*BOOL)arg3 error:(*id)arg4 ;
+(id)_createKeyRequestDictionaryForApp:(id)arg0 persistentKey:(id)arg1 serverChallenge:(id)arg2 cryptorKeyRequestID:(NSUInteger)arg3 purpose:(int)arg4 ;
+(id)_ensureProtocolVersionList:(id)arg0 ;
+(id)_mergePreloadingRequestOptions:(id)arg0 withCreateKeyRequestOptions:(id)arg1 ;
+(void)_validateHLSEncryptionMethod:(id)arg0 ;
+(void)_validateProtocolVersionList:(id)arg0 ;
+(void)_validateServerChallenge:(id)arg0 ;
-(BOOL)_canRespondByRequestingPersistableContentKeyRequest;
-(BOOL)_prepareForKeyRenewalReturningError:(*id)arg0 ;
-(BOOL)_processContentKeyResponse:(id)arg0 renewalDate:(id)arg1 initalizationVector:(id)arg2 error:(*id)arg3 ;
-(BOOL)ensureCryptorWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 error:(*id)arg1 ;
-(BOOL)processContentKeyResponseData:(id)arg0 renewalDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)renewsExpiringResponseData;
-(BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(*id)arg0 ;
-(BOOL)setReportGroup:(id)arg0 ;
-(BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)arg0 ;
-(NSInteger)_requestID;
-(NSInteger)externalContentProtectionStatus;
-(id)_getRetryReasonForError:(int)arg0 ;
-(id)_keySystem;
-(id)_makeStreamingContentKeyRequestDataForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)contentKeyRequestDataForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithContentKeySession:(id)arg0 contentKeyBoss:(struct CMBaseObject *)arg1 useContentKeyBoss:(BOOL)arg2 keySpecifier:(struct FigContentKeySpecifier *)arg3 initializationData:(id)arg4 keyIDFromInitializationData:(id)arg5 contentIdentifier:(id)arg6 isRenewalRequest:(BOOL)arg7 requestID:(NSInteger)arg8 providesPersistableKey:(BOOL)arg9 preloadingRequestOptions:(id)arg10 identifier:(id)arg11 ;
-(id)initWithContentKeySession:(id)arg0 reportGroup:(id)arg1 customURLHandler:(struct OpaqueFigCustomURLHandler *)arg2 identifier:(id)arg3 requestInfo:(struct __CFDictionary *)arg4 requestID:(NSUInteger)arg5 providesPersistableKey:(BOOL)arg6 isRenewalRequest:(BOOL)arg7 ;
-(id)initWithContentKeySession:(id)arg0 reportGroup:(id)arg1 identifier:(id)arg2 contentIdentifier:(id)arg3 keyIDFromInitializationData:(id)arg4 initializationData:(id)arg5 preloadingRequestOptions:(id)arg6 providesPersistableKey:(BOOL)arg7 ;
-(id)session;
-(int)_encryptionMode;
-(struct CMBaseObject *)_copyContentKeyBoss;
-(struct OpaqueFigCPECryptor *)figCryptor;
-(void)_clearContext;
-(void)_copyAndStoreCryptorUUID;
-(void)_finishLoadingCustomURLRequestWithError:(id)arg0 ;
-(void)_finishLoadingCustomURLRequestWithResponseData:(id)arg0 renewalDate:(id)arg1 ;
-(void)_handleKeyResponseError:(id)arg0 ;
-(void)_handleKeyResponseSuccessWithCryptor:(struct OpaqueFigCPECryptor *)arg0 ;
-(void)_processContentKeyResponseError:(id)arg0 ;
-(void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)arg0 ;
-(void)dealloc;
-(void)makeStreamingContentKeyRequestDataForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)processContentKeyResponse:(id)arg0 ;
-(void)processContentKeyResponseData:(id)arg0 ;
-(void)processContentKeyResponseError:(id)arg0 ;
-(void)renewExpiringContentKeyResponseData;
-(void)respondByRequestingPersistableContentKeyRequest;


@end


#endif