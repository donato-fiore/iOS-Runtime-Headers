// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKIMAGEANALYZERINPROCESSMADINTERFACE_H
#define VKIMAGEANALYZERINPROCESSMADINTERFACE_H

@class NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue;


#import "VKImageAnalyzerMadInterface.h"

@interface VKImageAnalyzerInProcessMadInterface : VKImageAnalyzerMadInterface

@property (readonly, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue; // ivar: _housekeepingQueue
@property (retain, nonatomic) NSMutableDictionary *idsToRequests; // ivar: _idsToRequests
@property (nonatomic) int queueRequestID; // ivar: _queueRequestID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tempMadProcessingQueue; // ivar: _tempMadProcessingQueue
@property (retain, nonatomic) NSMutableSet *tempMadRequestQueueCancelling; // ivar: _tempMadRequestQueueCancelling
@property (retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueProcessing; // ivar: _tempMadRequestQueueProcessing
@property (retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueWaiting; // ivar: _tempMadRequestQueueWaiting


+(id)sharedInterface;
-(NSUInteger)_statusForRequestID:(int)arg0 ;
-(NSUInteger)statusForRequestID:(int)arg0 ;
-(id)cancelledError;
-(id)init;
-(id)mrcElementsFromImage:(struct CGImage *)arg0 symbologies:(id)arg1 ;
-(int)nextRequestID;
-(int)processRequest:(id)arg0 ;
-(void)_cancelRequest:(id)arg0 ;
-(void)_processRequest:(id)arg0 ;
-(void)addRequestForProcessing:(id)arg0 ;
-(void)cancelAllRequests;
-(void)cancelRequestID:(int)arg0 ;
-(void)clearCompletedRequest:(id)arg0 ;
-(void)didFinishRequest:(id)arg0 withAnalysisResult:(id)arg1 error:(id)arg2 ;
-(void)processNextItemIfNecessary;
-(void)removeAndNotifyOfCancelledRequest:(id)arg0 ;
-(void)request:(id)arg0 didCompleteWithAnalysis:(id)arg1 error:(id)arg2 ;


@end


#endif