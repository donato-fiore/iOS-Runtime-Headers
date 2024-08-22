// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSPLACEHOLDERORDEREDSET_H
#define __NSPLACEHOLDERORDEREDSET_H



#import "NSMutableOrderedSet.h"

@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)count;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
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