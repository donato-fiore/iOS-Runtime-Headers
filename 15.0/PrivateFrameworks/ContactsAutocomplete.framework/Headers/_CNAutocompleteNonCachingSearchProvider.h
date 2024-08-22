// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETENONCACHINGSEARCHPROVIDER_H
#define _CNAUTOCOMPLETENONCACHINGSEARCHPROVIDER_H

@class NSString;
@protocol CNAutocompleteSearchProvider;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)calendarServerSearch;
-(id)directoryServerSearch;
-(id)localExtensionSearches;
-(id)localSearch;
-(id)predictionSearch;
-(id)recentsSearch;
-(id)suggestionsSearch;


@end


#endif