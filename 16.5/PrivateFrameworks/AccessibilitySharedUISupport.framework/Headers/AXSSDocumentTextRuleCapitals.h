// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSDOCUMENTTEXTRULECAPITALS_H
#define AXSSDOCUMENTTEXTRULECAPITALS_H

@class UITextChecker, NSString;


#import "AXSSDocumentTextRule.h"

@interface AXSSDocumentTextRuleCapitals : AXSSDocumentTextRule

@property (retain, nonatomic) UITextChecker *textChecker; // ivar: _textChecker
@property (copy, nonatomic) NSString *textCheckerLanguage; // ivar: _textCheckerLanguage


-(BOOL)checkSpelledCorrectly:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)issuesForWord:(id)arg0 atRange:(struct _NSRange )arg1 previousWord:(id)arg2 previousWordRange:(struct _NSRange )arg3 inText:(id)arg4 ignoreRuleUntilIndex:(*NSInteger)arg5 ;
-(struct _NSRange )checkSpellingOfString:(id)arg0 includeAutocorrect:(BOOL)arg1 ;


@end


#endif