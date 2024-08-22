// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESINFERENCE_H
#define SGQUICKRESPONSESINFERENCE_H

@class _PASRng;

#import <Foundation/Foundation.h>

#import "SGQuickResponsesStore.h"
#import "SGQuickResponsesModel.h"
#import "SGQuickResponsesRanking.h"
#import "SGQuickResponsesPersonalization.h"

@interface SGQuickResponsesInference : NSObject {
    SGQuickResponsesStore *_store;
    SGQuickResponsesModel *_model;
    SGQuickResponsesRanking *_ranking;
    SGQuickResponsesPersonalization *_personalization;
    _PASRng *_rng;
}




+(id)dynamicIndicesAndTopIsDynamic:(id)arg0 config:(id)arg1 ;
+(id)dynamicLabelForScore:(id)arg0 config:(id)arg1 ;
+(id)languageForLocale:(id)arg0 withLanguageDetectionForMessage:(id)arg1 ;
+(id)normalizeLabelScores:(id)arg0 ;
+(id)normalizeStringForDeduping:(id)arg0 ;
+(id)proactiveTriggerForDynamicLabel:(id)arg0 context:(id)arg1 language:(id)arg2 ;
+(id)proactiveTriggerForDynamicLabel:(id)arg0 context:(id)arg1 language:(id)arg2 useContactNames:(BOOL)arg3 ;
+(id)quickResponsesForMessage:(id)arg0 context:(id)arg1 time:(id)arg2 maxResponses:(NSUInteger)arg3 locale:(id)arg4 recipientHandles:(id)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 espressoBinFilePath:(id)arg8 ;
+(id)quickResponsesForMessage:(id)arg0 conversationTurns:(id)arg1 maxResponses:(NSUInteger)arg2 localeIdentifier:(id)arg3 recipientHandles:(id)arg4 chunkPath:(id)arg5 plistPath:(id)arg6 espressoBinFilePath:(id)arg7 useContactNames:(BOOL)arg8 ;
+(id)stringsForQuickResponses:(id)arg0 ;
+(void)registerDisplayedQuickResponses:(id)arg0 plistPath:(id)arg1 ;
+(void)registerResponse:(id)arg0 position:(id)arg1 isCanned:(BOOL)arg2 isUsingQuickResponses:(BOOL)arg3 locale:(id)arg4 plistPath:(id)arg5 ;
-(id)_getMergedPromptForMessage:(id)arg0 conversationTurns:(id)arg1 ;
-(id)addCustomResponsesToCommonResponses:(id)arg0 language:(id)arg1 locale:(id)arg2 recipient:(id)arg3 modelScores:(id)arg4 maxResponses:(NSUInteger)arg5 customResponsesParams:(id)arg6 ;
-(id)initWithLanguage:(id)arg0 chunkPath:(id)arg1 plistPath:(id)arg2 espressoBinFilePath:(id)arg3 ;
-(id)initWithModel:(id)arg0 ranking:(id)arg1 personalization:(id)arg2 rng:(id)arg3 store:(id)arg4 ;
-(id)quickResponsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 conversationHistory:(id)arg2 context:(id)arg3 time:(id)arg4 language:(id)arg5 locale:(id)arg6 recipients:(id)arg7 ;
-(id)quickResponsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 conversationHistory:(id)arg2 context:(id)arg3 time:(id)arg4 language:(id)arg5 locale:(id)arg6 recipients:(id)arg7 useContactNames:(BOOL)arg8 ;
-(id)quickResponsesFromReplyTextIds:(id)arg0 isConfident:(BOOL)arg1 config:(id)arg2 ;
-(id)randomizedReplyTextIdsForSemanticClass:(NSUInteger)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
-(id)replyTextIdsForSemanticClass:(NSUInteger)arg0 responseCount:(NSUInteger)arg1 config:(id)arg2 ;
-(id)replyTextsFromSemanticClasses:(id)arg0 config:(id)arg1 ;


@end


#endif