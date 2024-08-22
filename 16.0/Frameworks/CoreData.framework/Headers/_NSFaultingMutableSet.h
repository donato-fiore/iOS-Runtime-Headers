// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSFAULTINGMUTABLESET_H
#define _NSFAULTINGMUTABLESET_H

@class NSMutableSet;


#import "NSManagedObject.h"
#import "NSPropertyDescription.h"

@interface _NSFaultingMutableSet : NSMutableSet {
    int _cd_rc;
    _NSFaultingMutableSetFlags _flags;
    id *_realSet;
    NSManagedObject *_source;
}


@property (readonly, nonatomic, getter=isFault) BOOL fault;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic) NSManagedObject *source;


+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_isIdenticalFault:(id)arg0 ;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_tryRetain;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)allObjects;
-(id)anyObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)initWithSource:(id)arg0 destinations:(id)arg1 forRelationship:(id)arg2 inContext:(id)arg3 ;
-(id)initWithSource:(id)arg0 forRelationship:(id)arg1 asFault:(BOOL)arg2 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(id)retain;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)minusSet:(id)arg0 ;
-(void)release;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)turnIntoFault;
-(void)unionSet:(id)arg0 ;
-(void)willRead;
-(void)willReadWithContents:(id)arg0 ;


@end


#endif