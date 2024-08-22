// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSCHEMA_H
#define INSCHEMA_H

@class NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INSchema : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *_configurableParameterCombinationDictionary; // ivar: _configurableParameterCombinationDictionary
@property (readonly, nonatomic) NSArray *_definitionFileURLs; // ivar: _definitionFileURLs
@property (readonly, nonatomic) NSMutableDictionary *_enums; // ivar: _enums
@property (readonly, nonatomic) NSString *_mainBundleIdentifier; // ivar: _mainBundleIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_parameterCombinationDictionary; // ivar: _parameterCombinationDictionary
@property (readonly, nonatomic) NSMutableDictionary *_schemaDictionary; // ivar: _schemaDictionary
@property (readonly, nonatomic) NSDictionary *_typeForClassDictionary; // ivar: _typeForClassDictionary
@property (readonly, nonatomic) NSDictionary *_typeForSemanticKeypathDictionary; // ivar: _typeForSemanticKeypathDictionary
@property (readonly, nonatomic) NSMutableDictionary *_types; // ivar: _types
@property (readonly, nonatomic, getter=isSystem) BOOL system; // ivar: _system


+(BOOL)_defaultSchemaCanSupportIntent:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_applicationBundleIdentifierFromBundleIdentifier:(id)arg0 ;
+(id)_cache;
+(id)_defaultSchemaForBundle:(id)arg0 ;
+(id)_defaultSchemaForBundle:(id)arg0 contentOptions:(NSUInteger)arg1 ;
+(id)_schemaWithIntentDefinitionURLs:(id)arg0 bundleIdentifier:(id)arg1 mainBundleIdentifier:(id)arg2 contentOptions:(NSUInteger)arg3 ;
+(id)_supportedClasses;
+(id)_supportedTypesDictionary;
+(id)defaultSchema;
+(id)schemaWithBundleRecord:(id)arg0 fallbackToSystemSchema:(BOOL)arg1 ;
+(id)systemSchema;
+(void)_resetCache;
-(id)_classNamesForClass:(Class)arg0 ;
-(id)_codableDescriptionWithDictionary:(id)arg0 intentDefinitionNamespace:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3 codableDescriptionClass:(Class)arg4 ;
-(id)_codableDescriptionsForClass:(Class)arg0 ;
-(id)_configurableParameterCombinationsForClassName:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_dictionaryRepresentationForIntentCodableDescription:(id)arg0 intentResponseCodableDescription:(id)arg1 appInfo:(id)arg2 localizer:(id)arg3 ;
-(id)_initWithContentsOfURLs:(id)arg0 ;
-(id)_initWithContentsOfURLs:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)_initWithContentsOfURLs:(id)arg0 bundleIdentifier:(id)arg1 mainBundleIdentifier:(id)arg2 ;
-(id)_initWithContentsOfURLs:(id)arg0 bundleIdentifier:(id)arg1 mainBundleIdentifier:(id)arg2 contentOptions:(NSUInteger)arg3 ;
-(id)_intentResponseWithDictionary:(id)arg0 intentDefinitionNamespace:(id)arg1 className:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 ;
-(id)_intentWithDictionary:(id)arg0 intentDefinitionNamespace:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)_objectDescriptionForClass:(Class)arg0 identifier:(id)arg1 ;
-(id)_objectDescriptionForTypeOfClass:(Class)arg0 ;
-(id)_objectDescriptionWithSemanticKeypath:(id)arg0 ;
-(id)_parameterCombinationsForClass:(Class)arg0 ;
-(id)_parameterCombinationsForClassName:(id)arg0 ;
-(id)_typesWithDictionary:(id)arg0 filename:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentationForIntent:(id)arg0 ;
-(id)dictionaryRepresentationForIntent:(id)arg0 localizer:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)intentCodableDescriptionWithIntentClassName:(id)arg0 ;
-(id)intentResponseCodableDescriptionWithIntentClassName:(id)arg0 ;
-(id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg0 ;
-(id)intentWithName:(id)arg0 ;
-(void)_loadIntentsFromArrayOfDictionaries:(id)arg0 intentDefinitionNamespace:(id)arg1 fromFile:(id)arg2 bundleIdentifier:(id)arg3 referencedCodableDescriptions:(id)arg4 contentOptions:(NSUInteger)arg5 ;
-(void)_setObjectDescription:(id)arg0 forClass:(Class)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif