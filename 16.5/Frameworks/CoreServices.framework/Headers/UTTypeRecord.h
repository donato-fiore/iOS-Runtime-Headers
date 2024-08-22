// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UTTYPERECORD_H
#define UTTYPERECORD_H

@class NSData, NSString, NSSet, NSDictionary, NSURL, NSOrderedSet, NSNumber;


#import "LSRecord.h"
#import "_LSLocalizedStringRecord.h"
#import "LSPropertyList.h"
#import "LSBundleRecord.h"

@interface UTTypeRecord : LSRecord

@property (readonly) NSData *_declaringBundleBookmark;
@property (readonly) NSString *_delegatePath;
@property (readonly) _LSLocalizedStringRecord *_localizedDescription;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *childTypeIdentifiers;
@property (readonly, nonatomic) id *compatibilityObject;
@property (readonly, getter=isCoreType) BOOL coreType;
@property (readonly) LSPropertyList *declaration;
@property (readonly, getter=isDeclared) BOOL declared;
@property (readonly) LSBundleRecord *declaringBundleRecord;
@property (readonly, getter=isDynamic) BOOL dynamic;
@property (readonly, getter=isExported) BOOL exported;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) NSString *identifier;
@property (readonly, getter=isImported) BOOL imported;
@property (readonly, getter=isInPublicDomain) BOOL inPublicDomain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSDictionary *localizedDescriptionDictionary;
@property (readonly) NSOrderedSet *parentTypeIdentifiers;
@property (readonly) NSSet *pedigree;
@property (readonly) NSURL *referenceURL;
@property (readonly) LSPropertyList *tagSpecification;
@property (readonly) NSNumber *version;
@property (readonly, getter=isWildcard) BOOL wildcard;


+(BOOL)_typeIdentifier:(id)arg0 conformsToTypeIdentifier:(id)arg1 ;
+(id)_propertyClasses;
+(id)_typeRecordWithContext:(struct LSContext *)arg0 forPromiseAtNode:(id)arg1 error:(*id)arg2 ;
+(id)_typeRecordWithContext:(struct LSContext *)arg0 forPromiseResourceValues:(id)arg1 error:(*id)arg2 ;
+(id)_typeRecordWithContext:(struct LSContext *)arg0 identifier:(id)arg1 allowUndeclared:(BOOL)arg2 ;
+(id)_typeRecordWithIdentifier:(id)arg0 allowUndeclared:(BOOL)arg1 ;
+(id)enumerator;
+(id)typeRecordForImportedTypeWithIdentifier:(id)arg0 conformingToIdentifier:(id)arg1 ;
+(id)typeRecordForPromiseAtURL:(id)arg0 error:(*id)arg1 ;
+(id)typeRecordWithIdentifier:(id)arg0 ;
+(id)typeRecordWithPotentiallyUndeclaredIdentifier:(id)arg0 ;
+(id)typeRecordWithTag:(id)arg0 ofClass:(id)arg1 ;
+(id)typeRecordWithTag:(id)arg0 ofClass:(id)arg1 conformingToIdentifier:(id)arg2 ;
+(id)typeRecordWithTag:(id)arg0 ofClass:(id)arg1 conformingToTypeRecord:(id)arg2 ;
+(id)typeRecordsWithIdentifiers:(id)arg0 ;
+(id)typeRecordsWithTag:(id)arg0 ofClass:(id)arg1 ;
+(id)typeRecordsWithTag:(id)arg0 ofClass:(id)arg1 conformingToIdentifier:(id)arg2 ;
+(id)typeRecordsWithTag:(id)arg0 ofClass:(id)arg1 conformingToTypeRecord:(id)arg2 ;
-(BOOL)conformsToTypeIdentifier:(id)arg0 ;
-(BOOL)conformsToTypeRecord:(id)arg0 ;
-(BOOL)isChildOfTypeIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)debugDescription;
-(id)iconDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)iconResourceBundleURLWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)localizedDescriptionWithPreferredLocalizations:(id)arg0 ;
-(id)preferredTagOfClass:(id)arg0 ;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 maximumDegreeOfSeparation:(NSInteger)arg2 block:(id)arg3 ;
-(void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(NSInteger)arg0 block:(id)arg1 ;
-(void)enumerateChildTypesWithBlock:(id)arg0 ;
-(void)enumerateDescendantsWithBlock:(id)arg0 ;
-(void)enumerateParentTypesWithBlock:(id)arg0 ;
-(void)enumeratePedigreeWithBlock:(id)arg0 ;


@end


#endif