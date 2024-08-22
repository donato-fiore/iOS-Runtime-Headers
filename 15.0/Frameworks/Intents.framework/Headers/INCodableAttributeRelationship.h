// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEATTRIBUTERELATIONSHIP_H
#define INCODABLEATTRIBUTERELATIONSHIP_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableDescription.h"
#import "INCodableAttribute.h"

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding>



@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary; // ivar: _originalDictionary
@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute; // ivar: _parentCodableAttribute
@property (nonatomic) NSUInteger relation; // ivar: _relation
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class valueClass;
@property (retain, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(BOOL)compareValue:(id)arg0 ;
-(id)__INCodableDescriptionParentNameKey;
-(id)__INCodableDescriptionPredicateNameKey;
-(id)__INCodableDescriptionPredicateValueKey;
-(id)__INCodableDescriptionPredicateValuesKey;
-(id)__INIntentResponseCodableDescriptionParentNameKey;
-(id)__INIntentResponseCodableDescriptionPredicateNameKey;
-(id)__INIntentResponseCodableDescriptionPredicateValueKey;
-(id)__INIntentResponseCodableDescriptionPredicateValuesKey;
-(id)__INTypeCodableDescriptionParentNameKey;
-(id)__INTypeCodableDescriptionPredicateNameKey;
-(id)__INTypeCodableDescriptionPredicateValueKey;
-(id)__INTypeCodableDescriptionPredicateValuesKey;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCodableAttribute:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_establishRelationship;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif