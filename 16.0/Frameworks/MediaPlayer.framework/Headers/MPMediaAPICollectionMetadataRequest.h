// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAAPICOLLECTIONMETADATAREQUEST_H
#define MPMEDIAAPICOLLECTIONMETADATAREQUEST_H

@class ICMusicKitRequestContext, NSString, NSProgress, NSUUID;
@protocol MPMediaAPIMetadaRequestProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPMediaAPICollectionMetadataRequest : NSObject <MPMediaAPIMetadaRequestProtocol>

 {
    ICMusicKitRequestContext *_requestContext;
    NSString *_storeItemID;
    NSInteger _collectionType;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSString *_requestObjectStoreIdentifier;
    BOOL _isCancelled;
    NSUUID *_requestIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSInteger requestItemCount;
@property (readonly, nonatomic) BOOL shouldResolveRequestItemsLocally;
@property (readonly) Class superclass;


-(id)initWithStoreID:(id)arg0 collectionType:(NSInteger)arg1 requestContext:(id)arg2 ;
-(void)_fetchContainerItemMetadataWithBatchProgressHandler:(id)arg0 ;
-(void)_notifyBatchProgressWithResponseDictionary:(id)arg0 tokenHalfLifeDuration:(CGFloat)arg1 error:(id)arg2 finalResponse:(BOOL)arg3 progressHandler:(id)arg4 ;
-(void)cancelRequest;
-(void)executeRequestWithBatchProgressHandler:(id)arg0 ;


@end


#endif