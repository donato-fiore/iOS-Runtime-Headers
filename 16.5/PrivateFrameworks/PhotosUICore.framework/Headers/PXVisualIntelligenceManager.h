// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVISUALINTELLIGENCEMANAGER_H
#define PXVISUALINTELLIGENCEMANAGER_H

@class NSMutableArray, VKCImageAnalyzer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PXVisualIntelligenceRequest.h"

@interface PXVisualIntelligenceManager : NSObject

@property (nonatomic) BOOL analysisSuspended; // ivar: _analysisSuspended
@property (retain, nonatomic) _PXVisualIntelligenceRequest *currentRequest; // ivar: _currentRequest
@property (nonatomic) int nextRequestID; // ivar: _nextRequestID
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests
@property (retain, nonatomic) VKCImageAnalyzer *vkAnalyzer; // ivar: _vkAnalyzer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


+(BOOL)canRequestVKImageAnalysisForAsset:(id)arg0 ;
+(BOOL)deviceSupportsImageAnalysis;
+(id)sharedManager;
+(int)preheatResourcesForSubjectExtractionOfAsset:(id)arg0 ;
+(struct CGSize )_sizeToPreheatResourcesForSubjectExtractionOfAsset:(id)arg0 ;
-(id)init;
-(int)requestVKImageAnalysisForAsset:(id)arg0 cgImage:(struct CGImage *)arg1 orientation:(NSInteger)arg2 resultHandler:(id)arg3 ;
-(int)requestVKImageAnalysisForAsset:(id)arg0 image:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestVKImageAnalysisForAsset:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 orientation:(NSInteger)arg2 resultHandler:(id)arg3 ;
-(int)requestVKImageAnalysisForAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)_cancelRequestByAsset_sync:(id)arg0 ;
-(void)_dispatchNextRequest;
-(void)_logAnalysis:(id)arg0 request:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)_processAnalysis:(id)arg0 withRequest:(id)arg1 error:(id)arg2 ;
-(void)cancelRequestByAsset:(id)arg0 ;
-(void)cancelRequestByID:(int)arg0 ;


@end


#endif