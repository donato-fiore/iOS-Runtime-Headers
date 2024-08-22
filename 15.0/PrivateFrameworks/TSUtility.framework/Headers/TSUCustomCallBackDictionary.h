// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUCUSTOMCALLBACKDICTIONARY_H
#define TSUCUSTOMCALLBACKDICTIONARY_H

@class NSMutableDictionary;



@interface TSUCustomCallBackDictionary : NSMutableDictionary {
    *__CFDictionary mDictionary;
}




-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCFDictionary:(struct __CFDictionary *)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 keyCallBacks:(struct ? *)arg1 valueCallBacks:(struct ? *)arg2 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forUncopiedKey:(id)arg1 ;


@end


#endif