// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLSEARCHPARSERMANAGER_H
#define NLSEARCHPARSERMANAGER_H


#import <Foundation/Foundation.h>


@interface NLSearchParserManager : NSObject {
    *void _parser;
}




+(id)availableLanguages;
+(id)defaultManager;
-(id)initWithLocale:(id)arg0 context:(id)arg1 options:(id)arg2 ;
-(id)initWithOptions:(id)arg0 ;
-(id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;
-(void)dealloc;
-(void)enumerateAttributedParsesForQuery:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateDateRangeAttributedParseForOptions:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateSearchSuggestions:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;


@end


#endif