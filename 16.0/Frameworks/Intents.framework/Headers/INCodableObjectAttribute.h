// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCODABLEOBJECTATTRIBUTE_H
#define INCODABLEOBJECTATTRIBUTE_H

@class NSString, NSValueTransformer;
@protocol NSSecureCoding;


#import "INCodableAttribute.h"

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding>



@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName; // ivar: _originalTypeName
@property (readonly, copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *typeName; // ivar: _typeName
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;


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
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif