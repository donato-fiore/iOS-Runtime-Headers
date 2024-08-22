// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONSTANTDICTIONARY_H
#define NSCONSTANTDICTIONARY_H

@protocol NSFastEnumeration;


#import "NSDictionary.h"

@interface NSConstantDictionary : NSDictionary <NSFastEnumeration>

 {
    NSUInteger _options;
    NSUInteger _count;
    *id _keys;
    *id _objects;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)new;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)allKeys;
-(id)allValues;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)keyOfEntryWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)keysOfEntriesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)retain;
-(void)__apply:(*unk)arg0 context:(*void)arg1 ;
-(void)dealloc;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)release;


@end


#endif