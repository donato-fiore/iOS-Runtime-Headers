// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMOBJECTSCHEMA_H
#define RLMOBJECTSCHEMA_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RLMProperty.h"

@interface RLMObjectSchema : NSObject <NSCopying>

 {
    NSArray *_swiftGenericProperties;
}


@property (nonatomic) Class accessorClass; // ivar: _accessorClass
@property (retain, nonatomic) NSDictionary *allPropertiesByName; // ivar: _allPropertiesByName
@property (retain, nonatomic) NSString *className; // ivar: _className
@property (copy, nonatomic) NSArray *computedProperties; // ivar: _computedProperties
@property (nonatomic) BOOL isSwiftClass; // ivar: _isSwiftClass
@property (nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic) NSString *objectName;
@property (retain, nonatomic) RLMProperty *primaryKeyProperty; // ivar: _primaryKeyProperty
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, nonatomic) NSArray *swiftGenericProperties;
@property (nonatomic) Class unmanagedClass; // ivar: _unmanagedClass


+(id)objectSchemaForObjectStoreSchema:(*void)arg0 ;
+(id)propertiesForClass:(Class)arg0 isSwift:(BOOL)arg1 ;
+(id)schemaForObjectClass:(Class)arg0 ;
+(void)addSwiftProperties:(id)arg0 objectUtil:(Class)arg1 instance:(id)arg2 indexed:(id)arg3 nameMap:(id)arg4 ;
-(BOOL)isEqualToObjectSchema:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClassName:(id)arg0 objectClass:(Class)arg1 properties:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(struct ObjectSchema )objectStoreCopy:(id)arg0 ;


@end


#endif