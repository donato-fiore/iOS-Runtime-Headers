// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETERECENTCONTACTSLIBRARY_H
#define CNAUTOCOMPLETERECENTCONTACTSLIBRARY_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteRecentContactsLibrary : NSObject



+(NSUInteger)implicitGroupThresholdForSearchType:(NSUInteger)arg0 ;
+(id)addressKindsForSearchType:(NSUInteger)arg0 ;
+(id)domainsForFetchRequest:(id)arg0 ;
+(id)domainsForSearchType:(NSUInteger)arg0 ;
+(id)library:(id)arg0 recentContactsWithRequest:(id)arg1 ;
+(id)queryForRequest:(id)arg0 ;
+(void)addLoggingHandlersToFuture:(id)arg0 request:(id)arg1 ;


@end


#endif