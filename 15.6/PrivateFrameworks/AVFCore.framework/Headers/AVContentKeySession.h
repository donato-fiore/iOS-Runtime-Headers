// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONTENTKEYSESSION_H
#define AVCONTENTKEYSESSION_H

@class NSData, NSString, NSURL;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVContentKeySessionInternal.h"
#import "AVContentKeyReportGroup.h"

@interface AVContentKeySession : NSObject {
    AVContentKeySessionInternal *_session;
}


@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly) AVContentKeyReportGroup *defaultContentKeyGroup;
@property (readonly, weak) NSObject<AVContentKeySessionDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly) NSString *keySystem;
@property (readonly) NSURL *storageURL;


+(id)_uniqueIDForCyptorUUID:(id)arg0 cryptorKeyRequestID:(NSUInteger)arg1 ;
+(id)contentKeySessionWithKeySystem:(id)arg0 ;
+(id)contentKeySessionWithKeySystem:(id)arg0 storageDirectoryAtURL:(id)arg1 ;
+(id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg0 storageDirectoryAtURL:(id)arg1 ;
+(struct OpaqueFigSecureStopManager *)copyDefaultSecureStopManagerForAppIdentifier:(id)arg0 storageDirectoryAtURL:(id)arg1 ;
+(void)initialize;
+(void)removePendingExpiredSessionReports:(id)arg0 withAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
-(?)createAndInstallCustomURLHandlerForAssetoutHandler;
-(BOOL)clientCanReceivePersistableContentKeyRequest;
-(BOOL)hasProtector;
-(id)_contentKeyGroups;
-(id)_contentKeyRequestForCryptorUUID:(id)arg0 cryptorKeyRequestID:(NSUInteger)arg1 ;
-(id)_internalQueue;
-(id)_weakReference;
-(id)contentKeyRecipients;
-(id)description;
-(id)init;
-(id)initWithKeySystem:(id)arg0 storageDirectoryAtURL:(id)arg1 ;
-(id)initWithKeySystem:(id)arg0 storageDirectoryAtURL:(id)arg1 internal:(BOOL)arg2 ;
-(id)initWithStorageDirectoryAtURL:(id)arg0 ;
-(id)issueContentKeyRequestForInitializationData:(id)arg0 ;
-(id)makeContentKeyGroup;
-(int)setAppIdentifier:(id)arg0 ;
-(struct OpaqueFigCPECryptor *)copyCryptorForCryptKeyAttributes:(id)arg0 ;
-(struct OpaqueFigCPECryptor *)copyCryptorForInitializationData:(id)arg0 ;
-(struct OpaqueFigCPECryptor *)createCryptorIfNecessaryForInitializationData:(id)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 error:(*id)arg2 ;
-(void)_handleContentProtectionSessionIdentifierDidChange:(id)arg0 ;
-(void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:(id)arg0 ;
-(void)_handleKeyResponseError:(id)arg0 forCryptorUUID:(id)arg1 andCryptorKeyRequestID:(NSUInteger)arg2 ;
-(void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg0 andCryptorKeyRequestID:(NSUInteger)arg1 ;
-(void)_handleRequest:(struct __CFDictionary *)arg0 withRequestID:(NSUInteger)arg1 fromHandler:(struct OpaqueFigCustomURLHandler *)arg2 willHandleRequest:(*BOOL)arg3 ;
-(void)_handleSecureStopDidFinalizeRecordCallback;
-(void)_handleUpdateToPersistentKey:(id)arg0 forKeyIdentifier:(id)arg1 ;
// -(void)_invokeDelegateCallbackWithBlock:(id)arg0 synchronouslyWhenDelegateQueueIsNULL:(unk)arg1  ;
-(void)_removeContentKeyRequestForCryptorUUID:(id)arg0 cryptorKeyRequestID:(NSUInteger)arg1 ;
-(void)_sendFinishLoadingForPreloadedKeyRequest:(struct __CFDictionary *)arg0 withRequestID:(NSUInteger)arg1 fromHandler:(struct OpaqueFigCustomURLHandler *)arg2 error:(id)arg3 ;
-(void)_setContentKeyRequest:(id)arg0 forCryptorUUID:(id)arg1 cryptorKeyRequestID:(NSUInteger)arg2 ;
-(void)_setWeakReferenceForContentKeyRequest:(id)arg0 withCryptorUUID:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(void)addContentKeyRecipient:(id)arg0 ;
-(void)contentKeyRequestDidProduceContentKey:(id)arg0 ;
-(void)dealloc;
-(void)expire;
-(void)invalidateAllPersistableContentKeysForApp:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidatePersistableContentKey:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)issueContentKeyRequest:(id)arg0 ;
-(void)issueContentKeyRequest:(id)arg0 toDelegateWithCallbackSelector:(SEL)arg1 ;
-(void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg0 identifier:(id)arg1 requestInfo:(struct __CFDictionary *)arg2 requestID:(NSUInteger)arg3 providesPersistableKey:(BOOL)arg4 ;
-(void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg0 identifier:(id)arg1 initializationData:(id)arg2 providesPersistableKey:(BOOL)arg3 ;
-(void)issueContentKeyRequests:(id)arg0 forInitializationData:(id)arg1 ;
-(void)issuePersistableContentKeyRequest:(id)arg0 ;
-(void)issueRenewableContentKeyRequest:(id)arg0 ;
-(void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)processContentKeyRequestWithIdentifier:(id)arg0 initializationData:(id)arg1 options:(id)arg2 ;
-(void)removeContentKeyRecipient:(id)arg0 ;
-(void)renewExpiringResponseDataForContentKeyRequest:(id)arg0 ;


@end


#endif