// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSORDEREDSETM_H
#define __NSORDEREDSETM_H



#import "NSMutableOrderedSet.h"

@interface __NSOrderedSetM : NSMutableOrderedSet {
    uint8_t cow;
    ? storage;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countForObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)_mutate;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setObject:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif