// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UTDYNAMICTYPERECORD_H
#define _UTDYNAMICTYPERECORD_H

@class NSString;


#import "UTTypeRecord.h"

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}




+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(BOOL)conformsToTypeIdentifier:(id)arg0 ;
-(BOOL)isActive;
-(BOOL)isChildOfTypeIdentifier:(id)arg0 ;
-(BOOL)isCoreType;
-(BOOL)isDeclared;
-(BOOL)isDynamic;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isInPublicDomain;
-(BOOL)isWildcard;
-(id)_declaringBundleBookmark;
-(id)_delegatePath;
-(id)_initWithContext:(struct LSContext *)arg0 dynamicUTI:(id)arg1 ;
-(id)_localizedDescription;
-(id)_persistentIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)childTypeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)declaration;
-(id)declaringBundleRecord;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)parentTypeIdentifiers;
-(id)pedigree;
-(id)pedigreeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct ? *)arg3 ;
-(id)preferredTagOfClass:(id)arg0 ;
-(id)referenceURL;
-(id)tagSpecification;
-(id)version;
-(void)_LSRecord_resolve_pedigree;
-(void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 maximumDegreeOfSeparation:(NSInteger)arg2 block:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif