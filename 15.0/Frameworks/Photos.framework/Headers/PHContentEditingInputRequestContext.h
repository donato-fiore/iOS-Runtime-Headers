// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCONTENTEDITINGINPUTREQUESTCONTEXT_H
#define PHCONTENTEDITINGINPUTREQUESTCONTEXT_H

@class NSProgress, NSArray, NSMutableIndexSet, PAImageConversionServiceClient;


#import "PHMediaRequestContext.h"
#import "PHContentEditingInputResult.h"
#import "PHAdjustmentDataRequest.h"
#import "PHVideoRequest.h"
#import "PHImageRequest.h"
#import "PHImageResourceChooser.h"
#import "PHContentEditingInputRequestOptions.h"

@interface PHContentEditingInputRequestContext : PHMediaRequestContext {
    PHContentEditingInputResult *_contentEditingInputResult;
    BOOL _useRAWAsUnadjustedBase;
    PHAdjustmentDataRequest *_adjustmentRequest;
    PHVideoRequest *_videoRequest;
    NSUInteger _imageBaseRequestIndex;
    PHImageRequest *_displayImageRequest;
    os_unfair_lock_s _lock;
    NSUInteger _inflightMediaRequestCount;
    NSProgress *_adjustmentProgress;
    NSProgress *_videoProgress;
    NSProgress *_imageProgress;
    PHImageResourceChooser *_backupChooser;
    NSArray *_assetResources;
    NSMutableIndexSet *_requestIndexesOfAssetResourceRequests;
    PAImageConversionServiceClient *_imageConversionClient;
}


@property (readonly, nonatomic) PHContentEditingInputRequestOptions *options; // ivar: _options


-(BOOL)_canSkipMediaMetadataCheckWithBaseVersion:(NSInteger)arg0 ;
-(BOOL)_hasAnyPenultimateResource;
-(BOOL)_shouldRequestImage;
-(BOOL)_shouldRequestVideo;
-(BOOL)isNetworkAccessAllowed;
-(NSInteger)_adjustmentBaseVersionFromResult:(id)arg0 request:(id)arg1 canHandleAdjustmentData:(*BOOL)arg2 ;
-(NSInteger)_assetResourceTypeForImageWithBaseVersion:(NSInteger)arg0 ;
-(NSInteger)type;
-(id)_assetResourceForType:(NSInteger)arg0 ;
-(id)_assetResources;
-(id)_baseMediaRequestsForBaseVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_errorFromAssetMediaResult:(id)arg0 ;
-(id)_imageBehaviorSpecForBaseVersion:(NSInteger)arg0 ;
-(id)_largestUnadjustedDerivativeImageResource;
-(id)_lazyAdjustmentProgress;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(id)_resourceRequestForAssetResource:(id)arg0 wantsURLOnly:(BOOL)arg1 progress:(id)arg2 ;
-(id)_videoBehaviorSpecForBaseVersion:(NSInteger)arg0 ;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 useRAWAsUnadjustedBase:(BOOL)arg4 resultHandler:(id)arg5 ;
-(id)initialRequests;
-(id)produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 result:(id)arg3 ;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)_finishIfAllCompleteWithRequest:(id)arg0 ;
-(void)_prepareAndAddMediaRequestsToChildRequests:(id)arg0 ;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg0 resultHandler:(id)arg1 ;
-(void)_renderVideoFromVideoURL:(id)arg0 asset:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(id)arg4 ;
-(void)cancel;
-(void)processAndReturnResultsWithRequest:(id)arg0 ;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;
-(void)start;


@end


#endif