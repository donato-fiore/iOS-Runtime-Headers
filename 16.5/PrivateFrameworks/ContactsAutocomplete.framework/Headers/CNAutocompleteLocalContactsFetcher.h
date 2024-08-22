// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETELOCALCONTACTSFETCHER_H
#define CNAUTOCOMPLETELOCALCONTACTSFETCHER_H

@class NSString;
@protocol CNAutocompleteLocalQueryDelegate;

#import <Foundation/Foundation.h>


@interface CNAutocompleteLocalContactsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)doesMatchInfo:(id)arg0 matchProperties:(id)arg1 ;
-(id)autocompleteResultsForProperties:(id)arg0 contactPredicate:(id)arg1 contactStore:(id)arg2 resultFactory:(id)arg3 error:(*id)arg4 ;
-(id)autocompleteResultsForProperties:(id)arg0 fetchResults:(id)arg1 resultFactory:(id)arg2 contactStore:(id)arg3 ;
-(id)contactsForPredicate:(id)arg0 properties:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
-(id)keysToFetchForProperties:(id)arg0 ;
-(id)queryNameForLogging;
-(id)resultsForSearchString:(id)arg0 terms:(id)arg1 properties:(id)arg2 contactStore:(id)arg3 error:(*id)arg4 ;
-(id)transformWithProperties:(SEL)arg0 factory:(id)arg1 ;


@end


#endif