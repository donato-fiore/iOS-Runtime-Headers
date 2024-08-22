// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONCONNECTION_H
#define UIDICTATIONCONNECTION_H

@class AFDictationConnection, NSString, AFDictationOptions, NSMutableDictionary, NSMutableArray;
@protocol AFDictationDelegate, OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

#import <Foundation/Foundation.h>


@interface UIDictationConnection : NSObject <AFDictationDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // ivar: _charAfterInsertionPointOnDictationStart
@property (nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // ivar: _charBeforeInsertionPointOnDictationStart
@property (retain, nonatomic) AFDictationConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDictationConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AFDictationOptions *dictationOptions; // ivar: _dictationOptions
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *lastReceivedPartials; // ivar: _lastReceivedPartials
@property (copy, nonatomic) NSString *lastUsedDetectedLanguage; // ivar: _lastUsedDetectedLanguage
@property (copy, nonatomic) NSString *lastUsedPrimaryLanguage; // ivar: _lastUsedPrimaryLanguage
@property (retain, nonatomic) NSMutableArray *lastUsedTopLanguages; // ivar: _lastUsedTopLanguages
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection; // ivar: _lowConfidenceAboutLanguageDetection
@property (nonatomic) BOOL offlineOnly; // ivar: _offlineOnly
@property (nonatomic) BOOL receivedMultilingualResultsCommand; // ivar: _receivedMultilingualResultsCommand
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UIDictationConnectionTokenFilterProtocol> *tokenFilter; // ivar: _tokenFilter


+(BOOL)dictationIsSupportedForLanguageCode:(id)arg0 error:(*id)arg1 ;
+(BOOL)dictationRestricted;
+(BOOL)isDictationAvailable;
+(id)analytics;
+(id)interpretationFromSpeechTokens:(id)arg0 startIndex:(NSUInteger)arg1 filterBlock:(id)arg2 ;
+(void)_updateFromGlobalOptions:(id)arg0 ;
+(void)afDelegate:(id)arg0 didReceiveSearchResults:(id)arg1 recognizedText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
+(void)cacheSupportedDictationLanguages;
-(BOOL)dictationIsAvailableForLanguage:(id)arg0 ;
-(NSInteger)speechEventTypeForDictationActivationType:(NSUInteger)arg0 ;
-(float)averagePower;
-(id)_createConnectionOptions;
-(id)_dictationOptions:(id)arg0 ;
-(id)_initializeWithOptions:(id)arg0 ;
-(id)_speechOptions:(id)arg0 ;
-(id)languageDetectionUserContext;
-(void)_startWithOptions:(id)arg0 ;
-(void)beginAvailabilityMonitoring;
-(void)cancelAvailabilityMonitoring;
-(void)cancelSpeech;
-(void)dictationConnection:(id)arg0 didBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3 ;
-(void)dictationConnection:(id)arg0 didReceiveSearchResults:(id)arg1 recognizedText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg0 didRecognizeMultilingualSpeech:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizePartialResult:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)dictationConnection:(id)arg0 didRecognizeTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)dictationConnection:(id)arg0 languageDetectorFailedWithError:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidBeginWithOptions:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg0 ;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg0 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg0 ;
-(void)endSession;
-(void)logDidAcceptDictationResult:(id)arg0 reason:(id)arg1 result:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)logDidAcceptReplacement:(id)arg0 replacementLanguageCode:(id)arg1 originalText:(id)arg2 correctionIdentifier:(id)arg3 interactionIdentifier:(id)arg4 ;
-(void)logDidSelectAlternative:(id)arg0 correctionIdentifier:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)logDidShowAlternatives:(id)arg0 correctionIdentifier:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)preheat;
-(void)restartDictation;
-(void)sendSpeechCorrection:(id)arg0 forIdentifier:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg0 interactionIdentifier:(id)arg1 ;
-(void)start;
-(void)startForFileAtURL:(id)arg0 forLanguage:(id)arg1 ;
-(void)stopSpeech:(id)arg0 activationType:(NSUInteger)arg1 result:(id)arg2 suppressAlert:(BOOL)arg3 ;


@end


#endif