// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSFROZENDICTIONARYM_H
#define __NSFROZENDICTIONARYM_H



#import "NSDictionary.h"

@interface __NSFrozenDictionaryM : NSDictionary {
    ? storage;
    uint8_t cow;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
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