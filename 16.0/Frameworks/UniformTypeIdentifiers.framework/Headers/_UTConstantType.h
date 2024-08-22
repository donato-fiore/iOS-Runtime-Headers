// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UTCONSTANTTYPE_H
#define _UTCONSTANTTYPE_H



#import "UTType.h"

@interface _UTConstantType : UTType {
    Fields _fields;
}




+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)_validateThisClass;
-(BOOL)_isRealized;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)isDeclared;
-(BOOL)isDynamic;
-(BOOL)isPublicType;
-(Class)classForCoder;
-(NSUInteger)_getEnclosureColors:(struct UTHardwareColor *)arg0 count:(NSUInteger)arg1 ;
-(id)_preferredTagOfClass:(id)arg0 ;
-(id)_typeRecord;
-(id)debugDescription;
-(id)identifier;
-(id)supertypes;
-(id)tags;
-(void)_unrealize;


@end


#endif