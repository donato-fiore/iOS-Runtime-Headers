// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERCLOUDDIRECTORYOBSERVER_H
#define _UIDOCUMENTPICKERCLOUDDIRECTORYOBSERVER_H

@class UIArrayController, NSOrderedSet, NSPredicate, NSURL, NSString, NSDate, NSMetadataQuery, NSOperationQueue, NSArray;
@protocol _UIDocumentPickerDirectoryObserver, OS_dispatch_queue;



@interface _UIDocumentPickerCloudDirectoryObserver : UIArrayController <_UIDocumentPickerDirectoryObserver>

 {
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSURL *_firstURL;
    BOOL _recursive;
}


@property (nonatomic) BOOL afterInitialUpdate; // ivar: _afterInitialUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastSnapshotDate; // ivar: _lastSnapshotDate
@property (retain, nonatomic) NSMetadataQuery *query; // ivar: _query
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (retain, nonatomic) NSOperationQueue *queryWorkerQueue; // ivar: _queryWorkerQueue
@property (retain, nonatomic) NSArray *scopes; // ivar: _scopes
@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (readonly) Class superclass;


-(BOOL)objectAttributeModified:(id)arg0 newObject:(id)arg1 ;
-(id)_queryResultsWithChangedObjects:(id)arg0 changedResults:(*id)arg1 ;
-(id)initWithRecursiveScopes:(id)arg0 delegate:(id)arg1 ;
-(id)initWithScopes:(id)arg0 delegate:(id)arg1 ;
-(id)isVisiblePredicate;
-(void)_initialGatherFinished:(id)arg0 ;
-(void)_queryUpdated:(id)arg0 ;
-(void)_updateObservers:(id)arg0 ;
-(void)_updateQuery;
-(void)assertOnQueryQueue;
-(void)callUpdateHandler:(id)arg0 changeDictionary:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif