// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTKEYWORDANALYZERQUASAR_H
#define VTKEYWORDANALYZERQUASAR_H

@class NSArray, _EARSyncSpeechRecognizer, NSDictionary, NSString;
@protocol VTKeywordAnalyzer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_lastReportedRecogResults;
    NSArray *_triggerTokenList;
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _useKeywordSpotting;
}


@property (retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // ivar: _ctcKwdToPhraseIdMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getAnalyzerType;
-(id)getDetailedResults;
-(id)initWithAsset:(id)arg0 ;
-(void)endAudio;
-(void)processAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)processFloatAudioBuffer:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithLanguage:(id)arg0 withSamplingRate:(NSInteger)arg1 withAudioSource:(id)arg2 ;
-(void)setStartSampleCount:(NSUInteger)arg0 ;


@end


#endif