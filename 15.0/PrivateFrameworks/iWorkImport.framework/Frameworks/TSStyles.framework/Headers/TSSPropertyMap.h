// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSSPROPERTYMAP_H
#define TSSPROPERTYMAP_H

@class NSArray, NSString;
@protocol NSCopying, TSSMutablePropertySource;

#import <Foundation/Foundation.h>

#import "TSSPropertySet.h"

@interface TSSPropertyMap : NSObject <NSCopying, TSSMutablePropertySource>

 {
    *TSSPropertyStore mStore;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) TSSPropertySet *allProperties;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)propertyMap;
+(id)propertyMapWithDictionary:(id)arg0 ;
+(id)propertyMapWithPropertiesAndValues:(int)arg0 ;
+(id)propertyMapWithPropertyMap:(id)arg0 ;
-(BOOL)containsAnyPropertyInProperties:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)definesProperty:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPropertyMap:(id)arg0 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diff:(id)arg0 ;
-(id)diffOnlyDifferences:(id)arg0 ;
-(id)diffPropertyNames:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFirstKey:(int)arg0 andArgumentList:(char *)arg1 ;
-(id)initWithPropertiesAndValues:(int)arg0 ;
-(id)initWithPropertyMap:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)propertyMapByAddingValuesFromPropertyMap:(id)arg0 ;
-(id)propertyMapByRemovingValuesForProperties:(id)arg0 ;
-(id)propertyMapByRemovingValuesFromPropertyMap:(id)arg0 ;
-(id)propertyMapWithProperties:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(void)addValuesFromPropertyMap:(id)arg0 ;
-(void)dealloc;
-(void)enumerateDataPropertiesUsingBlock:(id)arg0 ;
-(void)enumeratePropertiesAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateReferencedDataForProperty:(int)arg0 usingBlock:(id)arg1 ;
-(void)filterWithProperties:(id)arg0 ;
-(void)minusPropertyMap:(id)arg0 ;
-(void)p_enumerateReferencedDataForProperty:(int)arg0 withObject:(id)arg1 stop:(*BOOL)arg2 usingBlock:(id)arg3 ;
-(void)p_getAllKeys:(*int)arg0 ;
-(void)removeAllPropertyValues;
-(void)removeValueForProperty:(int)arg0 ;
-(void)removeValuesForProperties:(id)arg0 ;
-(void)removeValuesFromPropertyMap:(id)arg0 ;
-(void)setBoolValue:(BOOL)arg0 forProperty:(int)arg1 ;
-(void)setBoxedObject:(id)arg0 forProperty:(int)arg1 ;
-(void)setBoxedObjects:(id)arg0 forProperties:(*int)arg1 ;
-(void)setCGFloatValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setDoubleValue:(CGFloat)arg0 forProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)setIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)setObject:(id)arg0 forProperty:(int)arg1 ;


@end


#endif