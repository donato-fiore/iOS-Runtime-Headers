// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLTOKENIZER_H
#define NLTOKENIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NLTokenizer : NSObject {
    NSInteger _unit;
    NSString *_string;
    NSString *_language;
    *__NLTokenizer _tokenizer;
}


@property (retain, nonatomic) NSString *string;
@property (readonly, nonatomic) NSInteger unit;


-(id)_wordCharacterSet;
-(id)initWithUnit:(NSInteger)arg0 ;
-(id)language;
-(id)tokensForRange:(struct _NSRange )arg0 ;
-(struct ? *)_tokenAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )tokenRangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )tokenRangeForRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)enumerateTokensInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)setLanguage:(id)arg0 ;


@end


#endif