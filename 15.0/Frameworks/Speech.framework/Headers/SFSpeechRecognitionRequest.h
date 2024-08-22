// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSPEECHRECOGNITIONREQUEST_H
#define SFSPEECHRECOGNITIONREQUEST_H

@class NSDictionary, NSURL, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "_SFSearchRequest.h"

@interface SFSpeechRecognitionRequest : NSObject

@property (retain, nonatomic, getter=_afDictationRequestParams, setter=_setAFDictationRequestParams:) NSDictionary *_afDictationRequestParams; // ivar: _afDictationRequestParams
@property (retain, nonatomic, getter=_dynamicLanguageModel, setter=_setDynamicLanguageModel:) NSURL *_dynamicLanguageModel; // ivar: _dynamicLanguageModel
@property (retain, nonatomic, getter=_dynamicVocabulary, setter=_setDynamicVocabulary:) NSURL *_dynamicVocabulary; // ivar: _dynamicVocabulary
@property (nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) BOOL _forceOfflineRecognition; // ivar: _forceOfflineRecognition
@property (nonatomic, getter=_forceUseSiriProcess, setter=_setForceUseSiriProcess:) BOOL _forceUseSiriProcess; // ivar: _forceUseSiriProcess
@property (nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) CGFloat _maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL; // ivar: _modelOverrideURL
@property (retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides; // ivar: _recognitionOverrides
@property (retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest; // ivar: _searchRequest
@property (retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo
@property (copy, nonatomic) NSArray *contextualStrings; // ivar: _contextualStrings
@property (nonatomic) BOOL detectMultipleUtterances; // ivar: _detectMultipleUtterances
@property (copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (nonatomic) BOOL requiresOnDeviceRecognition;
@property (nonatomic) BOOL shouldReportPartialResults; // ivar: _shouldReportPartialResults
@property (nonatomic) NSInteger taskHint; // ivar: _taskHint


+(void)initialize;
-(BOOL)_powerMeteringAvailable;
-(BOOL)automaticallyEndpoint;
-(id)_dictationOptionsWithTaskHint:(NSInteger)arg0 requestIdentifier:(id)arg1 ;
-(id)_requestParametersWithTaskHint:(NSInteger)arg0 requestIdentifier:(id)arg1 narrowband:(BOOL)arg2 language:(id)arg3 ;
-(id)_speechRequestOptions;
-(id)_startedConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 ;
-(id)_startedLocalConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 ;
-(id)init;
-(void)_setSearchRequests:(id)arg0 ;


@end


#endif