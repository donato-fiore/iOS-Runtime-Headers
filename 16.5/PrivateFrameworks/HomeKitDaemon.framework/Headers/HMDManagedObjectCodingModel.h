// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMANAGEDOBJECTCODINGMODEL_H
#define HMDMANAGEDOBJECTCODINGMODEL_H

@class NSManagedObjectModel, NSDictionary, NSOrderedSet, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "HMDEntityCodingDescription.h"

@interface HMDManagedObjectCodingModel : NSObject {
    NSManagedObjectModel *_model;
    NSUInteger _options;
    HMDEntityCodingDescription *_root;
    NSDictionary *_descriptions;
    NSOrderedSet *_conditions;
    BOOL _hasAnyReferenceRelationships;
    NSString *_typeIDConfigKey;
    NSString *_keyAttributesConfigKey;
    NSString *_refContextConfigKey;
    NSString *_includeConfigKey;
    NSString *_codingKeyConfigKey;
    NSString *_transformerConfigKey;
    NSString *_inlineConfigKey;
    NSString *_conditionalConfigKey;
    SEL _contextualizeConditionsSelector;
    SEL _attributeValueForKeySelector;
}


@property (readonly) NSArray *allDescriptions;
@property (readonly) BOOL hasOnlyParentChildRelationships;
@property (readonly) NSManagedObjectModel *objectModel;
@property (readonly) HMDEntityCodingDescription *rootDescription;


+(NSUInteger)defaultOptions;
-(BOOL)encodeRootObject:(id)arg0 withWriter:(id)arg1 ;
-(BOOL)encodeRootObject:(id)arg0 withWriter:(id)arg1 changes:(id)arg2 conditions:(id)arg3 userContext:(id)arg4 ;
-(BOOL)isRelevantChanges:(id)arg0 withRootObject:(id)arg1 conditions:(id)arg2 userContext:(id)arg3 ;
-(BOOL)isValidCondition:(id)arg0 ;
-(BOOL)updateRootObject:(id)arg0 fromReader:(id)arg1 ;
-(id)decodeRootObjectFromReader:(id)arg0 ;
-(id)descriptionForAttribute:(id)arg0 ;
-(id)descriptionForDestinationOfRelationship:(id)arg0 ;
-(id)descriptionForEntity:(id)arg0 ;
-(id)descriptionForManagedObject:(id)arg0 ;
-(id)descriptionForRelationship:(id)arg0 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntity:(id)arg2 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntity:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntityName:(id)arg2 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntityName:(id)arg2 options:(NSUInteger)arg3 ;
-(id)insertOrUpdateRootObjectInContext:(id)arg0 fromReader:(id)arg1 ;
-(id)subentityOfDescription:(id)arg0 withTypeID:(id)arg1 ;


@end


#endif