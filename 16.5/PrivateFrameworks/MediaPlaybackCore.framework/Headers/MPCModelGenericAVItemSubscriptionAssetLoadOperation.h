// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELGENERICAVITEMSUBSCRIPTIONASSETLOADOPERATION_H
#define MPCMODELGENERICAVITEMSUBSCRIPTIONASSETLOADOPERATION_H

@class MPAsyncOperation, ICStoreRequestContext, ICMusicSubscriptionLeaseSession;
@protocol OS_dispatch_queue;


#import "MPCModelGenericAVItemAssetLoadProperties.h"

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id *_cancellationHandler;
}


@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // ivar: _assetLoadProperties
@property (nonatomic) NSInteger operationType; // ivar: _operationType
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) ICMusicSubscriptionLeaseSession *subscriptionLeaseSession; // ivar: _subscriptionLeaseSession


-(BOOL)_canRetrieveLoadResultsFromMiniSinfWithAssets:(*id)arg0 ;
-(BOOL)_canRetrieveLoadResultsFromServerObjectDatabaseWithAssets:(*id)arg0 hlsAsset:(*id)arg1 ;
-(id)_handlePlaybackResponse:(id)arg0 withPlaybackCacheRequest:(id)arg1 error:(*id)arg2 ;
-(id)_loadResultsFromServerObjectDatabaseAssets:(id)arg0 hlsAsset:(id)arg1 playbackAuthorizationToken:(id)arg2 ;
-(id)_loadResultsFromServerObjectDatabaseAssetsWithMiniSinf:(id)arg0 playbackAuthorizationToken:(id)arg1 ;
-(id)cancellationHandler:(SEL)arg0 ;
-(id)description;
-(id)init;
-(void)cancel;
-(void)execute;
-(void)setCancellationHandler:(id)arg0 ;


@end


#endif