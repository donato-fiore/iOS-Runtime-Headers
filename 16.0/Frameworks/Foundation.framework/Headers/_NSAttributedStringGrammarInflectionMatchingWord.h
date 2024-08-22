// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSATTRIBUTEDSTRINGGRAMMARINFLECTIONMATCHINGWORD_H
#define _NSATTRIBUTEDSTRINGGRAMMARINFLECTIONMATCHINGWORD_H

@protocol NSCopying, _NSAttributedStringGrammarInflecting;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "_NSAttributedStringGrammar.h"

@interface _NSAttributedStringGrammarInflectionMatchingWord : NSObject <NSCopying, _NSAttributedStringGrammarInflecting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) _NSAttributedStringGrammar *matchingGrammar; // ivar: _matchingGrammar
@property (readonly) Class superclass;
@property (readonly) NSString *wordToken; // ivar: _wordToken


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithWordToken:(id)arg0 matchingGrammar:(id)arg1 ;
-(void)dealloc;


@end


#endif