// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSKNOWNKEYSDICTIONARY1_H
#define NSKNOWNKEYSDICTIONARY1_H



#import "NSKnownKeysDictionary.h"
#import "NSKnownKeysMappingStrategy.h"

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values;
}




+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)initForKeys:(id)arg0 ;
+(id)initWithCoder:(id)arg0 ;
+(id)initWithDictionary:(id)arg0 ;
+(id)initWithDictionary:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
+(id)initWithSearchStrategy:(id)arg0 ;
-(*id)knownKeyValuesPointer;
-(*id)values;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqualToDictionary:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)_valueCountByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)mapping;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)_setValues:(*id)arg0 retain:(BOOL)arg1 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getKeys:(*id)arg0 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;
-(void)release;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValues:(*id)arg0 ;


@end


#endif