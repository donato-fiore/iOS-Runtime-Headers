// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEENUMATTRIBUTE_H
#define INCODABLEENUMATTRIBUTE_H

@class NSString;
@protocol NSSecureCoding;


#import "INCodableAttribute.h"
#import "INCodableEnum.h"

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>



@property (retain, nonatomic) INCodableEnum *codableEnum; // ivar: _codableEnum
@property (copy, nonatomic) NSString *enumNamespace; // ivar: _enumNamespace


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_relationshipValueTransformerClass;
-(Class)resolutionResultClass;
-(NSInteger)valueType;
-(NSUInteger)hash;
-(id)__INCodableDescriptionEnumTypeKey;
-(id)__INCodableDescriptionEnumTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
-(id)__INTypeCodableDescriptionEnumTypeKey;
-(id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForIndex:(NSUInteger)arg0 ;
-(id)valueWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif