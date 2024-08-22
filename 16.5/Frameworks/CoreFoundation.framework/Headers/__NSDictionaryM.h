// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSDICTIONARYM_H
#define __NSDICTIONARYM_H



#import "NSMutableDictionary.h"

@interface __NSDictionaryM : NSMutableDictionary {
    ? storage;
    uint8_t cow;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(CGFloat)_clumpingFactor;
-(CGFloat)_clumpingInterestingThreshold;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_cfMutableCopy;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)keyOfEntryWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)keysOfEntriesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)__apply:(*unk)arg0 context:(*void)arg1 ;
-(void)__setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_mutate;
-(void)dealloc;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)removeAllObjects;
-(void)removeEntriesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObservationInfo:(*void)arg0 ;


@end


#endif