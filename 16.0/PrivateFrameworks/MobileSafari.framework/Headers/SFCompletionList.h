// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMPLETIONLIST_H
#define SFCOMPLETIONLIST_H


#import <Foundation/Foundation.h>


@interface SFCompletionList : NSObject



+(id)_filterSearchLinks:(id)arg0 ;
+(id)_getResultSections:(id)arg0 topHitMatches:(id)arg1 ;
+(void)_resultsForQueryLegacy:(id)arg0 completion:(id)arg1 ;
+(void)resetSearchParameters;
+(void)resultsForQuery:(id)arg0 completion:(id)arg1 ;
+(void)setSearchParameter:(id)arg0 toValue:(id)arg1 ;


@end


#endif