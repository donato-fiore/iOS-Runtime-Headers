// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTLIBRARYANDFILTERING_H
#define WFCONTENTLIBRARYANDFILTERING_H


#import <Foundation/Foundation.h>


@interface WFContentLibraryANDFiltering : NSObject



+(Class)objectClass;
+(void)getItemsMatchingComparisonPredicates:(id)arg0 resultHandler:(id)arg1 ;
+(void)getItemsMatchingPredicate:(id)arg0 resultHandler:(id)arg1 ;
+(void)performCustomFilteringUsingComparisonPredicates:(id)arg0 resultHandler:(id)arg1 ;
+(void)performCustomFilteringUsingORComparisonPredicates:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif