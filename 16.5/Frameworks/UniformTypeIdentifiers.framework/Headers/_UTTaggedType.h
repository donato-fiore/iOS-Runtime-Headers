// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UTTAGGEDTYPE_H
#define _UTTAGGEDTYPE_H



#import "UTType.h"

@interface _UTTaggedType : UTType



+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_isCoreType;
-(BOOL)_isExported;
-(BOOL)_isImported;
-(BOOL)_isWildcard;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)isDeclared;
-(BOOL)isDynamic;
-(BOOL)isPublicType;
-(Class)classForCoder;
-(NSUInteger)_getEnclosureColors:(struct UTHardwareColor *)arg0 count:(NSUInteger)arg1 ;
-(id)_childTypes;
-(id)_localizedDescriptionDictionary;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg0 ;
-(id)_parentTypes;
-(id)_preferredTagOfClass:(id)arg0 ;
-(id)_subtypes;
-(id)_typeRecord;
-(id)identifier;
-(id)localizedDescription;
-(id)referenceURL;
-(id)supertypes;
-(id)tags;
-(id)version;


@end


#endif