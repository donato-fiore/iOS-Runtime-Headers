// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCITEMCOLLECTIONOBSERVER_H
#define DOCITEMCOLLECTIONOBSERVER_H

@class NSString, NSMutableArray, FPItemCollection;
@protocol FPItemCollectionIndexPathBasedDelegate;

#import <Foundation/Foundation.h>


@interface DOCItemCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) FPItemCollection *itemCollection; // ivar: _itemCollection
@property (retain) NSObject<FPItemCollectionIndexPathBasedDelegate> *soleUpdatableDelegate; // ivar: _soleUpdatableDelegate
@property (retain) NSMutableArray *subscribers; // ivar: _subscribers
@property (readonly) Class superclass;


-(id)addSubscriber:(id)arg0 ;
-(id)initWithItemCollection:(id)arg0 ;
-(void)_enumerateItemCollectionIndexPathBasedDelegatesWithBlock:(id)arg0 ;
-(void)_purgeOrphanedContainers;
-(void)addItemCollectionDelegate:(id)arg0 ;
-(void)collection:(id)arg0 didDeleteItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didMoveItemsFromIndexPaths:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)collection:(id)arg0 didPerformBatchUpdateWithReplayBlock:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1 changes:(id)arg2 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)dealloc;
-(void)notifySubscribers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeItemCollectionDelegate:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif