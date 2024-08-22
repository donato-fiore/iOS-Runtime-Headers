// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVTOKENIZER_H
#define KVTOKENIZER_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface KVTokenizer : NSObject {
    NSLocale *_locale;
}


@property (readonly, nonatomic) shared_ptr<skitbridge::Tokenizer> tokenizer; // ivar: _tokenizer


+(void)initialize;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 assetPath:(id)arg1 normalizeWords:(BOOL)arg2 ;
-(id)locale;
-(id)queryFromText:(id)arg0 ;
-(void)enumerateTokensOfText:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif