// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSITOKENIZER_H
#define PSITOKENIZER_H

@class NSMutableDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface PSITokenizer : NSObject {
    *void _tagger;
    *__CFStringTokenizer _nameTokenizer;
    BOOL _localeIsGerman;
    BOOL _useCache;
    NSMutableDictionary *_cache;
}


@property (retain, nonatomic) NSLocale *locale; // ivar: _locale


+(id)fts5StringFromString:(id)arg0 forMatchType:(NSUInteger)arg1 ;
+(id)fts5StringFromString:(id)arg0 useWildcard:(BOOL)arg1 ;
+(id)ftsTokenizerName;
-(?)tokenizeString:(?)arg0 withOptionstokenOutput;
-(id)initWithLocale:(id)arg0 useCache:(BOOL)arg1 ;
-(id)newTokensFromString:(id)arg0 withOptions:(NSInteger)arg1 outCopyRanges:(*id)arg2 error:(*id)arg3 ;
-(id)normalizeString:(id)arg0 ;
-(int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg0 ;
-(void)_tokenizeString:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)dealloc;
-(void)tokenizePersonName:(id)arg0 tokenOutput:(struct tokenOutput_t *)arg1 ;


@end


#endif