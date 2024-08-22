// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDENTITYCODINGDESCRIPTION_H
#define HMDENTITYCODINGDESCRIPTION_H

@class NSEntityDescription, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface HMDEntityCodingDescription : NSObject {
    NSEntityDescription *_entity;
    NSString *_typeID;
    NSString *_refContextCodingKey;
    NSString *_refContextKeyPath;
    NSEntityDescription *_refContextEntity;
    NSDictionary *_keyAttributesByCodingKey;
    NSDictionary *_attributesByCodingKey;
    NSDictionary *_attributeCodingKeysByPropertyName;
    NSDictionary *_relationshipsByCodingKey;
    NSDictionary *_relationshipCodingKeysByPropertyName;
    NSDictionary *_concreteSubentitiesByTypeID;
    SEL _contextualizeConditionsSelector;
}


@property (readonly) NSDictionary *attributesByCodingKey;
@property (readonly) NSDictionary *concreteSubentitiesByTypeID;
@property (readonly) NSEntityDescription *entity;
@property (readonly) BOOL hasConcreteSubentities;
@property (readonly) NSDictionary *keyAttributesByCodingKey;
@property (readonly) NSString *name;
@property (readonly) NSArray *parentRelationships; // ivar: _parentRelationships
@property (readonly) NSString *refContextCodingKey;
@property (readonly) NSEntityDescription *refContextEntity;
@property (readonly) NSString *refContextKeyPath;
@property (readonly) NSDictionary *relationshipsByCodingKey;
@property (readonly) NSString *typeID;


-(id)descriptionForAttribute:(id)arg0 ;
-(id)descriptionForRelationship:(id)arg0 ;


@end


#endif