// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMMANAGEDARRAY_H
#define RLMMANAGEDARRAY_H

@class NSString;
@protocol RLMThreadConfined_Private, RLMFastEnumerable;


#import "RLMArray.h"
#import "RLMRealm.h"

@interface RLMManagedArray : RLMArray <RLMThreadConfined_Private, RLMFastEnumerable>

 {
    List _backingList;
    RLMRealm *_realm;
    *void _objectInfo;
    *void _ownerInfo;
    unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>> _observationInfo;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void objectInfo;
@property (readonly, nonatomic) id *objectiveCMetadata;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly) Class superclass;


+(id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )arg0 metadata:(id)arg1 realm:(id)arg2 ;
-(BOOL)isBackedByList:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInvalidated;
-(NSUInteger)columnForProperty:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObjectWithPredicate:(id)arg0 ;
-(id)addNotificationBlock:(id)arg0 ;
-(id)averageOfProperty:(id)arg0 ;
-(id)fastEnumerator;
-(id)initWithList:(struct List )arg0 realm:(id)arg1 parentInfo:(*void)arg2 property:(id)arg3 ;
-(id)initWithParent:(id)arg0 property:(id)arg1 ;
-(id)maxOfProperty:(id)arg0 ;
-(id)minOfProperty:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)objectsWithPredicate:(id)arg0 ;
-(id)sortedResultsUsingDescriptors:(id)arg0 ;
-(id)sumOfProperty:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(struct TableView )tableView;
-(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )makeThreadSafeReference;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)deleteObjectsFromRealm;
-(void)exchangeObjectAtIndex:(NSUInteger)arg0 withObjectAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif