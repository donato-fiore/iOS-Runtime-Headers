// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSMORIBUNDCACHE_H
#define _NSMORIBUNDCACHE_H



#import "NSCache.h"

@interface _NSMoribundCache : NSCache



-(BOOL)evictsObjectsWithDiscardedContent;
-(NSUInteger)countLimit;
-(NSUInteger)retainCount;
-(NSUInteger)totalCostLimit;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)delegate;
-(id)name;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setCountLimit:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2 ;
-(void)setTotalCostLimit:(NSUInteger)arg0 ;


@end


#endif