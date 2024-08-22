// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTKEYWORDANALYZERNDAPI_H
#define VTKEYWORDANALYZERNDAPI_H

@class NSString;
@protocol VTKeywordAnalyzer;

#import <Foundation/Foundation.h>

#import "VTNovDetector.h"

@interface VTKeywordAnalyzerNDAPI : NSObject <VTKeywordAnalyzer>

 {
    VTNovDetector *_novDetector;
    NSUInteger _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    NSUInteger _lastSampleFed;
    NSUInteger _sampleFedWrapAroundOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_populateScoreForPhraseId:(unsigned int)arg0 withNovDetectorResult:(id)arg1 ;
-(id)getAnalyzerType;
-(id)getDetailedResults;
-(id)initWithAsset:(id)arg0 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)endAudio;
-(void)processAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)processFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithLanguage:(id)arg0 withSamplingRate:(NSInteger)arg1 withAudioSource:(id)arg2 ;
-(void)setStartSampleCount:(NSUInteger)arg0 ;


@end


#endif