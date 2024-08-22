// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UTDECLAREDTYPERECORD_H
#define _UTDECLAREDTYPERECORD_H



#import "UTTypeRecord.h"
#import "LSBundleRecord.h"

@interface _UTDeclaredTypeRecord : UTTypeRecord {
    LSBundleRecord *_weakDeclaringBundleRecord;
}


@property (readonly) LSBundleRecord *_declaringBundleRecord;
@property (readonly) unsigned int _rawFlags;


+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(BOOL)conformsToTypeIdentifier:(id)arg0 ;
-(BOOL)isActive;
-(BOOL)isCoreType;
-(BOOL)isDeclared;
-(BOOL)isDynamic;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isInPublicDomain;
-(BOOL)isWildcard;
-(id)_declaringBundleBookmark;
-(id)_declaringBundleBookmarkWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)_declaringBundleRecordWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)_delegatePath;
-(id)_delegatePathWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)_localizedDescription;
-(id)_localizedDescriptionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)childTypeIdentifiers;
-(id)childTypeIdentifiersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)declaration;
-(id)declarationWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)declaringBundleRecord;
-(id)identifier;
-(id)identifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)parentTypeIdentifiers;
-(id)parentTypeIdentifiersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)pedigree;
-(id)pedigreeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)referenceURL;
-(id)referenceURLWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)tagSpecification;
-(id)tagSpecificationWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)version;
-(id)versionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(unsigned int)_rawFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(void)_LSRecord_resolve__declaringBundleBookmark;
-(void)_LSRecord_resolve__delegatePath;
-(void)_LSRecord_resolve__localizedDescription;
-(void)_LSRecord_resolve_childTypeIdentifiers;
-(void)_LSRecord_resolve_declaration;
-(void)_LSRecord_resolve_identifier;
-(void)_LSRecord_resolve_parentTypeIdentifiers;
-(void)_LSRecord_resolve_pedigree;
-(void)_LSRecord_resolve_referenceURL;
-(void)_LSRecord_resolve_tagSpecification;
-(void)_LSRecord_resolve_version;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 maximumDegreeOfSeparation:(NSInteger)arg2 block:(id)arg3 ;
-(void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 maximumDegreeOfSeparation:(NSInteger)arg2 block:(id)arg3 ;


@end


#endif