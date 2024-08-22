// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMARRAY_H
#define RLMARRAY_H

@class NSString, NSMutableArray;
@protocol RLMThreadConfined_Private, RLMCollection, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "RLMObjectBase.h"
#import "RLMRealm.h"

@interface RLMArray : NSObject <RLMThreadConfined_Private, RLMCollection, NSFastEnumeration>

 {
    NSString *_key;
    RLMObjectBase *_parentObject;
    NSMutableArray *_backingArray;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *objectClassName; // ivar: _objectClassName
@property (readonly, nonatomic) id *objectiveCMetadata;
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )arg0 metadata:(id)arg1 realm:(id)arg2 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObjectWhere:(id)arg0 ;
-(NSUInteger)indexOfObjectWhere:(id)arg0 args:(char *)arg1 ;
-(NSUInteger)indexOfObjectWithPredicate:(id)arg0 ;
-(id)addNotificationBlock:(id)arg0 ;
-(id)aggregateProperty:(id)arg0 operation:(id)arg1 method:(SEL)arg2 ;
-(id)averageOfProperty:(id)arg0 ;
-(id)descriptionWithMaxDepth:(NSUInteger)arg0 ;
-(id)firstObject;
-(id)initWithObjectClassName:(id)arg0 ;
-(id)initWithObjectType:(int)arg0 optional:(BOOL)arg1 ;
-(id)lastObject;
-(id)maxOfProperty:(id)arg0 ;
-(id)minOfProperty:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)objectsWhere:(id)arg0 ;
-(id)objectsWhere:(id)arg0 args:(char *)arg1 ;
-(id)objectsWithPredicate:(id)arg0 ;
-(id)sortedResultsUsingDescriptors:(id)arg0 ;
-(id)sortedResultsUsingKeyPath:(id)arg0 ascending:(BOOL)arg1 ;
-(id)sumOfProperty:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(int)typeForProperty:(id)arg0 ;
-(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )makeThreadSafeReference;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)exchangeObjectAtIndex:(NSUInteger)arg0 withObjectAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif