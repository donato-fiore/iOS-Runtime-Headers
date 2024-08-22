// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNAUDIOSTREAMANALYZER_H
#define SNAUDIOSTREAMANALYZER_H

@class NSMutableArray, AVAudioFormat, NSPredicate, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNForwardPassAudioStreamAnalyzer.h"

@interface SNAudioStreamAnalyzer : NSObject {
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    NSPredicate *_firstPassRecordingPredicate;
    ? _firstPassRecordingHistoryDuration;
    ? _sysdiagnoseHistoryDuration;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    NSDictionary *_secondPassUltronReportOps;
    NSDictionary *_firstPassUltronReportOps;
    NSDictionary *_firstPassResultsHistory;
    unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> _ringBuffer;
    unique_ptr<CABufferList, std::default_delete<CABufferList>> _ringBufferWriteBufferList;
    id *_unregisterLogCollectHook;
    NSInteger _analysisState;
}




+(BOOL)shouldLogRequests;
+(BOOL)shouldLogResultsHistory;
// -(BOOL)addRequest:(id)arg0 completionHandler:(id)arg1 resultsHandler:(unk)arg2 error:(id)arg3  ;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)initWithFormat:(id)arg0 ;
-(void)analyzeAudioBuffer:(id)arg0 atAudioFramePosition:(NSInteger)arg1 ;
-(void)completeAnalysis;
-(void)dealloc;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;


@end


#endif