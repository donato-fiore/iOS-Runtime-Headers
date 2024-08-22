// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFWEAKSET_H
#define MFWEAKSET_H

@class NSMutableSet, NSLock;



@interface MFWeakSet : NSMutableSet {
    NSLock *_lock;
    NSUInteger _gen;
    *__CFDictionary _objects;
}




+(id)set;
+(id)setWithArray:(id)arg0 ;
+(id)setWithCapacity:(NSUInteger)arg0 ;
+(id)setWithObject:(id)arg0 ;
+(id)setWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)setWithObjects:(id)arg0 ;
+(id)setWithSet:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_copyAllItems;
-(id)allObjects;
-(id)anyObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithObjects:(id)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(id)initWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectsPassingTest:(id)arg0 ;
-(id)objectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)setByAddingObject:(id)arg0 ;
-(id)setByAddingObjectsFromArray:(id)arg0 ;
-(id)setByAddingObjectsFromSet:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)intersectSet:(id)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif