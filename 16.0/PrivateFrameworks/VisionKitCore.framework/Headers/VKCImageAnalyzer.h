// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCIMAGEANALYZER_H
#define VKCIMAGEANALYZER_H

@protocol VKAnalyzerAnalyticsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VKAnalyticsProcessor.h"
#import "VKImageAnalyzerMadInterface.h"

@interface VKCImageAnalyzer : NSObject

@property (weak, nonatomic) NSObject<VKAnalyzerAnalyticsDelegate> *_analyticsDelegate; // ivar: __analyticsDelegate
@property (nonatomic) BOOL _isPublicAPI; // ivar: __isPublicAPI
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor; // ivar: _analyticsProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL createFeedbackProviders; // ivar: _createFeedbackProviders
@property (retain, nonatomic) VKImageAnalyzerMadInterface *mad; // ivar: _mad
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *realCallbackQueue;


+(BOOL)deviceSupportsImageAnalysis;
+(id)supportedRecognitionLanguages;
-(NSUInteger)statusForRequestID:(int)arg0 ;
-(id)init;
// -(id)processRequest:(id)arg0 updateHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)_processRequest:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)processRequest:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_forceInProcessAnalysis;
-(void)cancelAllRequests;
-(void)cancelRequestID:(int)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateForLiveTextSupport;


@end


#endif