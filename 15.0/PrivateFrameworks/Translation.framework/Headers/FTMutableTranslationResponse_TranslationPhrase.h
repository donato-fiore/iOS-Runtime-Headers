// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETRANSLATIONRESPONSE_TRANSLATIONPHRASE_H
#define FTMUTABLETRANSLATIONRESPONSE_TRANSLATIONPHRASE_H

@class TranslationPhrase, NSString, NSArray;



@interface FTMutableTranslationResponse_TranslationPhrase : TranslationPhrase

@property (nonatomic) float confidence;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSString *meta_info;
@property (copy, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSArray *translated_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif