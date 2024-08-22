// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFDICTIONARY_H
#define __NSCFDICTIONARY_H



#import "NSMutableDictionary.h"

@interface __NSCFDictionary : NSMutableDictionary {
    unsigned char _cfinfo;
    unsigned int _rc;
    unsigned int _bits;
    *void _callbacks;
    *id _values;
    *id _keys;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)release;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObservationInfo:(*void)arg0 ;


@end


#endif