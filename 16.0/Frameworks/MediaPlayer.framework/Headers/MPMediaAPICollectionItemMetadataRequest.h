// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAAPICOLLECTIONITEMMETADATAREQUEST_H
#define MPMEDIAAPICOLLECTIONITEMMETADATAREQUEST_H

@class ICMusicKitRequestContext, NSProgress, NSMutableArray, NSString, NSUUID;
@protocol MPMediaAPIMetadaRequestProtocol, OS_dispatch_queue, MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

#import <Foundation/Foundation.h>


@interface MPMediaAPICollectionItemMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol>

 {
    ICMusicKitRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSMutableArray *_failedItemIdentifiers;
    NSMutableArray *_itemIDsForRequest;
    NSInteger _requestItemCount;
    NSString *_personID;
    NSUUID *_requestIdentifier;
    BOOL _isCancelled;
    BOOL _isSparseRequest;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> *_trustProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSInteger requestItemCount;
@property (readonly, nonatomic) BOOL shouldResolveRequestItemsLocally;
@property (readonly) Class superclass;


-(id)_getNextBatchBatch;
-(id)initWithItemIdentifiers:(id)arg0 personID:(id)arg1 requestContext:(id)arg2 sparseRequest:(BOOL)arg3 trustProvider:(id)arg4 ;
-(void)_fetchContainerItemMetadataForBatch:(id)arg0 progressHandler:(id)arg1 ;
-(void)_notifyBatchProgressWithResponseDictionary:(id)arg0 tokenHalfLifeDuration:(CGFloat)arg1 error:(id)arg2 finalResponse:(BOOL)arg3 progressHandler:(id)arg4 ;
-(void)_resolveRequestItemsWithSOD:(id)arg0 ;
-(void)cancelRequest;
-(void)executeRequestWithBatchProgressHandler:(id)arg0 ;


@end


#endif