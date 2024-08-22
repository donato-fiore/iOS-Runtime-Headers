// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFSET_H
#define __NSCFSET_H



#import "NSMutableSet.h"

@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo;
    unsigned int _rc;
    unsigned int _bits;
    *void _callbacks;
    *id _values;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)_trueCount;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)retain;
-(void)addObject:(id)arg0 ;
-(void)getObjects:(*id)arg0 ;
-(void)release;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;


@end


#endif