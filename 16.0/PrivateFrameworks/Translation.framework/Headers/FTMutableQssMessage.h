// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEQSSMESSAGE_H
#define FTMUTABLEQSSMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTQssMessage.h"
#import "FTAfmAStarFuzzyMatchingMessage.h"
#import "FTApgBatchRecoverMessage.h"
#import "FTApgPronGuessMessage.h"
#import "FTAsrCorrectionsValidatorMessage.h"
#import "FTAsrErrorBlamerMessage.h"
#import "FTAsrGraphemeToPhonemeMessage.h"
#import "FTAsrItnMessage.h"
#import "FTAsrKeywordFinderMessage.h"
#import "FTAsrPostItnHammerMessage.h"
#import "FTAsrRecognitionMessage.h"
#import "FTAsrTextNormalizationMessage.h"
#import "FTBlazarBatchTranslationMessage.h"
#import "FTBlazarMultiUserMessage.h"
#import "FTBlazarMultilingualMessage.h"
#import "FTBlazarServiceDiscoveryMessage.h"
#import "FTBlazarSpeechTranslationMessage.h"
#import "FTBlazarTextToSpeechRouterMessage.h"
#import "FTBlazarTextToSpeechRouterStreamingMessage.h"
#import "FTLmtLmScorerMessage.h"
#import "FTMtStreamingTranslationMessage.h"
#import "FTMtTranslationMessage.h"
#import "FTNapgCreateLanguageProfileMessage.h"
#import "FTNlShortcutFuzzyMatchMessage.h"
#import "FTSlsLanguageDetectionMessage.h"
#import "FTTtsTextToSpeechMessage.h"
#import "FTTtsTextToSpeechSpeechFeatureMessage.h"
#import "FTTtsTextToSpeechStreamingMessage.h"
#import "FTDisableSessionLog.h"
#import "FTErrorMessage.h"

@interface FTMutableQssMessage : FTQssMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *container_message;
@property (copy, nonatomic) FTAfmAStarFuzzyMatchingMessage *container_messageAsFTAfmAStarFuzzyMatchingMessage;
@property (copy, nonatomic) FTApgBatchRecoverMessage *container_messageAsFTApgBatchRecoverMessage;
@property (copy, nonatomic) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property (copy, nonatomic) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property (copy, nonatomic) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property (copy, nonatomic) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property (copy, nonatomic) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property (copy, nonatomic) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property (copy, nonatomic) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property (copy, nonatomic) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property (copy, nonatomic) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property (copy, nonatomic) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property (copy, nonatomic) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property (copy, nonatomic) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property (copy, nonatomic) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property (copy, nonatomic) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property (copy, nonatomic) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property (copy, nonatomic) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property (copy, nonatomic) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property (copy, nonatomic) FTMtStreamingTranslationMessage *container_messageAsFTMtStreamingTranslationMessage;
@property (copy, nonatomic) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property (copy, nonatomic) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property (copy, nonatomic) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property (copy, nonatomic) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property (copy, nonatomic) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property (copy, nonatomic) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property (copy, nonatomic) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property (nonatomic) NSInteger container_message_type;
@property (copy, nonatomic) FTDisableSessionLog *disable_session_log;
@property (copy, nonatomic) FTErrorMessage *error_message;


+(Class)container_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)container_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)container_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif