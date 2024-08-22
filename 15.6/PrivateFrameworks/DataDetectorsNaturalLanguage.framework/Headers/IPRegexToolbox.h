// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPREGEXTOOLBOX_H
#define IPREGEXTOOLBOX_H


#import <Foundation/Foundation.h>


@interface IPRegexToolbox : NSObject



+(BOOL)isRangeInsideQuotationMarks:(struct _NSRange )arg0 text:(id)arg1 limitToSurroundingText:(BOOL)arg2 ;
+(BOOL)isRangeNearbyExclusionKeyword:(struct _NSRange )arg0 text:(id)arg1 limitToSurroundingText:(BOOL)arg2 language:(id)arg3 ;
+(NSUInteger)numberOfMatchesForRegex:(id)arg0 inString:(id)arg1 needsToLowercase:(BOOL)arg2 ;
+(id)emailSubjectPrefixRegex;
+(id)firstMatchingKeywordForRegex:(id)arg0 inString:(id)arg1 needsToLowercase:(BOOL)arg2 ;
+(id)matchingKeywordResultsForRegex:(id)arg0 inString:(id)arg1 needsToLowercase:(BOOL)arg2 ;
+(id)regexPatternByUncapturingPattern:(id)arg0 ;
+(id)regexPatternForLanguageID:(id)arg0 eventVocabularyArray:(id)arg1 ;
+(id)regexPatternWithPrefix:(id)arg0 suffix:(id)arg1 choices:(id)arg2 ;
+(id)regularExpressionWithKey:(id)arg0 generator:(id)arg1 ;


@end


#endif