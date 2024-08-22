// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERLOCALDIRECTORYOBSERVER_H
#define _UIDOCUMENTPICKERLOCALDIRECTORYOBSERVER_H

@class UIArrayController, NSArray, NSOrderedSet, NSPredicate, NSMutableDictionary, NSString, NSDate, NSOperationQueue;
@protocol _UIDocumentPickerVnodeDispatchSourceDelegate, _UIDocumentPickerDirectoryObserver, OS_dispatch_queue;



@interface _UIDocumentPickerLocalDirectoryObserver : UIArrayController <_UIDocumentPickerVnodeDispatchSourceDelegate, _UIDocumentPickerDirectoryObserver>

 {
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSObject<OS_dispatch_queue> *_queryDispatchQueue;
    NSArray *_sources;
    NSMutableDictionary *_resultsForSources;
    BOOL _updateScheduled;
}


@property (nonatomic) BOOL afterInitialUpdate; // ivar: _afterInitialUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastSnapshotDate; // ivar: _lastSnapshotDate
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (retain, nonatomic) NSOperationQueue *queryWorkerQueue; // ivar: _queryWorkerQueue
@property (retain, nonatomic) NSOrderedSet *staticItems;
@property (readonly) Class superclass;


-(BOOL)objectAttributeModified:(id)arg0 newObject:(id)arg1 ;
-(id)gatherResults;
-(id)gatherResultsForSource:(id)arg0 ;
-(id)initWithScopes:(id)arg0 delegate:(id)arg1 ;
-(id)isVisiblePredicate;
-(void)callUpdateHandler:(id)arg0 changeDictionary:(id)arg1 ;
-(void)dealloc;
-(void)dispatchSourceDidReceiveEvent:(id)arg0 ;
-(void)initialUpdate;
-(void)invalidate;
-(void)updateResultsForSource:(id)arg0 ;


@end


#endif