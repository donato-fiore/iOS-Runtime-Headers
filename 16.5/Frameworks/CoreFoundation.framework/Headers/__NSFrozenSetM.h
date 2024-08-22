// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSFROZENSETM_H
#define __NSFROZENSETM_H



#import "NSSet.h"

@interface __NSFrozenSetM : NSSet {
    ? storage;
    uint8_t cow;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(CGFloat)clumpingFactor;
-(CGFloat)clumpingInterestingThreshold;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)member:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif