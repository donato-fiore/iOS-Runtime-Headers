// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRANDOMTEXTGENERATOR_H
#define ICRANDOMTEXTGENERATOR_H


#import <Foundation/Foundation.h>

#import "ICRandomNumberGenerator.h"

@interface ICRandomTextGenerator : NSObject

@property (readonly, nonatomic) BOOL isRightToLeftLanguage;
@property (nonatomic) NSUInteger language; // ivar: _language
@property (retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator; // ivar: _randomNumberGenerator


+(BOOL)hasSpacesBetweenWordsForLanguage:(NSUInteger)arg0 ;
+(id)loadWordsForLanguage:(NSUInteger)arg0 ;
+(id)sentencePunctuationForLanguage:(NSUInteger)arg0 endOfParagraph:(BOOL)arg1 ;
+(id)wordsForLanguage:(NSUInteger)arg0 ;
-(id)generateMinSentences:(NSUInteger)arg0 maxSentences:(NSUInteger)arg1 minWords:(NSUInteger)arg2 maxWords:(NSUInteger)arg3 ;
-(id)generateMinWords:(NSUInteger)arg0 maxWords:(NSUInteger)arg1 ;
-(id)generateWords:(NSUInteger)arg0 minLength:(NSUInteger)arg1 ;
-(id)generateWordsWithMinLength:(NSUInteger)arg0 ;
-(id)initWithRandomNumberGenerator:(id)arg0 ;
-(id)lineOfText;
-(id)paragraph;
-(id)sentence;
-(id)word;


@end


#endif