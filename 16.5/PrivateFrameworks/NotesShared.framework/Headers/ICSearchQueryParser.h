// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHQUERYPARSER_H
#define ICSEARCHQUERYPARSER_H


#import <Foundation/Foundation.h>


@interface ICSearchQueryParser : NSObject



+(id)_queryStringForSingleTokenString:(id)arg0 queryFields:(id)arg1 matchType:(unsigned char)arg2 queryFlags:(id)arg3 ;
+(id)prefixMatchingQueryStringForSearchString:(id)arg0 enableSpellCheckSPI:(BOOL)arg1 languageForSpellchecking:(id)arg2 expandedTokens:(*id)arg3 ;
+(id)queryStringForExpandedTokens:(id)arg0 queryFields:(id)arg1 matchType:(unsigned char)arg2 ;
+(id)queryStringForSearchString:(id)arg0 queryFields:(id)arg1 matchType:(unsigned char)arg2 ;


@end


#endif