// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCAPTURETEXTANALYZER_H
#define VKCAPTURETEXTANALYZER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VKCaptureTextAnalysisRequest.h"

@interface VKCaptureTextAnalyzer : NSObject

@property (retain, nonatomic, setter=_setPendingRequest:) VKCaptureTextAnalysisRequest *_pendingRequest; // ivar: __pendingRequest
@property (nonatomic, getter=_isProcessing, setter=_setProcessing:) BOOL _processing; // ivar: __processing
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_processingQueue; // ivar: __processingQueue
@property (retain, nonatomic, setter=_setProcessingRequest:) VKCaptureTextAnalysisRequest *_processingRequest; // ivar: __processingRequest
@property (nonatomic) BOOL shouldCreateFeedbackProviders; // ivar: _shouldCreateFeedbackProviders


-(BOOL)_isCanceledRequest:(id)arg0 ;
-(id)_blocksIntersectingQuad:(id)arg0 inDocument:(id)arg1 ;
-(id)_documentDetectionRequest;
-(id)_documentRecognitionRequestWithInputBlock:(id)arg0 ;
-(id)_documentRecognitionRequestWithInputBlocks:(id)arg0 ;
-(id)_imageAnalysisForDocument:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)init;
-(void)_didProcessRequest:(id)arg0 withDetectionResult:(id)arg1 analysis:(id)arg2 error:(id)arg3 ;
-(void)_enqueueProcessingForRequest:(id)arg0 ;
-(void)cancelAllRequests;
-(void)dealloc;
-(void)processRequest:(id)arg0 ;


@end


#endif