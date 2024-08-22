// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCONSTANTDICTIONARY_H
#define _NSCONSTANTDICTIONARY_H

@class NSDictionary;
@protocol NSFastEnumeration;



@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>





+(id)alloc;
-(NSUInteger)capacity;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)allKeys;
-(id)allValues;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)keyEnumerator;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;
-(void)release;


@end


#endif