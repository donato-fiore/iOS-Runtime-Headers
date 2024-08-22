// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESPEECHTRANSLATIONMTRESPONSE_H
#define FTMUTABLESPEECHTRANSLATIONMTRESPONSE_H

@class NSString, NSArray;


#import "FTSpeechTranslationMtResponse.h"
#import "FTTranslationLocalePair.h"

@interface FTMutableSpeechTranslationMtResponse : FTSpeechTranslationMtResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (nonatomic) BOOL is_final_result;
@property (copy, nonatomic) NSArray *n_best_translated_phrases;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTTranslationLocalePair *translation_locale_pair;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif