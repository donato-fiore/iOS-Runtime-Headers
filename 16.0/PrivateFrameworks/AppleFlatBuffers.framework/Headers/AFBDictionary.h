// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFBDICTIONARY_H
#define AFBDICTIONARY_H

@class NSDictionary;


#import "AFBBufRef.h"

@interface AFBDictionary : NSDictionary {
    AFBBufRef *_bufRef;
    NSUInteger _count;
    Class _keyClass;
    id *_keyAtIndex;
    id *_tableAtIndex;
    id *_objectForValidKey;
}




-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(id)allKeys;
-(id)allKeysForObject:(id)arg0 ;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
// -(id)initWithBufRef:(id)arg0 count:(NSUInteger)arg1 keyClass:(Class)arg2 keyAtIndex:(id)arg3 tableAtIndex:(unk)arg4 objectForValidKey:(id)arg5  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif