// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEREQUESTCONTEXT_H
#define PHIMAGEREQUESTCONTEXT_H

@class NSProgress;


#import "PHMediaRequestContext.h"
#import "PHImageRequest.h"
#import "PHCompositeMediaResult.h"
#import "PHImageRequestOptions.h"

@interface PHImageRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    atomic_flag _firstNonFastResultWasObserved;
    atomic_flag _finalResultSent;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
}


@property (readonly, nonatomic) PHImageRequestOptions *imageOptions; // ivar: _imageOptions


-(BOOL)_shouldLoadHDRGainMapBasedOnChoosingPolicy:(NSInteger)arg0 ;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)shouldReportProgress;
-(NSInteger)type;
-(id)_initialBehavior;
-(id)_lazyProgress;
-(id)_produceFinalImageRequestForRequest:(id)arg0 ;
-(id)_produceIntermediateImageRequestForRequest:(id)arg0 ;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 displaySpec:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 ;
-(id)initialRequests;
-(id)produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 result:(id)arg3 ;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif