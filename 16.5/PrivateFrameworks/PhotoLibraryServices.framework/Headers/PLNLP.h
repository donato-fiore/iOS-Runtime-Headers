// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLNLP_H
#define PLNLP_H


#import <Foundation/Foundation.h>


@interface PLNLP : NSObject



+(BOOL)nlpSearchSupportsLocale:(id)arg0 ;
+(id)_englishStopWords;
+(id)_frenchStopWords;
+(id)dateFilterForCMMWithAttributes:(id)arg0 withReferenceDate:(id)arg1 ;
+(id)dateIntervalsFromMessage:(id)arg0 onDate:(id)arg1 ;
+(id)lemmasForToken:(id)arg0 locale:(id)arg1 options:(NSInteger)arg2 ;
+(id)ngramsFromTokens:(id)arg0 ofSize:(NSUInteger)arg1 usingSeparator:(id)arg2 ;
+(id)stopWordsForLanguageCode:(id)arg0 ;
+(id)stringWithoutDiacriticsFromString:(id)arg0 ;
+(id)tokensFromString:(id)arg0 options:(NSInteger)arg1 ;


@end


#endif