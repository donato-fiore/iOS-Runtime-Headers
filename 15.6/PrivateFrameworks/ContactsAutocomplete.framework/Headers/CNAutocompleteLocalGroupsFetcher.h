// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETELOCALGROUPSFETCHER_H
#define CNAUTOCOMPLETELOCALGROUPSFETCHER_H

@class NSString;
@protocol CNAutocompleteLocalQueryDelegate;

#import <Foundation/Foundation.h>


@interface CNAutocompleteLocalGroupsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)autocompleteResultsForProperties:(id)arg0 fetchResults:(id)arg1 resultFactory:(id)arg2 contactStore:(id)arg3 ;
-(id)resultsForSearchString:(id)arg0 terms:(id)arg1 properties:(id)arg2 contactStore:(id)arg3 error:(*id)arg4 ;


@end


#endif