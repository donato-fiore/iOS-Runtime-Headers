// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMRESULTS_H
#define RLMRESULTS_H

@class NSString;
@protocol RLMThreadConfined_Private, RLMFastEnumerable, RLMCollection, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "RLMRealm.h"

@interface RLMResults : NSObject <RLMThreadConfined_Private, RLMFastEnumerable, RLMCollection, NSFastEnumeration>

 {
    Results _results;
    *void _info;
}


@property (readonly, nonatomic, getter=isAttached) BOOL attached;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *objectClassName;
@property (readonly, nonatomic) *void objectInfo;
@property (readonly, nonatomic) id *objectiveCMetadata;
@property (nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) RLMRealm *realm; // ivar: _realm
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(id)emptyDetachedResults;
+(id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )arg0 metadata:(id)arg1 realm:(id)arg2 ;
+(id)resultsWithObjectInfo:(*void)arg0 results:(*void)arg1 ;
-(?)initWithResults;
-(?)subresultsWithResults;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObjectWhere:(id)arg0 ;
-(NSUInteger)indexOfObjectWhere:(id)arg0 args:(char *)arg1 ;
-(NSUInteger)indexOfObjectWithPredicate:(id)arg0 ;
-(id)_aggregateForKeyPath:(id)arg0 method:(id)arg1 methodName:(BOOL)arg2 returnNilForEmpty;
-(id)_avgForKeyPath:(id)arg0 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg0 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg0 ;
-(id)_maxForKeyPath:(id)arg0 ;
-(id)_minForKeyPath:(id)arg0 ;
-(id)_sumForKeyPath:(id)arg0 ;
-(id)_unionOfArraysForKeyPath:(id)arg0 ;
-(id)_unionOfObjectsForKeyPath:(id)arg0 ;
-(id)addNotificationBlock:(id)arg0 ;
-(id)aggregate:(id)arg0 method:(id)arg1 methodName:(BOOL)arg2 returnNilForEmpty;
-(id)averageOfProperty:(id)arg0 ;
-(id)distinctResultsUsingKeyPaths:(id)arg0 ;
-(id)fastEnumerator;
-(id)firstObject;
-(id)initPrivate;
-(id)initWithObjectInfo:(*void)arg0 results:(*void)arg1 ;
-(id)lastObject;
-(id)maxOfProperty:(id)arg0 ;
-(id)minOfProperty:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectsWhere:(id)arg0 ;
-(id)objectsWhere:(id)arg0 args:(char *)arg1 ;
-(id)objectsWithPredicate:(id)arg0 ;
-(id)sortedResultsUsingDescriptors:(id)arg0 ;
-(id)sortedResultsUsingKeyPath:(id)arg0 ascending:(BOOL)arg1 ;
-(id)sumOfProperty:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(struct TableView )tableView;
-(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )makeThreadSafeReference;
-(void)deleteObjectsFromRealm;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif