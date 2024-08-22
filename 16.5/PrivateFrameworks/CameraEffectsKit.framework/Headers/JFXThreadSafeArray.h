// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXTHREADSAFEARRAY_H
#define JFXTHREADSAFEARRAY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXThreadSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array; // ivar: _array
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // ivar: _concurrentQueue
@property (readonly) NSUInteger count;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)copyOfArray;
-(id)description;
-(id)init;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)moveObjectAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)sortUsingSelector:(SEL)arg0 ;


@end


#endif