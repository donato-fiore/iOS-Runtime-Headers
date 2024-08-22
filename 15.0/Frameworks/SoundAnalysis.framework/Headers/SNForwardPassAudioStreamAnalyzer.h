// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNFORWARDPASSAUDIOSTREAMANALYZER_H
#define SNFORWARDPASSAUDIOSTREAMANALYZER_H

@class AVAudioFormat, NSArray, NSMutableArray, NSString;
@protocol SNTimeConverting;

#import <Foundation/Foundation.h>

#import "SNAudioProcessorCache.h"
#import "SNUltronResultsLogger.h"

@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting>

 {
    SNAudioProcessorCache *_processorCache;
    list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> _processingContexts;
    ProcessingTree _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    SNUltronResultsLogger *_resultsLogger;
    BOOL _shouldRebuildProcessingTree;
}


@property (readonly, nonatomic) CGFloat clientSampleRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(BOOL)configureAnalysisTreeWithFormat:(id)arg0 ;
-(BOOL)configureAnalyzer:(id)arg0 withFormat:(id)arg1 ;
-(BOOL)startRecordingToDirectory:(id)arg0 requestDescription:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateTreeProcessingContexts;
-(NSInteger)clientSampleTimeFromSampleTime:(NSInteger)arg0 fromBox:(*void)arg1 ;
-(id)analyzerInfoForRequest:(id)arg0 ;
-(id)completionHandlerWithClientCompletionHandler:(SEL)arg0 forRequest:(id)arg1 ;
// -(id)createAnalyzerInfoForRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
-(id)detailedDescription;
-(id)initWithFormat:(id)arg0 ;
-(id)resultsHandlerWithClientResultsHandler:(SEL)arg0 forRequest:(id)arg1 ;
-(void)analyzeAudioBuffer:(id)arg0 atAudioFramePosition:(NSInteger)arg1 ;
-(void)analyzeAudioBufferList:(struct AudioBufferList *)arg0 withAudioFrameCount:(unsigned int)arg1 atAudioFramePosition:(NSInteger)arg2 ;
-(void)completeAnalysis;
-(void)dealloc;
-(void)handleAnalysisPrimingError;
-(void)handleAnalyzeAudioBufferError;
-(void)removeAllRequests;
-(void)removeAnalyzerInfoForRequest:(id)arg0 ;
-(void)removeRequest:(id)arg0 ;
-(void)sendErrorToAllRequests:(id)arg0 ;
-(void)stopRecording;
-(void)updateProcessingTreeFormat:(id)arg0 ;
-(void)writeDSPGraphDotFilesToDirectory:(id)arg0 ;


@end


#endif