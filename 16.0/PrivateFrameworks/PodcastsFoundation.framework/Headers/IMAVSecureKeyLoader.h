// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAVSECUREKEYLOADER_H
#define IMAVSECUREKEYLOADER_H

@class ACAccount, NSString, AVContentKeySession, AVURLAsset, NSData;
@protocol AVContentKeySessionDelegate, IMAVSecureKeyLoaderDelegate, OS_dispatch_queue, MTSecureKeyRequestHandler, MTSecureKeyRequestStorage, NSURLSessionDelegate><AMSURLProtocolDelegate;

#import <Foundation/Foundation.h>

#import "MTContentKeyRequest.h"

@interface IMAVSecureKeyLoader : NSObject <AVContentKeySessionDelegate>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *contentAdamId; // ivar: _contentAdamId
@property (retain, nonatomic) AVContentKeySession *contentKeySession; // ivar: _contentKeySession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMAVSecureKeyLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRenewal; // ivar: _isRenewal
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keyLoaderQueue; // ivar: _keyLoaderQueue
@property (copy, nonatomic) id *pendingCompletion; // ivar: _pendingCompletion
@property (retain, nonatomic) AVURLAsset *recipient; // ivar: _recipient
@property (retain, nonatomic) NSData *savedRequestDataToUseForStopping; // ivar: _savedRequestDataToUseForStopping
@property (retain, nonatomic) MTContentKeyRequest *savedRequestToUseForStopping; // ivar: _savedRequestToUseForStopping
@property (retain, nonatomic) NSObject<MTSecureKeyRequestHandler> *secureKeyRequestHandler; // ivar: _secureKeyRequestHandler
@property (retain, nonatomic) NSObject<MTSecureKeyRequestStorage> *secureKeyRequestStorage; // ivar: _secureKeyRequestStorage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSURLSessionDelegate><AMSURLProtocolDelegate> *urlProtocolDelegate; // ivar: _urlProtocolDelegate
@property (nonatomic) NSUInteger useCase; // ivar: _useCase


-(BOOL)_isOfflineAsset;
-(id)initWithRecipient:(id)arg0 useCase:(NSUInteger)arg1 account:(id)arg2 urlProtocolDelegate:(id)arg3 ;
-(void)cleanupAfterContentKeyRequestForOfflineRenewal:(BOOL)arg0 withError:(id)arg1 ;
-(void)cleanupAfterContentKeyRequestWithError:(id)arg0 ;
-(void)contentKeySession:(id)arg0 contentKeyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)contentKeySession:(id)arg0 contentKeyRequestDidSucceed:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideRenewingContentKeyRequest:(id)arg1 ;
-(void)finishContentKeyRequest:(id)arg0 forOfflineRenewal:(BOOL)arg1 withResponse:(id)arg2 ;
-(void)finishContentKeyRequest:(id)arg0 withResponse:(id)arg1 ;
-(void)invalidateAndCancel;
-(void)requestKeyResponseFromContentKeyRequest:(id)arg0 requestType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)securelyInvalidateOfflineDataForRequests:(id)arg0 completion:(id)arg1 ;
-(void)sendStopRequestForStreamingLicenseIfNecessary;
-(void)startKeyLoadingProcessWithKeyIdentifier:(id)arg0 contentAdamId:(id)arg1 isRenewal:(BOOL)arg2 completion:(id)arg3 ;
-(void)startKeyLoadingProcessWithKeyRequestData:(id)arg0 isRenewal:(BOOL)arg1 completion:(id)arg2 ;
-(void)timeoutKeyRequest;


@end


#endif