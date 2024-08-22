// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPLAZYREFERENCEARRAY_H
#define TSPLAZYREFERENCEARRAY_H

@class NSMutableArray, NSArray;



@interface TSPLazyReferenceArray : NSMutableArray {
    NSUInteger _mutations;
}


@property (readonly, nonatomic) NSArray *references; // ivar: _references


-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)referenceAtIndex:(NSUInteger)arg0 ;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addReference:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromArray:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromArray:(id)arg1 range:(struct _NSRange )arg2 ;


@end


#endif