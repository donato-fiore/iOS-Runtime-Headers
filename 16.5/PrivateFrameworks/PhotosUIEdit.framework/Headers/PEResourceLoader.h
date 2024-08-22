// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PERESOURCELOADER_H
#define PERESOURCELOADER_H

@class NSMutableArray;
@protocol PEAsset, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PEResourceLoadRequest.h"

@interface PEResourceLoader : NSObject

@property (nonatomic, setter=_setContentEditingRequestID:) NSUInteger _contentEditingRequestID; // ivar: __contentEditingRequestID
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests; // ivar: __enqueuedRequests
@property (readonly, nonatomic) NSObject<PEAsset> *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isCheckingForResourceAvailability) BOOL checkingAvailability;
@property (retain, nonatomic) PEResourceLoadRequest *currentRequest; // ivar: _currentRequest
@property (readonly, nonatomic, getter=isDownloadingResources) BOOL downloadingResources;
@property (nonatomic) BOOL forceRunAsUnadjustedAsset; // ivar: _forceRunAsUnadjustedAsset
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // ivar: _loadingQueue
@property (nonatomic, setter=_setResourcesAvailability:) NSInteger resourcesAvailability; // ivar: _resourcesAvailability
@property (readonly, nonatomic, getter=areResourcesAvailable) BOOL resourcesAvailable;
@property (nonatomic) BOOL simulateEditEntryError; // ivar: _simulateEditEntryError
@property (nonatomic) BOOL skipDisplaySizeImage; // ivar: _skipDisplaySizeImage


+(id)compositionFromPHAdjustmentData:(id)arg0 error:(*id)arg1 ;
-(BOOL)_adjustmentDataIsSupported:(id)arg0 ;
-(BOOL)cancelAllRequests;
-(NSInteger)workImageVersionForContentEditingInput:(id)arg0 ;
-(id)initWithAsset:(id)arg0 loadingQueue:(id)arg1 ;
-(void)_dequeueRequestIfNeeded;
-(void)_downloadSignpostEvent:(char *)arg0 ;
-(void)_handleSuccess:(BOOL)arg0 withResult:(id)arg1 forRequest:(id)arg2 error:(id)arg3 ;
-(void)_initiateRequest:(id)arg0 ;
-(void)_processContentEditingInputRequestCompletion:(id)arg0 info:(id)arg1 forRequest:(id)arg2 ;
-(void)_processLoadedContentEditingInput:(id)arg0 info:(id)arg1 forRequest:(id)arg2 ;
-(void)_requestContentEditingInputForRequest:(id)arg0 networkAccessAllowed:(BOOL)arg1 ;
-(void)enqueueRequest:(id)arg0 ;


@end


#endif