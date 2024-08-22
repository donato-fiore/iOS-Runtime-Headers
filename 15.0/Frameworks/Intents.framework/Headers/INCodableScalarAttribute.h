// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLESCALARATTRIBUTE_H
#define INCODABLESCALARATTRIBUTE_H

@protocol NSSecureCoding;


#import "INCodableAttribute.h"

@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding>



@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_relationshipValueTransformerClass;
-(Class)objectClass;
-(Class)resolutionResultClass;
-(NSInteger)valueType;
-(NSUInteger)hash;
-(id)__INCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyName:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif