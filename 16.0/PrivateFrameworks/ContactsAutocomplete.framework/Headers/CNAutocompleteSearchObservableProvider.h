// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESEARCHOBSERVABLEPROVIDER_H
#define CNAUTOCOMPLETESEARCHOBSERVABLEPROVIDER_H

@class NSString;
@protocol CNAutocompleteSearchObservableProvider, CNScheduler, CNAutocompleteSearchProvider;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSObject<CNAutocompleteSearchProvider> *searchProvider; // ivar: _searchProvider
@property (readonly) Class superclass;


+(id)providerWithSearchProvider:(id)arg0 fetchRequest:(id)arg1 scheduler:(id)arg2 ;
-(BOOL)shouldAllowPredictionSearchToSourceResults;
-(id)calendarServersSearchObservable;
-(id)directoryServersSearchObservable;
-(id)initWithSearchProvider:(id)arg0 fetchRequest:(id)arg1 scheduler:(id)arg2 ;
-(id)localExtensionSearchObservables;
-(id)localSearchObservable;
// -(id)observableWithWrappedSearchProviderGetter:(id)arg0 name:(unk)arg1  ;
-(id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg0 ;
-(id)recentsSearchObservable;
-(id)suggestionsSearchObservable;


@end


#endif