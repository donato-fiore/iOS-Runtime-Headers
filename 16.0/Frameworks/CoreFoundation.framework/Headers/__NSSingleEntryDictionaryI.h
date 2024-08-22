// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSSINGLEENTRYDICTIONARYI_H
#define __NSSINGLEENTRYDICTIONARYI_H



#import "NSDictionary.h"

@interface __NSSingleEntryDictionaryI : NSDictionary {
    id *_obj;
    id *_key;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)__apply:(*unk)arg0 context:(*void)arg1 ;
-(void)dealloc;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif