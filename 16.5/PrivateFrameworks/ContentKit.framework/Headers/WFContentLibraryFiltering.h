// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTLIBRARYFILTERING_H
#define WFCONTENTLIBRARYFILTERING_H


#import <Foundation/Foundation.h>


@interface WFContentLibraryFiltering : NSObject



+(void)getItemsMatchingQuery:(id)arg0 withInput:(id)arg1 compoundPredicate:(id)arg2 resultHandler:(id)arg3 ;
+(void)getItemsMatchingQuery:(id)arg0 withInput:(id)arg1 resultHandler:(id)arg2 ;
+(void)performCustomFilteringUsingContentPredicates:(id)arg0 compoundPredicateType:(NSUInteger)arg1 forQuery:(id)arg2 withInput:(id)arg3 resultHandler:(id)arg4 ;
+(void)performFallbackFilteringWithItems:(id)arg0 withContentPredicates:(id)arg1 compoundPredicateType:(NSUInteger)arg2 originalQuery:(id)arg3 resultHandler:(id)arg4 ;


@end


#endif