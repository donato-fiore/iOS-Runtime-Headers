// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDICTIONARY_H
#define NSDICTIONARY_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)arg0 ;
+(id)dictionaryWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)dictionaryWithObject:(id)arg0 forKey:(id)arg1 ;
+(id)dictionaryWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
+(id)dictionaryWithObjects:(id)arg0 forKeys:(id)arg1 ;
+(id)dictionaryWithObjectsAndKeys:(id)arg0 ;
+(id)newDictionaryWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
+(id)sharedKeySetForKeys:(id)arg0 ;
-(BOOL)__getValue:(*id)arg0 forKey:(id)arg1 ;
-(BOOL)containsKey:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDictionary:(id)arg0 ;
-(BOOL)isNSDictionary__;
-(NSUInteger)_cfTypeID;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForKey:(id)arg0 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)_cfMutableCopy;
-(id)allKeys;
-(id)allKeysForObject:(id)arg0 ;
-(id)allObjects;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithObject:(id)arg0 forKey:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithObjects:(id)arg0 forKeys:(id)arg1 ;
-(id)initWithObjectsAndKeys:(id)arg0 ;
-(id)invertedDictionary;
-(id)keyEnumerator;
-(id)keyOfEntryPassingTest:(id)arg0 ;
-(id)keyOfEntryWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)keysOfEntriesPassingTest:(id)arg0 ;
-(id)keysOfEntriesWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)keysSortedByValueUsingComparator:(id)arg0 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg0 ;
-(id)keysSortedByValueWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)__apply:(*unk)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getKeys:(*id)arg0 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif