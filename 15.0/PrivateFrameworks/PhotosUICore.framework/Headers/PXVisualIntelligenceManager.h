// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVISUALINTELLIGENCEMANAGER_H
#define PXVISUALINTELLIGENCEMANAGER_H

@class NSMutableArray, VKImageAnalyzer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PXVisualIntelligenceRequest.h"

@interface PXVisualIntelligenceManager : NSObject

@property (nonatomic) BOOL analysisSuspended; // ivar: _analysisSuspended
@property (retain, nonatomic) _PXVisualIntelligenceRequest *currentRequest; // ivar: _currentRequest
@property (nonatomic) int nextRequestID; // ivar: _nextRequestID
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests
@property (retain, nonatomic) VKImageAnalyzer *vkAnalyzer; // ivar: _vkAnalyzer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


+(id)sharedManager;
-(id)init;
-(int)requestVKImageAnalysisForAsset:(id)arg0 image:(id)arg1 resultHandler:(id)arg2 ;
-(void)_cancelRequestByAsset_sync:(id)arg0 ;
-(void)_dispatchNextRequest;
-(void)_logAnalysis:(id)arg0 request:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)_processAnalysis:(id)arg0 withRequest:(id)arg1 error:(id)arg2 ;
-(void)cancelRequestByAsset:(id)arg0 ;
-(void)cancelRequestByID:(int)arg0 ;


@end


#endif