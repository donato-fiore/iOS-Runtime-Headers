// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONMTRESPONSE_TRANSLATIONPHRASE_H
#define QSSMUTABLESPEECHTRANSLATIONMTRESPONSE_TRANSLATIONPHRASE_H

@class TranslationPhrase, NSString;



@interface QSSMutableSpeechTranslationMtResponse_TranslationPhrase : TranslationPhrase

@property (nonatomic) float confidence;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSString *meta_info;
@property (copy, nonatomic) NSString *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif