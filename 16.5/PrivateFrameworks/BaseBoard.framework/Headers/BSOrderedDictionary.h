// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSORDEREDDICTIONARY_H
#define BSORDEREDDICTIONARY_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, BSStandardCollection, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "BSOrderedDictionaryKeyStrategy.h"

@interface BSOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, BSStandardCollection, BSDescriptionStreamable>

 {
    NSArray *_keys;
    NSDictionary *_values;
    BSOrderedDictionaryKeyStrategy *_keyOrderingStrategy;
}


@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_initTabulaRasa;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filter:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 keyOrderingStrategy:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)sortedDictionaryUsingComparator:(id)arg0 ;
-(id)subdictionaryWithRange:(struct _NSRange )arg0 ;
-(id)unorderedDictionary;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithIndexesUsingBlock:(id)arg0 ;


@end


#endif