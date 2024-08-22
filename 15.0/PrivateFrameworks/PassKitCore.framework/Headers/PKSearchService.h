// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSEARCHSERVICE_H
#define PKSEARCHSERVICE_H

@class NSHashTable, NSMutableDictionary;
@protocol PKSearchServiceClientExportedInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKSearchService : NSObject <PKSearchServiceClientExportedInterface>

 {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
    os_unfair_lock_s _lockResults;
    NSMutableDictionary *_results;
}




-(BOOL)canProvideFullResults;
-(BOOL)hasSearchableContentForQuery:(id)arg0 ;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)errorHandlerForMethod:(SEL)arg0 completion:(SEL)arg1 ;
-(id)init;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)cancelQueryWithIdentifier:(id)arg0 ;
-(void)indexedPassesWithCompletion:(id)arg0 ;
-(void)indexedTransactionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)indexedTransactionsWithCompletion:(id)arg0 ;
-(void)invalidateSearchResults;
-(void)regionsWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)resetRegionsCoordinatesWithCompletion:(id)arg0 ;
-(void)resetRegionsWithCompletion:(id)arg0 ;
-(void)searchDidCompleteWithError:(id)arg0 forIdentifier:(id)arg1 ;
-(void)searchDidReceivePartialResults:(id)arg0 forIdentifier:(id)arg1 ;
-(void)searchWithQuery:(id)arg0 ;
-(void)transactionsMissingRegionsWithCompletion:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateRegionWithIdentifier:(id)arg0 localizedName:(id)arg1 boundingRegion:(struct ? )arg2 mapsIdentifier:(NSUInteger)arg3 providerIdentifier:(int)arg4 completion:(id)arg5 ;


@end


#endif