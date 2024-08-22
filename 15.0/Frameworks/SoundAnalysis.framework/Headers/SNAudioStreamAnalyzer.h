// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIOSTREAMANALYZER_H
#define SNAUDIOSTREAMANALYZER_H

@class NSMutableArray, AVAudioFormat, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNForwardPassAudioStreamAnalyzer.h"

@interface SNAudioStreamAnalyzer : NSObject {
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> _ringBuffer;
    unique_ptr<CABufferList, std::default_delete<CABufferList>> _ringBufferWriteBufferList;
}




+(BOOL)shouldRecordSecondPass;
+(id)secondPassRecordingPath;
+(void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)arg0 ;
// -(BOOL)_addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
// -(BOOL)_addSinglePassRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
// -(BOOL)_addTwoPassRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
// -(BOOL)addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)detailedDescription;
-(id)initWithFormat:(id)arg0 ;
-(void)_analyzeAudioBuffer:(id)arg0 atAudioFramePosition:(NSInteger)arg1 ;
-(void)_removeRequest:(id)arg0 ;
-(void)_removeSinglePassRequest:(id)arg0 ;
-(void)_removeTwoPassRequest:(id)arg0 ;
-(void)analyzeAudioBuffer:(id)arg0 atAudioFramePosition:(NSInteger)arg1 ;
-(void)completeAnalysis;
// -(void)handleBeginSecondPassForRequest:(id)arg0 secondPassController:(id)arg1 completionHandler:(id)arg2 resultsHandler:(unk)arg3  ;
-(void)handleEndSecondPassForRequest:(id)arg0 ;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)removeRequestAsync:(id)arg0 ;
-(void)sendErrorToAllRequests:(id)arg0 ;
-(void)writeDSPGraphDotFilesToDirectory:(id)arg0 ;


@end


#endif