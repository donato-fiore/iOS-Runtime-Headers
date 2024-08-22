// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVTOKENIZER_H
#define CKVTOKENIZER_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface CKVTokenizer : NSObject {
    unique_ptr<skitbridge::Tokenizer, std::default_delete<skitbridge::Tokenizer>> _tokenizer;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 assetPath:(id)arg1 ;
-(id)initWithLocale:(id)arg0 assetPath:(id)arg1 normalizeWords:(BOOL)arg2 ;
-(id)tokenizeString:(id)arg0 ;


@end


#endif