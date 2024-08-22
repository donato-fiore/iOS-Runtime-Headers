// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLECUSTOMOBJECTATTRIBUTE_H
#define INCODABLECUSTOMOBJECTATTRIBUTE_H

@class NSString;


#import "INCodableObjectAttribute.h"
#import "INCodableDescription.h"

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute

@property (weak, nonatomic) INCodableDescription *codableDescription; // ivar: _codableDescription
@property (copy, nonatomic) NSString *objectTypeName; // ivar: _objectTypeName
@property (copy, nonatomic) NSString *objectTypeNamespace; // ivar: _objectTypeNamespace


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_relationshipValueTransformerClass;
-(Class)_unsafeObjectClass;
-(Class)objectClass;
-(Class)resolutionResultClass;
-(NSInteger)valueType;
-(NSUInteger)hash;
-(id)__INCodableDescriptionObjectTypeKey;
-(id)__INCodableDescriptionObjectTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
-(id)__INTypeCodableDescriptionObjectTypeKey;
-(id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)valueTransformer;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif