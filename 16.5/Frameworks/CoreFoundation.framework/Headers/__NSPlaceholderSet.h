// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSPLACEHOLDERSET_H
#define __NSPLACEHOLDERSET_H



#import "NSMutableSet.h"

@interface __NSPlaceholderSet : NSMutableSet



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(id)retain;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)release;
-(void)removeObject:(id)arg0 ;


@end


#endif