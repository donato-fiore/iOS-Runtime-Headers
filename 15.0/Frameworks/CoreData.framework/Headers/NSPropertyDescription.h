// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPROPERTYDESCRIPTION_H
#define NSPROPERTYDESCRIPTION_H

@class NSString, NSData, NSArray, NSMutableDictionary, NSDictionary;
@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSEntityDescription.h"

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>

 {
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    *_NSExtraPropertyIVars _extraIvars;
    NSMutableDictionary *_userInfo;
    __propertyDescriptionFlags _propertyDescriptionFlags;
    short _entitysReferenceIDForProperty;
}


@property (readonly, nonatomic) NSEntityDescription *entity;
@property (getter=isIndexed) BOOL indexed;
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight;
@property (copy, nonatomic) NSString *name;
@property (getter=isOptional) BOOL optional;
@property (copy) NSString *renamingIdentifier;
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord;
@property (getter=isTransient) BOOL transient;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) NSArray *validationPredicates;
@property (readonly) NSArray *validationWarnings;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_allowsCloudEncryption;
-(BOOL)_comparePredicatesAndWarnings:(id)arg0 ;
-(BOOL)_epsilonEquals:(id)arg0 rhs:(id)arg1 withFlags:(int)arg2 ;
-(BOOL)_hasMaxValueInExtraIvars;
-(BOOL)_hasMinValueInExtraIvars;
-(BOOL)_isEditable;
-(BOOL)_isEqual:(id)arg0 skipIndexCheck:(BOOL)arg1 ;
-(BOOL)_isEqualWithoutIndex:(id)arg0 ;
-(BOOL)_isFileBackedFuture;
-(BOOL)_isOrdered;
-(BOOL)_isRelationship;
-(BOOL)_isSchemaEqual:(id)arg0 ;
-(BOOL)_isToManyRelationship;
-(BOOL)_isTriggerBacked;
-(BOOL)_nonPredicateValidateValue:(*id)arg0 forKey:(id)arg1 inObject:(id)arg2 error:(*id)arg3 ;
-(BOOL)_preserveValueOnDelete;
-(BOOL)_skipValidation;
-(BOOL)_storeBinaryDataExternally;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReadOnly;
-(BOOL)isSpotlightIndexed;
-(BOOL)isStoredInTruth;
-(BOOL)isStoredInTruthFile;
-(NSUInteger)_propertyType;
-(NSUInteger)hash;
-(id)_initWithName:(id)arg0 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(id)_underlyingProperty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)elementID;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct _NSExtraPropertyIVars *)_extraIVars;
-(void)_appendPropertyFieldsToData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 ;
-(void)_createCachesAndOptimizeState;
-(void)_initializeExtraIVars;
-(void)_replaceValidationPredicates:(id)arg0 andWarnings:(id)arg1 ;
-(void)_restoreValidation;
-(void)_setOrdered:(BOOL)arg0 ;
-(void)_stripForMigration;
-(void)_throwIfNotEditable;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 ;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setElementID:(id)arg0 ;
-(void)setReadOnly:(BOOL)arg0 ;
-(void)setSpotlightIndexed:(BOOL)arg0 ;
-(void)setStoredInTruth:(BOOL)arg0 ;
-(void)setStoredInTruthFile:(BOOL)arg0 ;


@end


#endif