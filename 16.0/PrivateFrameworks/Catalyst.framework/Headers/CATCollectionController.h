// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATCOLLECTIONCONTROLLER_H
#define CATCOLLECTIONCONTROLLER_H

@class NSMutableArray, NSMutableSet, NSString, NSMutableIndexSet, NSSet, NSTimer, NSValueTransformer, NSArray, NSPredicate, NSIndexSet;
@protocol CATCollectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface CATCollectionController : NSObject {
    NSMutableArray *mPendingArrangedObjects;
    NSMutableArray *mPendingInsertedObjects;
    NSMutableArray *mPendingDeletedObjects;
    NSMutableSet *mContent;
    id *mTarget;
    NSString *mKeyPath;
    NSMutableIndexSet *mChangingSelection;
    BOOL mDelegateKnowsContentIsChanging;
    NSSet *mKeysAffectingArrangement;
    NSMutableSet *mObjectsToRearrange;
    NSTimer *mRearrangeTimer;
    NSValueTransformer *mTransformer;
    id *mOriginalObjects;
}


@property (retain) NSArray *arrangedObjects; // ivar: _arrangedObjects
@property BOOL automaticallyRearrangesObjects; // ivar: _automaticallyRearrangesObjects
@property (readonly, nonatomic) NSSet *content;
@property (weak) NSObject<CATCollectionControllerDelegate> *delegate; // ivar: _delegate
@property (retain) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly) NSArray *selectedObjects;
@property (copy) NSIndexSet *selectionIndexes; // ivar: _selectionIndexes
@property (copy) NSArray *sortDescriptors; // ivar: _sortDescriptors


-(NSUInteger)arrangedIndexOfObject:(id)arg0 ;
-(NSUInteger)newIndexForObject:(id)arg0 inArrangedObjects:(id)arg1 ;
-(NSUInteger)numberOfArrangedObjects;
-(id)arrangedObjectAtIndex:(NSUInteger)arg0 ;
-(id)arrangedObjectsAtIndexes:(id)arg0 ;
-(id)init;
-(id)initWithObjects:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObserversToObject:(id)arg0 forKeyPaths:(id)arg1 ;
-(void)arrangeObject:(id)arg0 ;
-(void)bindContentToObject:(id)arg0 withKeyPath:(id)arg1 ;
-(void)bindContentToObject:(id)arg0 withKeyPath:(id)arg1 usingTransformer:(id)arg2 ;
-(void)changeContent:(id)arg0 ;
-(void)changeObject:(id)arg0 atIndex:(NSUInteger)arg1 forChangeType:(NSUInteger)arg2 newIndex:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)notifyArrangedObjectsDidChangeWithPreviousArrangedObjects:(id)arg0 ;
-(void)notifyArrangedObjectsWillChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)rearrangeObjects;
-(void)rearrangeTimerDidFire:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObserversFromObject:(id)arg0 forKeyPaths:(id)arg1 ;
-(void)resolveArrangedObjectsAtIndexes:(id)arg0 reply:(id)arg1 ;
-(void)scheduleRearrangeTimerIfNeed;
-(void)unbindContent;
-(void)updateKeysAffectingArrangementForceUpdate:(BOOL)arg0 includeAllContent:(BOOL)arg1 ;
-(void)updateObject:(id)arg0 ;


@end


#endif