// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDENTITYCODINGDESCRIPTION_H
#define HMDENTITYCODINGDESCRIPTION_H

@class NSEntityDescription, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HMDEntityCodingDescription : NSObject {
    NSEntityDescription *_entity;
    NSString *_typeID;
    NSDictionary *_keyAttributesByCodingKey;
    NSDictionary *_attributesByCodingKey;
    NSDictionary *_relationshipsByCodingKey;
    NSDictionary *_concreteSubentitiesByTypeID;
}


@property (readonly) NSDictionary *attributesByCodingKey;
@property (readonly) NSDictionary *concreteSubentitiesByTypeID;
@property (readonly) NSEntityDescription *entity;
@property (readonly) BOOL hasConcreteSubentities;
@property (readonly) NSDictionary *keyAttributesByCodingKey;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *relationshipsByCodingKey;
@property (readonly) NSString *typeID;




@end


#endif