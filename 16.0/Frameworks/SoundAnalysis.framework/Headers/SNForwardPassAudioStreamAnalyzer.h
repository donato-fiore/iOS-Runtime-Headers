// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNFORWARDPASSAUDIOSTREAMANALYZER_H
#define SNFORWARDPASSAUDIOSTREAMANALYZER_H

@class AVAudioFormat, NSArray, NSMutableArray, NSString;
@protocol SNTimeConverting;

#import <Foundation/Foundation.h>

#import "SNAudioProcessorCache.h"

@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting>

 {
    SNAudioProcessorCache *_processorCache;
    list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> _processingContexts;
    ProcessingTree _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    BOOL _shouldRebuildProcessingTree;
}


@property (readonly, nonatomic) CGFloat clientSampleRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)clientSampleTimeFromSampleTime:(NSInteger)arg0 fromBox:(*void)arg1 ;
-(void)dealloc;


@end


#endif