// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSEARCHQUERYSHIM_H
#define CPSEARCHQUERYSHIM_H

@class NSArray;
@protocol CPSearch;

#import <Foundation/Foundation.h>


@interface CPSearchQueryShim : NSObject {
    _opaque_pthread_mutex_t _stateLock;
    _opaque_pthread_mutex_t _handlerBlockLock;
    NSInteger _searchState;
    BOOL _canceled;
    BOOL _csSearchQuery;
}


@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (copy) id *changedItemsHandler; // ivar: _changedItemsHandler
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (copy) id *countChangedHandler; // ivar: _countChangedHandler
@property (copy) id *foundItemHandler; // ivar: _foundItemHandler
@property (copy) id *foundItemsHandler; // ivar: _foundItemsHandler
@property (copy) id *gatherEndedHandler; // ivar: _gatherEndedHandler
@property (copy) id *removedItemsHandler; // ivar: _removedItemsHandler
@property (readonly, nonatomic) NSObject<CPSearch> *search; // ivar: _search


+(id)log;
-(id)debugDescription;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 searchParamStr:(id)arg1 context:(id)arg2 ;
-(id)initWithSearch:(id)arg0 context:(id)arg1 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_handleCompletionWithError:(id)arg0 ;
-(void)_handleFoundItems:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif