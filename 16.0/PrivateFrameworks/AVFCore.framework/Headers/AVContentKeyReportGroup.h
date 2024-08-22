// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTENTKEYREPORTGROUP_H
#define AVCONTENTKEYREPORTGROUP_H

@class NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVContentKeyReportGroup : NSObject {
    AVWeakReference *_contentKeySessionWeakReference;
    *OpaqueFigContentKeySession _figContentKeySession;
    NSData *_protectorSessionIdentifier;
    NSMutableArray *_cryptorsList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_keySystem;
    NSInteger _groupID;
    BOOL _isExpired;
    *OpaqueFigCFWeakReferenceHolder _weakContentKeyBoss;
}


@property (readonly) NSData *contentProtectionSessionIdentifier;


-(BOOL)_associateRequestWithGroupWithRequestID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_destroyContentKeyGroupWithError:(*id)arg0 ;
-(BOOL)_setAuthorizationToken:(id)arg0 forIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)associateContentKeyRequest:(id)arg0 ;
-(BOOL)hasProtector;
-(id)_contentKeySession;
-(id)_processContentKeyRequestWithIdentifier:(id)arg0 contentIdentifier:(id)arg1 keyIDFromInitializationData:(id)arg2 initializationData:(id)arg3 options:(id)arg4 ;
-(id)_processContentKeyRequestWithKeyRequestFromPSSH:(id)arg0 decryptFormatType:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(id)cryptorOptionsForIdentifier:(id)arg0 initializationData:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 hlsMethod:(id)arg3 ;
-(id)initWithKeySystem:(id)arg0 keySession:(id)arg1 contentKeyBoss:(struct CMBaseObject *)arg2 groupID:(NSInteger)arg3 storageDirectoryAtURL:(id)arg4 ;
-(int)configureAppIdentifier:(id)arg0 ;
-(int)externalProtectionStatusForCryptor:(struct OpaqueFigCPECryptor *)arg0 withDisplays:(id)arg1 ;
-(struct CMBaseObject *)_contentKeyBoss;
-(struct OpaqueFigCPECryptor *)copyCryptorForCryptKeyAttributes:(id)arg0 ;
-(struct OpaqueFigCPECryptor *)copyCryptorForIdentifier:(id)arg0 initializationData:(id)arg1 ;
-(struct OpaqueFigCPECryptor *)createCryptorIfNecessaryForIdentifier:(id)arg0 initializationData:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 hlsMethod:(id)arg3 error:(*id)arg4 ;
-(struct OpaqueFigContentKeySession *)_figContentKeySession;
-(void)createProtectorSessionIdentifierIfNecessary;
-(void)dealloc;
-(void)expire;
-(void)failProcessingContentKeyRequestWithIdentifier:(id)arg0 initializationData:(id)arg1 error:(id)arg2 ;
-(void)processContentKeyRequestWithIdentifier:(id)arg0 initializationData:(id)arg1 options:(id)arg2 ;


@end


#endif