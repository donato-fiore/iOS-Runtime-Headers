// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNSYSTEMAUDIOANALYZERLOCAL_H
#define SNSYSTEMAUDIOANALYZERLOCAL_H

@class AVAudioFormat, NSMutableArray, AVAudioSession;
@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNAudioRecordingQueue.h"
#import "SNAudioStreamAnalyzer.h"
#import "SNAudioConfiguration.h"

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol>

 {
    AVAudioFormat *_recordFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    SNAudioRecordingQueue *_recordingQueue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSInteger _recordingState;
    BOOL _clientStartedAnalysis;
    NSMutableArray *_requests;
    SNAudioConfiguration *_audioConfiguration;
    AVAudioSession *_audioSession;
}




-(BOOL)_addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)_removeAllRequests;
-(void)_removeRequest:(id)arg0 ;
-(void)handleAVAudioSessionInterruption:(id)arg0 ;
-(void)handleAVAudioSessionMediaServicesLost:(id)arg0 ;
-(void)handleAVAudioSessionMediaServicesReset:(id)arg0 ;
-(void)handleAVAudioSessionRouteChange:(id)arg0 ;
-(void)handleAudioStreamInterrupted;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)sendErrorToAllRequests:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;
-(void)start;
-(void)startAudio;
-(void)stop;
-(void)stopAudio;


@end


#endif