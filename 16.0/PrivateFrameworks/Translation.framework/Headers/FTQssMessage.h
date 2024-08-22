// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTQSSMESSAGE_H
#define FTQSSMESSAGE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying, FLTBFBufferAccessor><NSCopying;

#import <Foundation/Foundation.h>

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

@interface FTQssMessage : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *QssMessage _root;
}


@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *container_message;
@property (readonly, nonatomic) FTAfmAStarFuzzyMatchingMessage *container_messageAsFTAfmAStarFuzzyMatchingMessage;
@property (readonly, nonatomic) FTApgBatchRecoverMessage *container_messageAsFTApgBatchRecoverMessage;
@property (readonly, nonatomic) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property (readonly, nonatomic) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property (readonly, nonatomic) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property (readonly, nonatomic) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property (readonly, nonatomic) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property (readonly, nonatomic) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property (readonly, nonatomic) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property (readonly, nonatomic) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property (readonly, nonatomic) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property (readonly, nonatomic) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property (readonly, nonatomic) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property (readonly, nonatomic) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property (readonly, nonatomic) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property (readonly, nonatomic) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property (readonly, nonatomic) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property (readonly, nonatomic) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property (readonly, nonatomic) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property (readonly, nonatomic) FTMtStreamingTranslationMessage *container_messageAsFTMtStreamingTranslationMessage;
@property (readonly, nonatomic) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property (readonly, nonatomic) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property (readonly, nonatomic) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property (readonly, nonatomic) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property (readonly, nonatomic) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property (readonly, nonatomic) NSInteger container_message_type;
@property (readonly, nonatomic) FTDisableSessionLog *disable_session_log;
@property (readonly, nonatomic) FTErrorMessage *error_message;


+(Class)container_message_immutableClassForType:(NSInteger)arg0 ;
+(NSInteger)container_message_typeForImmutableObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct QssMessage *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct QssMessage *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::QssMessage> )addObjectToBuffer:(*void)arg0 ;


@end


#endif