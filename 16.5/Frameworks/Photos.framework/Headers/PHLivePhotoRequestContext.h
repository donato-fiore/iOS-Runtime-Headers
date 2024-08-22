// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHLIVEPHOTOREQUESTCONTEXT_H
#define PHLIVEPHOTOREQUESTCONTEXT_H

@class NSProgress;


#import "PHMediaRequestContext.h"
#import "PHLivePhotoResult.h"
#import "PHImageRequest.h"
#import "PHVideoRequest.h"
#import "PHLivePhotoRequestOptions.h"

@interface PHLivePhotoRequestContext : PHMediaRequestContext {
    NSProgress *_imageProgress;
    NSProgress *_videoProgress;
    PHLivePhotoResult *_livePhotoResult;
    PHImageRequest *_fastImageRequest;
    PHImageRequest *_highQualityImageRequest;
    PHVideoRequest *_videoRequest;
    os_unfair_lock_s _lock;
    BOOL _imagePartCompleted;
    BOOL _videoPartCompleted;
}


@property (readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions; // ivar: _livePhotoOptions


-(BOOL)_shouldRequestVideo;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)shouldReportProgress;
-(NSInteger)type;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 displaySpec:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(id)initialRequests;
-(id)produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 result:(id)arg3 ;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif