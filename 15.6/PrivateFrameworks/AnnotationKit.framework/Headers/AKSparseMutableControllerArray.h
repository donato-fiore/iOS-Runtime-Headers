// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSPARSEMUTABLECONTROLLERARRAY_H
#define AKSPARSEMUTABLECONTROLLERARRAY_H

@class NSMutableArray;



@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray *_backendArray;
}




-(BOOL)containsAnyObjects:(id)arg0 ;
-(NSUInteger)count;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(void)_backFillUntilCount:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif