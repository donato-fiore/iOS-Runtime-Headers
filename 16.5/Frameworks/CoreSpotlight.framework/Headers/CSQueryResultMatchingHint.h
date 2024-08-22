// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSQUERYRESULTMATCHINGHINT_H
#define CSQUERYRESULTMATCHINGHINT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CSQueryResultMatchingHint : NSObject

@property (readonly, copy) NSString *attribute; // ivar: _attribute
@property (readonly, copy) NSArray *tokens; // ivar: _tokens


+(id)_snippetHintAttributeSet;
+(id)randomTokensFromText:(id)arg0 maxTokens:(NSUInteger)arg1 maxTextLength:(NSUInteger)arg2 ;
-(BOOL)isValidAttributeForSnippetHint:(id)arg0 ;
-(id)description;
-(id)flattenedHints;
-(id)initWithAttribute:(id)arg0 tokens:(id)arg1 ;
-(id)initWithBackingHint:(id)arg0 ;


@end


#endif