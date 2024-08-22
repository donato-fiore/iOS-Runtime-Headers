// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSDICTIONARYI_H
#define __NSDICTIONARYI_H



#import "NSDictionary.h"

@interface __NSDictionaryI : NSDictionary {
    BOOL _used;
    BOOL _copyKeys;
    BOOL _szidx;
    id _list;
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
-(void)dealloc;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif