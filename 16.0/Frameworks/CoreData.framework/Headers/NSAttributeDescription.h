// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSATTRIBUTEDESCRIPTION_H
#define NSATTRIBUTEDESCRIPTION_H

@class NSString, NSData;


#import "NSPropertyDescription.h"

@interface NSAttributeDescription : NSPropertyDescription {
    unsigned short _type;
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id *_defaultValue;
}


@property (readonly, nonatomic) BOOL _usesMergeableStorage;
@property BOOL allowsCloudEncryption;
@property BOOL allowsExternalBinaryDataStorage;
@property NSUInteger attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id *defaultValue;
@property BOOL isFileBackedFuture;
@property BOOL preserveValueOnDeletionInPersistentHistory;
@property BOOL preservesValueInHistoryOnDeletion;
@property (copy) NSString *valueTransformerName;
@property (readonly, copy) NSData *versionHash;


+(BOOL)supportsSecureCoding;
+(id)stringForAttributeType:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)_attributeTypeIsSchemaEqual:(NSUInteger)arg0 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg0 ;
-(BOOL)_epsilonEquals:(id)arg0 rhs:(id)arg1 withFlags:(int)arg2 ;
-(BOOL)_isEqual:(id)arg0 skipIndexCheck:(BOOL)arg1 ;
-(BOOL)_isEqualWithoutIndex:(id)arg0 ;
-(BOOL)_isSchemaEqual:(id)arg0 ;
-(BOOL)_nonPredicateValidateValue:(*id)arg0 forKey:(id)arg1 inObject:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIndexed;
-(BOOL)storesBinaryDataExternally;
-(Class)_attributeValueClass;
-(NSUInteger)_propertyType;
-(id)_initWithName:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_initWithName:(id)arg0 type:(NSUInteger)arg1 withClassName:(id)arg2 ;
-(id)_initWithType:(NSUInteger)arg0 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)validationPredicates;
-(id)validationWarnings;
-(int)_encodedAttributeFlagsForFlags:(int)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 ;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif