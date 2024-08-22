// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPCONTENTKEYSESSION_H
#define TVPCONTENTKEYSESSION_H

@class AVContentKeySession, NSString, NSMutableArray, NSArray;
@protocol AVContentKeySessionDelegate, TVPContentKeyLoading;

#import <Foundation/Foundation.h>


@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate>



@property (retain, nonatomic) NSObject<TVPContentKeyLoading> *contentKeyLoader; // ivar: _contentKeyLoader
@property (retain, nonatomic) AVContentKeySession *contentKeySession; // ivar: _contentKeySession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *keyRequestsInProgress; // ivar: _keyRequestsInProgress
@property (copy, nonatomic) id *offlineKeyGenerationCompletionHandler; // ivar: _offlineKeyGenerationCompletionHandler
@property (nonatomic) BOOL offlineKeyGenerationIsForRenewal; // ivar: _offlineKeyGenerationIsForRenewal
@property (retain, nonatomic) NSArray *offlineKeyIdentifiersInProgress; // ivar: _offlineKeyIdentifiersInProgress
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithContentKeyLoader:(id)arg0 avAsset:(id)arg1 ;
-(void)_finishOfflineKeyGeneration;
-(void)_generateOfflineKeyRequestsForIdentifiers:(id)arg0 isRenewal:(BOOL)arg1 completion:(id)arg2 ;
-(void)_loadAVContentKeyRequests:(id)arg0 type:(NSInteger)arg1 isRenewal:(BOOL)arg2 ;
-(void)_timeoutOfflineKeyRequestGeneration;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideRenewingContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didUpdatePersistableContentKey:(id)arg1 forContentKeyIdentifier:(id)arg2 ;
-(void)fetchOfflineKeysForParams:(id)arg0 completion:(id)arg1 ;
-(void)finishKeyRequest:(id)arg0 ;
-(void)generateOfflineKeyRequestsForIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)makeSecureInvalidationDataForOfflineKeyData:(id)arg0 nonceData:(id)arg1 completion:(id)arg2 ;


@end


#endif