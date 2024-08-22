// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIOFILEANALYZER_H
#define SNAUDIOFILEANALYZER_H

@class AVAudioFile;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNAudioStreamAnalyzer.h"

@interface SNAudioFileAnalyzer : NSObject {
    AVAudioFile *_audioFile;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _wasCancelled;
}




-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)analyze;
-(void)analyzeInRange:(struct ? )arg0 ;
-(void)analyzeWithCompletionHandler:(id)arg0 ;
-(void)cancelAnalysis;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;


@end


#endif