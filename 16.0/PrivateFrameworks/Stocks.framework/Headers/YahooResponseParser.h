// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef YAHOORESPONSEPARSER_H
#define YAHOORESPONSEPARSER_H


#import <Foundation/Foundation.h>


@interface YahooResponseParser : NSObject



+(id)arrayWithDictionaryKeyPath:(id)arg0 inJSONObject:(id)arg1 wrapResultIfDictionary:(BOOL)arg2 ;
+(id)dictionaryWithDictionaryKeyPath:(id)arg0 inJSONObject:(id)arg1 ;
+(id)objectOfClass:(Class)arg0 withDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 ;
+(id)objectWithDictionaryKeyPath:(id)arg0 inJSONObject:(id)arg1 ;
+(id)parseDataSourceMapFromDataSourceDictionaries:(id)arg0 ;
+(void)parseData:(id)arg0 resultsHandler:(id)arg1 ;
+(void)parseExchangeDictionaries:(id)arg0 parsedExchangeResult:(id)arg1 ;
+(void)parseStockQuoteDictionaries:(id)arg0 withDataSources:(id)arg1 parsedStockResult:(id)arg2 ;


@end


#endif