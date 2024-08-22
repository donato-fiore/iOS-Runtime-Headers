// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIAUTOSHIFTREGULAREXPRESSIONLOADER_H
#define TIAUTOSHIFTREGULAREXPRESSIONLOADER_H

@class NSString, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface TIAutoshiftRegularExpressionLoader : NSObject

@property (readonly, nonatomic) NSString *nextSentencePrefixCharacters; // ivar: _nextSentencePrefixCharacters
@property (retain, nonatomic) NSRegularExpression *regex; // ivar: _regex
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters; // ivar: _sentenceDelimitingCharacters
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters; // ivar: _sentenceTrailingCharacters


+(id)loaderWithSentenceDelimiters:(id)arg0 trailingChars:(id)arg1 prefixChars:(id)arg2 ;
-(id)initWithSentenceDelimiters:(id)arg0 trailingChars:(id)arg1 prefixChars:(id)arg2 ;
-(void)startBackgroundLoad;


@end


#endif