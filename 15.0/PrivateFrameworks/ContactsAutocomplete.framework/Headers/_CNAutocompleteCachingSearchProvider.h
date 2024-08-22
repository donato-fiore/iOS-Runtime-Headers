// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETECACHINGSEARCHPROVIDER_H
#define _CNAUTOCOMPLETECACHINGSEARCHPROVIDER_H

@class NSString;
@protocol CNAutocompleteSearchProvider, CNFuture;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

 {
    id<CNFuture> *_localSearchFuture;
    id<CNFuture> *_recentsSearchFuture;
    id<CNFuture> *_suggestionsSearchFuture;
    id<CNFuture> *_predictionSearchFuture;
    id<CNFuture> *_localExtensionSearchesFuture;
    id<CNFuture> *_directoryServerSearchFuture;
    id<CNFuture> *_calendarServerSearchFuture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)calendarServerSearch;
-(id)directoryServerSearch;
-(id)initWithSearchProvider:(id)arg0 ;
-(id)localExtensionSearches;
-(id)localSearch;
-(id)predictionSearch;
-(id)recentsSearch;
-(id)suggestionsSearch;


@end


#endif