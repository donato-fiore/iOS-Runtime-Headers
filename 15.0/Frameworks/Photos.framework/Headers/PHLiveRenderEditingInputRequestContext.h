// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHLIVERENDEREDITINGINPUTREQUESTCONTEXT_H
#define PHLIVERENDEREDITINGINPUTREQUESTCONTEXT_H

@class PLPhotoEditRenderer, NSProgress;
@protocol PHMediaRequestLiveRenderingOptions;


#import "PHContentEditingInputRequestContext.h"
#import "PHVideoRequest.h"

@interface PHLiveRenderEditingInputRequestContext : PHContentEditingInputRequestContext {
    os_unfair_lock_s _renderLock;
    PLPhotoEditRenderer *_renderer;
    id *_renderedVideoHandler;
    BOOL _shouldReframe;
    id<PHMediaRequestLiveRenderingOptions> *_liveRenderOptions;
    PHVideoRequest *_onDemandRenderRequest;
    NSProgress *_onDemandRenderProgress;
}




+(id)videoLiveRenderContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 renderedVideoHandler:(id)arg4 ;
+(id)videoLiveRenderContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 targetSize:(struct CGSize )arg4 contentMode:(NSInteger)arg5 renderedVideoHandler:(id)arg6 ;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 useRAWAsUnadjustedBase:(BOOL)arg4 resultHandler:(id)arg5 ;
-(id)initialRequests;
-(id)produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 result:(id)arg3 ;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)_handleRenderVideoFinishedWithRequest:(id)arg0 avAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 error:(id)arg4 mutableInfo:(id)arg5 ;
-(void)cancel;
-(void)processAndReturnResultsWithRequest:(id)arg0 ;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif