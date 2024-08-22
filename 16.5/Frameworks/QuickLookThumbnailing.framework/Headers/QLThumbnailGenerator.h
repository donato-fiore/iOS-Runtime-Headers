// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILGENERATOR_H
#define QLTHUMBNAILGENERATOR_H

@class NSMutableDictionary;
@protocol QLIncrementalThumbnailGenerationHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "QLThumbnailServiceProxy.h"

@interface QLThumbnailGenerator : NSObject <QLIncrementalThumbnailGenerationHandler>



@property (nonatomic) NSUInteger batchingCount; // ivar: _batchingCount
@property (retain, nonatomic) NSMutableDictionary *pendingCancelledRequests; // ivar: _pendingCancelledRequests
@property (retain, nonatomic) NSMutableDictionary *pendingGenerationRequests; // ivar: _pendingGenerationRequests
@property (retain, nonatomic) NSMutableDictionary *preparingGenerationRequests; // ivar: _preparingGenerationRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestPreparationQueue; // ivar: _requestPreparationQueue
@property (retain, nonatomic) NSMutableDictionary *requests; // ivar: _requests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue; // ivar: _serialResponseQueue
@property (retain, nonatomic) QLThumbnailServiceProxy *syncThumbnailServiceProxy; // ivar: _syncThumbnailServiceProxy
@property (retain, nonatomic) QLThumbnailServiceProxy *thumbnailServiceProxy; // ivar: _thumbnailServiceProxy


+(id)debugDescriptionForErrorCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 request:(id)arg1 additionalUserInfo:(id)arg2 ;
+(id)sharedGenerator;
+(void)initialize;
-(BOOL)__finishRequestIfInvalid:(id)arg0 ;
-(BOOL)__finishRequestIfNeeded:(id)arg0 ;
-(BOOL)__requestWithUUIDIsStillRunning:(id)arg0 ;
-(BOOL)_cancelRequestIfNeeded:(id)arg0 ;
-(BOOL)_finishRequestIfInvalid:(id)arg0 ;
-(BOOL)_finishRequestIfNeeded:(id)arg0 ;
-(BOOL)_isBuildingBatch;
-(BOOL)_queueThumbnailGenerationForRequestIfNeeded:(id)arg0 ;
-(BOOL)_requestRepresentationTypeIsMoreRepresentative:(id)arg0 thanType:(NSInteger)arg1 ;
-(id)__requestWithUUID:(id)arg0 ;
-(id)_requestWithUUID:(id)arg0 ;
-(id)init;
-(id)thumbnailIconForContentType:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconVariant:(NSInteger)arg3 ;
-(id)thumbnailIconForRequest:(id)arg0 ;
-(void)__callCompletionBlockOfRequest:(id)arg0 withError:(id)arg1 ;
-(void)__finishRequest:(id)arg0 withError:(id)arg1 ;
-(void)__finishRequestWithoutError:(id)arg0 ;
-(void)__notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg0 thumbnail:(id)arg1 type:(NSInteger)arg2 error:(id)arg3 ;
-(void)__removeRequestWithUUID:(id)arg0 ;
-(void)_addRequest:(id)arg0 ;
-(void)_callCompletionBlockOfRequest:(id)arg0 withError:(id)arg1 ;
-(void)_callUpdateBlockOfRequestIfRunning:(id)arg0 andUpdateMostRepresentativeThumbnail:(id)arg1 type:(NSInteger)arg2 error:(id)arg3 ;
-(void)_createSyncThumbnailServiceProxy;
-(void)_createThumbnailServiceProxy;
-(void)_finishAllRequestsWithError:(id)arg0 ;
-(void)_finishAndCallCompletionBlockOfRequest:(id)arg0 withError:(id)arg1 ;
-(void)_finishRequest:(id)arg0 withError:(id)arg1 ;
-(void)_finishRequestWithoutError:(id)arg0 ;
-(void)_handleThumbnailGenerationCompletionWithUUID:(id)arg0 data:(id)arg1 format:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect )arg4 iconFlavor:(int)arg5 thumbnailType:(NSInteger)arg6 clientShouldTakeOwnership:(BOOL)arg7 error:(id)arg8 ;
-(void)_logRequestDuration:(id)arg0 ;
-(void)_notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)arg0 thumbnail:(id)arg1 type:(NSInteger)arg2 error:(id)arg3 ;
-(void)_performInBatch:(id)arg0 ;
-(void)_prepareSyncThumbnailRequest:(id)arg0 ;
-(void)_prepareThumbnailRequestForQueueOrSending:(id)arg0 synchronous:(BOOL)arg1 ;
-(void)_queueIconGenerationForRequestIfNeeded:(id)arg0 ;
-(void)_queueThumbnailRequest:(id)arg0 ;
-(void)_removeRequest:(id)arg0 ;
-(void)_sendPendingBatches;
-(void)_sendPendingCancelledRequests;
-(void)_sendPendingGenerationRequests;
-(void)_sendSyncGenerationRequest:(id)arg0 ;
-(void)_setMostRepresentativeThumbnail:(id)arg0 forRequest:(id)arg1 ;
-(void)cancelRequest:(id)arg0 ;
-(void)didGenerateThumbnailForRequestWithUUID:(id)arg0 data:(id)arg1 bitmapFormat:(id)arg2 metadata:(id)arg3 contentRect:(struct CGRect )arg4 iconFlavor:(int)arg5 thumbnailType:(NSInteger)arg6 clientShouldTakeOwnership:(BOOL)arg7 ;
-(void)didUpdateStatus:(NSInteger)arg0 ofThumbnailGenerationWithUUID:(id)arg1 ;
-(void)failedToGenerateThumbnailOfType:(NSInteger)arg0 forRequestWithUUID:(id)arg1 error:(id)arg2 ;
-(void)generateBestRepresentationForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateRepresentationsForRequest:(id)arg0 updateHandler:(id)arg1 ;
// -(void)generateThumbnailForRequest:(id)arg0 updateHandler:(id)arg1 statusHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)performInBatch:(id)arg0 ;
-(void)saveBestRepresentationForRequest:(id)arg0 toFileAtURL:(id)arg1 withContentType:(id)arg2 allowingThumbnailDownloads:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)saveBestRepresentationForRequest:(id)arg0 toFileAtURL:(id)arg1 withContentType:(id)arg2 completionHandler:(id)arg3 ;
// -(void)synchronousGenerateThumbnailForRequest:(id)arg0 updateHandler:(id)arg1 statusHandler:(unk)arg2 completionHandler:(id)arg3  ;


@end


#endif