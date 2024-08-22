// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMEDIAREQUESTCONTEXT_H
#define PHMEDIAREQUESTCONTEXT_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSProgress, NSString, NSError;
@protocol PHImageRequestDelegate, PHAdjustmentDataRequestDelegate, PHMediaRequestContextDelegate;

#import <Foundation/Foundation.h>

#import "PHAsset.h"
#import "PHImageDisplaySpec.h"
#import "PHImageResourceChooser.h"

@interface PHMediaRequestContext : NSObject <PHImageRequestDelegate, PHAdjustmentDataRequestDelegate>

 {
    id *_resultHandler;
    uint8_t _nextID;
    uint8_t _repairAttemptCount;
    os_unfair_lock_s _lock;
    NSMutableArray *_requests;
    NSMutableSet *_inflightRequestIdentifiers;
    BOOL _isCancelled;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSProgress *_totalProgress;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHMediaRequestContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec; // ivar: _displaySpec
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHImageResourceChooser *imageResourceChooser; // ivar: _imageResourceChooser
@property (readonly, nonatomic) NSUInteger managerID; // ivar: _managerID
@property (retain, nonatomic) NSError *prestartError; // ivar: _prestartError
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (nonatomic) NSUInteger signpostLayoutID; // ivar: _signpostLayoutID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(id)chooserQueue;
+(id)contentEditingInputRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 useRAWAsUnadjustedBase:(BOOL)arg4 resultHandler:(id)arg5 ;
+(id)imageRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 imageRequestOptions:(id)arg3 displaySpec:(id)arg4 resultHandler:(id)arg5 ;
+(id)livePhotoRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 livePhotoRequestOptions:(id)arg3 displaySpec:(id)arg4 resultHandler:(id)arg5 ;
+(id)videoRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 videoRequestOptions:(id)arg3 intent:(NSInteger)arg4 resultHandler:(id)arg5 ;
+(void)initialize;
-(BOOL)isCancelled;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(BOOL)mediaRequestCanRequestRepair:(id)arg0 ;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)shouldLimitRepairRequestsPerProcess;
-(BOOL)shouldReportProgress;
-(CGFloat)totalProgressFraction;
-(NSUInteger)nextRequestIndex;
-(id)_produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 ;
-(id)_produceChildRequestsForRequest:(id)arg0 withResult:(id)arg1 ;
-(id)_requestWithIdentifier:(id)arg0 ;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 displaySpec:(id)arg3 resultHandler:(id)arg4 ;
-(id)initialRequests;
-(id)produceChildRequestsForRequest:(id)arg0 reportingIsLocallyAvailable:(BOOL)arg1 isDegraded:(BOOL)arg2 result:(id)arg3 ;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(int)maxRepairRequests;
-(void)_registerAndStartRequests:(id)arg0 ;
-(void)_setupProgressIfNeeded;
-(void)adjustmentDataRequest:(id)arg0 didReportProgress:(CGFloat)arg1 completed:(BOOL)arg2 error:(id)arg3 ;
-(void)beginCustomAsyncWorkWithIdentifier:(id)arg0 ;
-(void)cancel;
-(void)finishCustomAsyncWorkWithIdentifier:(id)arg0 ;
-(void)imageRequest:(id)arg0 isQueryingCacheAndDidWait:(*BOOL)arg1 didFindImage:(*BOOL)arg2 resultHandler:(id)arg3 ;
-(void)imageRequest:(id)arg0 isRequestingScheduledWorkBlock:(id)arg1 ;
-(void)mediaRequest:(id)arg0 didFindLocallyAvailableResult:(BOOL)arg1 isDegraded:(BOOL)arg2 ;
-(void)mediaRequest:(id)arg0 didFinishWithResult:(id)arg1 ;
-(void)mediaRequest:(id)arg0 didReportProgress:(id)arg1 ;
-(void)mediaRequest:(id)arg0 didRequestRetryWithHintsAllowed:(BOOL)arg1 ;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;
-(void)requestWithIdentifier:(id)arg0 didReportProgress:(CGFloat)arg1 completed:(BOOL)arg2 error:(id)arg3 ;
-(void)setProgress:(id)arg0 forRequestIdentifier:(id)arg1 ;
-(void)start;


@end


#endif