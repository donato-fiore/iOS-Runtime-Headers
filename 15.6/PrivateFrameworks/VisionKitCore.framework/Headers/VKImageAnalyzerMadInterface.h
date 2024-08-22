// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKIMAGEANALYZERMADINTERFACE_H
#define VKIMAGEANALYZERMADINTERFACE_H

@class MADService, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VKImageAnalyzerMadInterface : NSObject

@property (retain, nonatomic) MADService *_serviceDontUseThisOneDirectly; // ivar: __serviceDontUseThisOneDirectly
@property (readonly, nonatomic) BOOL hasAnyRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue; // ivar: _housekeepingQueue
@property (retain, nonatomic) NSMutableDictionary *idsToRequests; // ivar: _idsToRequests
@property (retain, nonatomic) MADService *madService; // ivar: _madService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (nonatomic) int requestIDIndex; // ivar: _requestIDIndex
@property (retain, nonatomic) NSMutableSet *requestQueueCancelling; // ivar: _requestQueueCancelling
@property (retain, nonatomic) NSMutableOrderedSet *requestQueueProcessing; // ivar: _requestQueueProcessing
@property (readonly, nonatomic) MADService *service;
@property (nonatomic) NSUInteger timeoutIndex; // ivar: _timeoutIndex
@property (retain, nonatomic) NSMutableDictionary *vkToMadIDs; // ivar: _vkToMadIDs


+(id)analyzerDeallocedError;
+(id)sharedInterface;
-(NSUInteger)_statusForRequestID:(int)arg0 ;
-(NSUInteger)statusForRequestID:(int)arg0 ;
-(id)analysisResultFromMadRequests:(id)arg0 imageSize:(struct CGSize )arg1 durations:(id)arg2 ;
-(id)cancelledError;
-(id)documentObservationFromRequests:(id)arg0 durations:(id)arg1 ;
-(id)init;
-(id)mrcDDElementsFromRequests:(id)arg0 didParse:(*BOOL)arg1 durations:(id)arg2 ;
-(id)requestForRequestID:(int)arg0 ;
-(id)visualSearchResultFromRequests:(id)arg0 durations:(id)arg1 ;
-(int)_performMADRequest:(id)arg0 forRequest:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 cgImage:(struct CGImage *)arg3 useCGForMad:(BOOL)arg4 withCompletion:(id)arg5 ;
-(int)processRequest:(id)arg0 ;
-(void)_cancelRequest:(id)arg0 ;
-(void)_cancelRequestID:(int)arg0 ;
-(void)_processRequest:(id)arg0 ;
-(void)cancelAllRequests;
-(void)cancelRequestID:(int)arg0 ;
-(void)clearCompletedRequest:(id)arg0 ;
-(void)createNewIdleTimerIfNecessary;
-(void)didFinishRequest:(id)arg0 withAnalysis:(id)arg1 analyticsEvent:(id)arg2 error:(id)arg3 ;
-(void)didLeaveVisualSearchHints;
-(void)didShowVisualSearchHintsForRequest:(id)arg0 ;
-(void)generateVisualSearchResultForRequest:(id)arg0 analysis:(id)arg1 items:(id)arg2 payload:(id)arg3 queryID:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)logCollectionsIfNecessary;
-(void)performMADRequest:(id)arg0 forRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeAndNotifyOfCancelledRequest:(id)arg0 completion:(id)arg1 ;
-(void)request:(id)arg0 didCompleteWithAnalysis:(id)arg1 analysisEvent:(id)arg2 error:(id)arg3 ;
-(void)setRequest:(id)arg0 forRequestID:(int)arg1 ;


@end


#endif