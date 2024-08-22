// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAAPICOLLECTIONITEMAUTHTOKENRENEWALREQUEST_H
#define MPMEDIAAPICOLLECTIONITEMAUTHTOKENRENEWALREQUEST_H

@class ICMusicKitRequestContext, NSProgress, NSMutableArray, NSUUID, NSString;
@protocol MPMediaAPIMetadaRequestProtocol, OS_dispatch_queue, MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

#import <Foundation/Foundation.h>

#import "MPPropertySet.h"

@interface MPMediaAPICollectionItemAuthTokenRenewalRequest : NSObject <MPMediaAPIMetadaRequestProtocol>

 {
    ICMusicKitRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSProgress *_progress;
    NSMutableArray *_failedItemIdentifiers;
    NSMutableArray *_itemIdentifiersForRequest;
    NSInteger _requestItemCount;
    BOOL _isCancelled;
    NSUUID *_requestIdentifier;
    MPPropertySet *_requestPropertySet;
    NSString *_personID;
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
-(id)_itemIDsFromRequestIdentifiers;
-(id)initWithItemIdentifiers:(id)arg0 personID:(id)arg1 requestContext:(id)arg2 trustProvider:(id)arg3 ;
-(void)_notifyBatchProgressWithResponseDictionary:(id)arg0 tokenHalfLifeDuration:(CGFloat)arg1 error:(id)arg2 finalResponse:(BOOL)arg3 progressHandler:(id)arg4 ;
-(void)_renewPlaybackAuthorizationTokensForBatch:(id)arg0 progressHandler:(id)arg1 ;
-(void)_resolveRequestItemsWithSOD:(id)arg0 ;
-(void)cancelRequest;
-(void)executeRequestWithBatchProgressHandler:(id)arg0 ;


@end


#endif