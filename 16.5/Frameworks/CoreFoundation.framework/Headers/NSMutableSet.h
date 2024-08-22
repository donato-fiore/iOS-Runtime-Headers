// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMUTABLESET_H
#define NSMUTABLESET_H



#import "NSSet.h"

@interface NSMutableSet : NSSet



+(id)setWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg0 ;
-(id)setByAddingObjectsFromSet:(id)arg0 ;
-(void)_mutate;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addObjectsFromOrderedSet:(id)arg0 ;
-(void)addObjectsFromOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addObjectsFromSet:(id)arg0 ;
-(void)intersectOrderedSet:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusOrderedSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)removeObjectsInOrderedSet:(id)arg0 ;
-(void)removeObjectsInOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)removeObjectsInSet:(id)arg0 ;
-(void)removeObjectsPassingTest:(id)arg0 ;
-(void)removeObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(void)replaceObject:(id)arg0 ;
-(void)setArray:(id)arg0 ;
-(void)setObject:(id)arg0 ;
-(void)setOrderedSet:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionOrderedSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif