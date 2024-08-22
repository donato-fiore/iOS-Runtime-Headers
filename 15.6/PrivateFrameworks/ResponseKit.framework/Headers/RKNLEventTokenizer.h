// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKNLEVENTTOKENIZER_H
#define RKNLEVENTTOKENIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RKNLEventTokenizer : NSObject

@property (readonly) NSString *languageID; // ivar: _languageID
@property *__CFStringTokenizer tokenizer; // ivar: _tokenizer


+(BOOL)isSpecialToken:(id)arg0 ;
+(void)initialize;
-(BOOL)hasEmoticon:(id)arg0 ;
-(id)buildTokenSquence:(id)arg0 withOffset:(NSUInteger)arg1 ;
-(id)getTokens:(id)arg0 ;
-(id)initWithLanguageID:(id)arg0 ;
-(id)processForEmoticons:(id)arg0 ;
-(id)processForEmoticonsAndEmojis:(id)arg0 ;
-(id)processForHyphenation:(id)arg0 ;
-(id)tokenizeWithDataDetectors:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(void)dealloc;


@end


#endif