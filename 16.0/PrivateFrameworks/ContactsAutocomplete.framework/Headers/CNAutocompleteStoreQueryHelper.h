// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESTOREQUERYHELPER_H
#define CNAUTOCOMPLETESTOREQUERYHELPER_H

@protocol CNAutocompleteFetchDelegate, CNAutocompleteProbeProvider, CNScheduler, CNAutocompleteSearchProvider;

#import <Foundation/Foundation.h>

#import "CNAutocompleteStoreQueryContext.h"
#import "CNAutocompleteUserSession.h"

@interface CNAutocompleteStoreQueryHelper : NSObject

@property (readonly, weak, nonatomic) NSObject<CNAutocompleteFetchDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider
@property (readonly, nonatomic) CNAutocompleteStoreQueryContext *queryContext; // ivar: _queryContext
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSObject<CNAutocompleteSearchProvider> *searchProvider; // ivar: _searchProvider
@property (readonly, nonatomic) CNAutocompleteUserSession *userSession; // ivar: _userSession


-(id)executeFetchRequest:(id)arg0 delegate:(id)arg1 delegateToken:(id)arg2 ;
-(id)initWithSearchProvider:(id)arg0 delegate:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3 userSession:(id)arg4 ;


@end


#endif