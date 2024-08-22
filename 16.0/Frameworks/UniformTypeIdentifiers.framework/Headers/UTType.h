// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UTTYPE_H
#define UTTYPE_H

@class NSSet, NSString, NSDictionary, NSOrderedSet, UTTypeRecord, NSURL, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UTType : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSSet *_childTypes;
@property (readonly) NSInteger _constantIndex;
@property (readonly) NSInteger _constantIndex;
@property (readonly, getter=_isCoreType) BOOL _coreType;
@property (readonly, getter=_isExported) BOOL _exported;
@property (readonly, getter=_isImported) BOOL _imported;
@property (readonly) NSString *_kindString;
@property (readonly) NSDictionary *_kindStringDictionary;
@property (readonly) NSDictionary *_localizedDescriptionDictionary;
@property (readonly) NSOrderedSet *_parentTypes;
@property (readonly, getter=_isRealized) BOOL _realized;
@property (readonly) NSSet *_subtypes;
@property (readonly) UTTypeRecord *_typeRecord; // ivar: _typeRecord
@property (readonly, getter=_isWildcard) BOOL _wildcard;
@property (readonly, getter=isDeclared) BOOL declared;
@property (readonly, getter=isDynamic) BOOL dynamic;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *preferredFilenameExtension;
@property (readonly) NSString *preferredMIMEType;
@property (readonly, getter=isPublicType) BOOL publicType;
@property (readonly) NSURL *referenceURL;
@property (readonly) NSSet *supertypes;
@property (readonly) NSDictionary *tags;
@property (readonly) NSNumber *version;


+(BOOL)supportsSecureCoding;
+(id)_constantTypeForURLPropertyProviderWithIdentifier:(id)arg0 ;
+(id)_exportedTypeWithIdentifier:(id)arg0 bundle:(id)arg1 conformingToType:(id)arg2 ;
+(id)_importedTypeWithIdentifier:(id)arg0 bundle:(id)arg1 conformingToType:(id)arg2 ;
+(id)_typeForURLPropertyProviderWithTypeRecord:(id)arg0 ;
+(id)_typeOfCurrentDevice;
+(id)_typeOfItemAtFileURL:(id)arg0 error:(*id)arg1 ;
+(id)_typeOfPromiseAtFileURL:(id)arg0 error:(*id)arg1 ;
+(id)_typeWithBluetoothProductID:(unsigned int)arg0 vendorID:(unsigned short)arg1 ;
+(id)_typeWithDeviceModelCode:(id)arg0 ;
+(id)_typeWithDeviceModelCode:(id)arg0 enclosureColor:(struct UTHardwareColor )arg1 ;
+(id)_typeWithDeviceModelCodeWithoutResolvingCurrentDevice:(id)arg0 ;
+(id)_typeWithIdentifier:(id)arg0 allowUndeclared:(BOOL)arg1 ;
+(id)_typeWithIdentifier:(id)arg0 constantIndex:(NSInteger)arg1 error:(*id)arg2 ;
+(id)_typeWithTypeRecord:(id)arg0 detachTypeRecord:(BOOL)arg1 findConstant:(BOOL)arg2 ;
+(id)_typesWithIdentifiers:(id)arg0 ;
+(id)exportedTypeWithIdentifier:(id)arg0 ;
+(id)exportedTypeWithIdentifier:(id)arg0 conformingToType:(id)arg1 ;
+(id)importedTypeWithIdentifier:(id)arg0 ;
+(id)importedTypeWithIdentifier:(id)arg0 conformingToType:(id)arg1 ;
+(id)new;
+(id)typeWithFilenameExtension:(id)arg0 ;
+(id)typeWithFilenameExtension:(id)arg0 conformingToType:(id)arg1 ;
+(id)typeWithIdentifier:(id)arg0 ;
+(id)typeWithMIMEType:(id)arg0 ;
+(id)typeWithMIMEType:(id)arg0 conformingToType:(id)arg1 ;
+(id)typeWithTag:(id)arg0 tagClass:(id)arg1 conformingToType:(id)arg2 ;
+(id)typesWithTag:(id)arg0 tagClass:(id)arg1 conformingToType:(id)arg2 ;
+(void)_enumerateAllDeclaredTypesUsingBlock:(id)arg0 ;
+(void)_unrealizeAllCoreTypes;
-(BOOL)_getEnclosureColor:(struct UTHardwareColor *)arg0 ;
-(BOOL)_getPreferredEnclosureColor:(struct UTHardwareColor *)arg0 ;
-(BOOL)_shouldURLPropertyProviderEncodeTypeRecord;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubtypeOfType:(id)arg0 ;
-(BOOL)isSupertypeOfType:(id)arg0 ;
-(NSUInteger)_getEnclosureColors:(struct UTHardwareColor *)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)_initWithTypeRecord:(id)arg0 ;
-(id)_kindStringWithPreferredLocalizations:(id)arg0 ;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg0 ;
-(id)_preferredTagOfClass:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_unrealize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif