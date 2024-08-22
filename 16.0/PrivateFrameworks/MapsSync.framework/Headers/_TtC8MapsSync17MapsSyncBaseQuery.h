// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC17MAPSSYNCBASEQUERY_H
#define _TTC8MAPSSYNC17MAPSSYNCBASEQUERY_H

@class NSPredicate;
@protocol _TtP8MapsSync28MapsSyncGenericQueryDelegate_, _TtP8MapsSync36MapsSyncFetchedResultsChangeDelegate_, _TtP8MapsSync33MapsSyncGenericQueryMergeDelegate_, _TtP8MapsSync25MapsSyncDataQueryDelegate_, _TtP8MapsSync21MapsSyncQueryProtocol_, _TtP8MapsSync30MapsSyncDataQueryMergeDelegate_;

#import <Foundation/Foundation.h>

#import "_TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate.h"

@interface _TtC8MapsSync17MapsSyncBaseQuery : NSObject <_TtP8MapsSync28MapsSyncGenericQueryDelegate_, _TtP8MapsSync36MapsSyncFetchedResultsChangeDelegate_, _TtP8MapsSync33MapsSyncGenericQueryMergeDelegate_>

 {
    ? _historyToken;
    ? _tokenLock;
    ? _didChangeDebouncer;
    ? _isInitCompleteLock;
    ? _isInitComplete;
}


@property (nonatomic, weak) NSObject<_TtP8MapsSync25MapsSyncDataQueryDelegate_> *delegate; // ivar: delegate
@property (nonatomic, retain) NSObject<_TtP8MapsSync21MapsSyncQueryProtocol_> *genericQuery; // ivar: genericQuery
@property (nonatomic, retain) _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate *mapsSyncFetchedResultsControllerDelegate; // ivar: mapsSyncFetchedResultsControllerDelegate
@property (nonatomic, weak) NSObject<_TtP8MapsSync30MapsSyncDataQueryMergeDelegate_> *mergeDelegate; // ivar: mergeDelegate
@property (nonatomic, retain) NSPredicate *predicate; // ivar: predicate


+(id)additionalNotificationTypes;
+(id)signpostLog;
-(BOOL)isInitComplete;
-(BOOL)isReady;
-(id)findDuplicates:(id)arg0 ;
-(id)init;
-(id)initWithQueryDelegate:(id)arg0 predicate:(id)arg1 ;
-(id)mergeDuplicateObjectsWithDuplicates:(id)arg0 ;
-(void)completeInit;
-(void)deleteAllObjectsWithCompletion:(id)arg0 ;
-(void)fetchBaseContents:(id)arg0 ;
-(void)fetchBaseContentsWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchCountWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchQueryBaseContents:(id)arg0 ;
-(void)fetchQueryBaseContentsWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)fetchedResultsDidChangeObjectWithControllerDelegate:(id)arg0 object:(id)arg1 indexPath:(id)arg2 changeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)fetchedResultsDidChangeWithControllerDelegate:(id)arg0 ;
-(void)fetchedResultsWillChangeWithControllerDelegate:(id)arg0 ;
-(void)preFetchHook:(id)arg0 ;
-(void)queryContentsDidChangeObjectWithNotification:(id)arg0 object:(id)arg1 indexPath:(id)arg2 changeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)queryContentsDidChangeWithNotification:(id)arg0 ;
-(void)queryContentsDidLoadWithNotification:(id)arg0 ;
-(void)queryContentsWillChangeWithNotification:(id)arg0 ;
-(void)queryContextDidChangeWithNotification:(id)arg0 ;
-(void)queryIsReady;
-(void)queryStoreDidChangeWithNotification:(id)arg0 ;
// -(void)reloadContentsWithCompletion:(id)arg0 queue:(unk)arg1  ;
-(void)watchItemsMatchingPredicate:(id)arg0 ;


@end


#endif