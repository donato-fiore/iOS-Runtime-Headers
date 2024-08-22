// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRINTKEYEDDICTIONARY_H
#define XRINTKEYEDDICTIONARY_H

@class NSString;
@protocol XRIntKeyedDictionaryImmutable, NSSecureCoding, NSMutableCopying, NSObject><NSMutableCopying;

#import <Foundation/Foundation.h>


@interface XRIntKeyedDictionary : NSObject <XRIntKeyedDictionaryImmutable, NSSecureCoding, NSMutableCopying>

 {
    unordered_map<unsigned long long, id, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, id>>> _hash_map;
    id<NSObject><NSMutableCopying> *_prototype;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSUInteger)count;
-(id)allKeys;
-(id)allObjects;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntKeyedDictionary:(id)arg0 copyObjects:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForIntegerKey:(NSUInteger)arg0 ;
-(id)objectForIntegerKey:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsAndIntegerKeys:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForIntegerKey:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forIntegerKey:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forIntergerKey:(NSUInteger)arg1 ;
-(void)setPrototypeObject:(id)arg0 ;


@end


#endif