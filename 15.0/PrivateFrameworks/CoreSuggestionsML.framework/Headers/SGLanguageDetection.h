// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGLANGUAGEDETECTION_H
#define SGLANGUAGEDETECTION_H


#import <Foundation/Foundation.h>


@interface SGLanguageDetection : NSObject



+(id)defaultLanguage;
+(id)detectLanguageFromLanguageTags:(id)arg0 ;
+(id)detectLanguageFromLanguageTags:(id)arg0 withMinimumCount:(NSUInteger)arg1 withMinimumAgreement:(CGFloat)arg2 ;
+(id)detectLanguageFromText:(id)arg0 ;
+(id)detectLanguageFromText:(id)arg0 withMaxLength:(NSUInteger)arg1 withMaxTags:(NSUInteger)arg2 withMinimumCount:(NSUInteger)arg3 withMinimumAgreement:(CGFloat)arg4 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg0 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg0 withMinimumCount:(NSUInteger)arg1 withMinimumAgreement:(CGFloat)arg2 ;
+(id)dominantLanguageTagFromText:(id)arg0 ;
+(id)dominantLanguageTagFromText:(id)arg0 withMaxLength:(NSUInteger)arg1 withMaxTags:(NSUInteger)arg2 withMinimumCount:(NSUInteger)arg3 withMinimumAgreement:(CGFloat)arg4 ;
+(id)languageForLocaleIdentifier:(id)arg0 ;
+(id)languageTagsFromText:(id)arg0 withMaxLength:(NSUInteger)arg1 withMaxTags:(NSUInteger)arg2 ;
+(struct _NSRange )tokenRangeForText:(id)arg0 maxTruncatedLength:(NSUInteger)arg1 tagger:(id)arg2 taggerOptions:(NSUInteger)arg3 prevTextTokenMaxRange:(NSUInteger)arg4 originalLengthShortfall:(NSUInteger)arg5 lowercaseText:(id)arg6 lowercaseRange:(struct _NSRange )arg7 ;
+(void)logMatchingForRange:(struct _NSRange )arg0 lowercaseRange:(struct _NSRange )arg1 text:(id)arg2 lowercaseText:(id)arg3 ;


@end


#endif