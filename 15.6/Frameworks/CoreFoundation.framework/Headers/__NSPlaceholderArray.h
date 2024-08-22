// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSPLACEHOLDERARRAY_H
#define __NSPLACEHOLDERARRAY_H



#import "NSMutableArray.h"

@interface __NSPlaceholderArray : NSMutableArray



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)_initByAdoptingBuffer:(*id)arg0 count:(NSUInteger)arg1 size:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithArray:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)release;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif