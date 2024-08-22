// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARSPEECHRECOGNITIONRESULTPACKAGE_H
#define _EARSPEECHRECOGNITIONRESULTPACKAGE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_EARAudioAnalytics.h"
#import "_EARLatticeMitigatorResult.h"
#import "_EARSpeechRecognition.h"

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>



@property (readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics; // ivar: _audioAnalytics
@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList; // ivar: _correctPartialResultIndexList
@property (nonatomic) BOOL firstResultAfterResume; // ivar: _firstResultAfterResume
@property (readonly, nonatomic) BOOL hasNonEmptyToken;
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult; // ivar: _latticeMitigatorResult
@property (readonly, copy, nonatomic) NSArray *nBestVoiceCommandInterpretations; // ivar: _nBestVoiceCommandInterpretations
@property (readonly, copy, nonatomic) NSArray *preITNNBestVoiceCommandInterpretations; // ivar: _preITNNBestVoiceCommandInterpretations
@property (readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition; // ivar: _preITNRecognition
@property (readonly, copy, nonatomic) _EARSpeechRecognition *recognition; // ivar: _recognition
@property (readonly, nonatomic) BOOL recognitionIsFormatted; // ivar: _recognitionIsFormatted
@property (readonly, nonatomic) BOOL recognitionPaused; // ivar: _recognitionPaused
@property (readonly, copy, nonatomic) _EARSpeechRecognition *unrepairedRecognition; // ivar: _unrepairedRecognition
@property (readonly, nonatomic) CGFloat utteranceStart; // ivar: _utteranceStart


-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 ;
-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 ;
-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(CGFloat)arg6 ;
-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(CGFloat)arg6 latticeMitigatorResult:(id)arg7 ;
-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(CGFloat)arg6 latticeMitigatorResult:(id)arg7 nBestVoiceCommandInterpretations:(id)arg8 preITNNBestVoiceCommandInterpretations:(id)arg9 recognitionPaused:(BOOL)arg10 ;
-(id)_initWithRecognition:(id)arg0 preITNRecognition:(id)arg1 unrepairedRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(CGFloat)arg6 latticeMitigatorResult:(id)arg7 nBestVoiceCommandInterpretations:(id)arg8 preITNNBestVoiceCommandInterpretations:(id)arg9 recognitionPaused:(BOOL)arg10 firstResultAfterResume:(BOOL)arg11 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)nBestResults;


@end


#endif