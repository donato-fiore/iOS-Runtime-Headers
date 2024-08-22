// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLANGUAGEDETECTOR_H
#define CSLANGUAGEDETECTOR_H

@class _EARLanguageDetectorAudioBuffer, CSAudioCircularBuffer, CSAsset, NSString, _EARLanguageDetector, NSMutableArray;
@protocol _EARLanguageDetectorDelegate, CSStartOfSpeechDetectorDelegate, CSLanguageDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSStartOfSpeechDetector.h"

@interface CSLanguageDetector : NSObject <_EARLanguageDetectorDelegate, CSStartOfSpeechDetectorDelegate>



@property (retain, nonatomic) _EARLanguageDetectorAudioBuffer *audioBuffer; // ivar: _audioBuffer
@property (retain, nonatomic) CSAudioCircularBuffer *circBuffer; // ivar: _circBuffer
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLanguageDetectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interactionID; // ivar: _interactionID
@property (retain, nonatomic) _EARLanguageDetector *languageDetector; // ivar: _languageDetector
@property (copy, nonatomic) NSString *languageDetectorAssetHash; // ivar: _languageDetectorAssetHash
@property (retain, nonatomic) NSMutableArray *latestDetectedLanguages; // ivar: _latestDetectedLanguages
@property (nonatomic) BOOL needsToUpdateModel; // ivar: _needsToUpdateModel
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (nonatomic) NSUInteger numLatestLanguages; // ivar: _numLatestLanguages
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL startOfSpeechDetected; // ivar: _startOfSpeechDetected
@property (retain, nonatomic) CSStartOfSpeechDetector *startOfSpeechDetector; // ivar: _startOfSpeechDetector
@property (readonly) Class superclass;


-(id)_constructLangPriors;
-(id)_getDefaultValues;
-(id)_readJsonDictionaryAt:(id)arg0 ;
-(id)init;
-(id)initWithModelURL:(id)arg0 ;
-(void)_initializeStartOfSpeechDetector:(id)arg0 samplingRate:(float)arg1 ;
-(void)_logLanguageDetectorMetricsForLoggingInfo:(id)arg0 ;
-(void)_logSoSResult:(id)arg0 toPath:(id)arg1 ;
-(void)_recordRecognitionLanguage:(id)arg0 ;
-(void)_setNumLatestLangFromConfigFile:(id)arg0 ;
-(void)_setupLanguageDetectorWithOption:(id)arg0 ;
-(void)_startMonitorLanguageDetectorAssetDownload;
-(void)addSamples:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)cancelCurrentRequest;
-(void)dealloc;
-(void)endAudio;
-(void)languageDetector:(id)arg0 result:(id)arg1 ;
-(void)languageDetectorDidCompleteProcessing:(id)arg0 loggingInfo:(id)arg1 ;
-(void)recordRecognitionLanguage:(id)arg0 ;
-(void)resetForNewRequest:(id)arg0 ;
-(void)setMostRecentRecognitionLanguage:(id)arg0 ;
-(void)startOfSpeechDetector:(id)arg0 foundStartSampleAt:(NSUInteger)arg1 ;


@end


#endif