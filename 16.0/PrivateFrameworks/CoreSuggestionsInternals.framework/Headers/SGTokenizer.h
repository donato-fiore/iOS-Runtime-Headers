// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGTOKENIZER_H
#define SGTOKENIZER_H


#import <Foundation/Foundation.h>


@interface SGTokenizer : NSObject



+(id)ftsPrefix:(id)arg0 ;
+(id)ftsTokenize:(id)arg0 ;
+(id)tokenize:(id)arg0 ;
+(void)enumerateTokensInString:(id)arg0 block:(id)arg1 ;
+(void)enumerateTokensInString:(id)arg0 withRange:(struct _NSRange )arg1 block:(id)arg2 ;


@end


#endif