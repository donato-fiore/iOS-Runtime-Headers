// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUINTEGERKEYDICTIONARY_H
#define TSUINTEGERKEYDICTIONARY_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    *__CFDictionary mDictionary;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)count;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(NSInteger)arg0 ;
-(id)valueEnumerator;
-(struct __CFDictionary *)p_cfDictionary;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(NSInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(NSInteger)arg1 ;


@end


#endif