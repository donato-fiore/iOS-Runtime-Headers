// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTRINGTOKENIZER_H
#define CNSTRINGTOKENIZER_H


#import <Foundation/Foundation.h>

#import "CNUnfairLock.h"

@interface CNStringTokenizer : NSObject

@property (readonly, nonatomic) CNUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) *__CFStringTokenizer tokenizer; // ivar: _tokenizer


+(BOOL)isCharacterNonBreaking:(unsigned short)arg0 ;
+(id)adjustRanges:(id)arg0 toIncludeNonBreakingCharactersInString:(id)arg1 ;
+(id)tokenizeString:(id)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)rangesOfWordTokensInString:(id)arg0 ;
-(id)rangesOfWordUnitTokensInString:(id)arg0 ;
-(id)tokenizeString:(id)arg0 ;
-(void)dealloc;


@end


#endif