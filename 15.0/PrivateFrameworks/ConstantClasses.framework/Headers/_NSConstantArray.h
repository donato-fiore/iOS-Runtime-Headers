// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCONSTANTARRAY_H
#define _NSCONSTANTARRAY_H

@class NSArray;



@interface _NSConstantArray : NSArray



+(id)alloc;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(id)retain;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)release;


@end


#endif