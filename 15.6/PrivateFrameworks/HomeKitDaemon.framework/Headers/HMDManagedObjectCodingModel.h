// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMANAGEDOBJECTCODINGMODEL_H
#define HMDMANAGEDOBJECTCODINGMODEL_H

@class NSManagedObjectModel, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMDManagedObjectCodingModel : NSObject {
    NSManagedObjectModel *_model;
    NSUInteger _options;
    NSMutableDictionary *_descriptions;
    NSString *_typeIDConfigKey;
    NSString *_keyAttributesConfigKey;
    NSString *_includeConfigKey;
    NSString *_codingKeyConfigKey;
    NSString *_transformerConfigKey;
    BOOL _hasAnyReferenceRelationships;
}


@property (readonly) BOOL hasOnlyParentChildRelationships;


+(NSUInteger)defaultOptions;
-(BOOL)encodeRootObject:(id)arg0 forEntity:(id)arg1 withWriter:(id)arg2 ;
-(BOOL)encodeRootObject:(id)arg0 withWriter:(id)arg1 ;
-(BOOL)isParentChildRelationship:(id)arg0 ;
-(BOOL)isReferenceRelationship:(id)arg0 ;
-(BOOL)shouldIncludeRelationship:(id)arg0 ;
-(BOOL)updateRootObject:(id)arg0 fromReader:(id)arg1 ;
-(id)decodeRootEntity:(id)arg0 fromReader:(id)arg1 ;
-(id)descriptionForEntity:(id)arg0 ;
-(id)descriptionForManagedObject:(id)arg0 ;
-(id)descriptionForRelationship:(id)arg0 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntities:(id)arg2 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntities:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntityNames:(id)arg2 ;
-(id)initWithModel:(id)arg0 configNamespace:(id)arg1 rootEntityNames:(id)arg2 options:(NSUInteger)arg3 ;
-(id)insertOrUpdateRootObjectForEntity:(id)arg0 inContext:(id)arg1 fromReader:(id)arg2 ;
-(id)subentityOfDescription:(id)arg0 withTypeID:(id)arg1 ;
-(id)transformerNameForAttribute:(id)arg0 ;


@end


#endif