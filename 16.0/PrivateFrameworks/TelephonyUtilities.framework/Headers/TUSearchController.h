// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSEARCHCONTROLLER_H
#define TUSEARCHCONTROLLER_H

@class NSMutableSet, CNContactStore, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUSearchController : NSObject {
    os_unfair_lock_s _searchModulesLock;
    NSMutableSet *_idsDestinations;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSMutableArray *recentsModules; // ivar: _recentsModules
@property (retain, nonatomic) NSMutableDictionary *searchModules; // ivar: _searchModules
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue; // ivar: _searchQueue


+(id)sharedInstance;
-(id)_searchModuleCompletionWithModules:(SEL)arg0 searchTerm:(id)arg1 resultsClass:(id)arg2 completion:(Class)arg3 ;
-(id)init;
-(id)recentsModuleCompletionWithCompletion:(SEL)arg0 ;
-(id)searchModuleCompletionWithSearchTerm:(SEL)arg0 completion:(id)arg1 ;
-(void)_cancelRecentSearches;
-(void)_cancelSearchsForSearchTerm:(id)arg0 ;
-(void)_clearIdsDestinations;
-(void)_fetchIdsDestinationsIfNeeded:(id)arg0 withReason:(int)arg1 ;
-(void)recentsWithCompletion:(id)arg0 ;
-(void)searchForString:(id)arg0 completion:(id)arg1 ;


@end


#endif