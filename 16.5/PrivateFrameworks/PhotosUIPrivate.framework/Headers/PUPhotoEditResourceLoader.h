// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITRESOURCELOADER_H
#define PUPHOTOEDITRESOURCELOADER_H

@class NSMutableArray, NSString;
@protocol PUEditableAsset, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PUPhotoEditResourceLoadRequest.h"

@interface PUPhotoEditResourceLoader : NSObject

@property (nonatomic, setter=_setContentEditingRequestID:) NSUInteger _contentEditingRequestID; // ivar: __contentEditingRequestID
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests; // ivar: __enqueuedRequests
@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion; // ivar: _adjustmentIdentifierAndVersion
@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isCheckingForResourceAvailability) BOOL checkingAvailability;
@property (retain, nonatomic) PUPhotoEditResourceLoadRequest *currentRequest; // ivar: _currentRequest
@property (readonly, nonatomic, getter=isDownloadingResources) BOOL downloadingResources;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (nonatomic, setter=_setResourcesAvailability:) NSInteger resourcesAvailability; // ivar: _resourcesAvailability
@property (readonly, nonatomic, getter=areResourcesAvailable) BOOL resourcesAvailable;


+(id)compositionFromPHAdjustmentData:(id)arg0 error:(*id)arg1 ;
+(void)_processResult:(id)arg0 forRequest:(id)arg1 resultHandler:(id)arg2 ;
-(BOOL)_adjustmentDataIsSupported:(id)arg0 ;
-(BOOL)cancelAllRequests;
-(NSInteger)workImageVersionForContentEditingInput:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
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