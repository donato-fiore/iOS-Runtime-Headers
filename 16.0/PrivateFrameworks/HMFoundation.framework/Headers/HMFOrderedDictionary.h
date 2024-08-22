// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFORDEREDDICTIONARY_H
#define HMFORDEREDDICTIONARY_H

@class NSArray, NSOrderedSet;
@protocol HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMFOrderedDictionary : NSObject <HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSArray *_objects;
    NSOrderedSet *_keys;
}


@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;
@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)orderedDictionary;
+(id)orderedDictionaryWithObject:(id)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initBySortingDictionary:(id)arg0 ;
-(id)initBySortingDictionary:(id)arg0 copyItems:(BOOL)arg1 keyComparator:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 forKey:(id)arg1 ;
-(id)initWithObjects:(id)arg0 forKeys:(id)arg1 ;
-(id)initWithObjects:(id)arg0 forKeys:(id)arg1 copyObjects:(BOOL)arg2 copyKeys:(BOOL)arg3 ;
-(id)initWithObjects:(id)arg0 orderedKeySet:(id)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableUnorderedCopy;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)unorderedCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif