// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMANAGEDOBJECTMODEL_H
#define NSMANAGEDOBJECTMODEL_H

@class NSMutableDictionary, NSSet, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "_PFVMData.h"

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration>

 {
    _PFVMData *_dataForOptimization;
    *id _optimizationHints;
    *id _additionalPrivateIvars;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    __managedObjectModelFlags _managedObjectModelFlags;
}


@property (nonatomic, setter=_setModelsReferenceIDOffset:) NSInteger _modelsReferenceIDOffset;
@property (readonly) NSArray *configurations;
@property (retain) NSArray *entities;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (retain) NSDictionary *localizationDictionary;
@property (copy) NSSet *versionIdentifiers;


+(BOOL)supportsSecureCoding;
+(BOOL)versionHashes:(id)arg0 compatibleWithStoreMetadata:(id)arg1 ;
+(NSInteger)_debugOptimizedModelLayout;
+(id)mergedModelFromBundles:(id)arg0 ;
+(id)mergedModelFromBundles:(id)arg0 forStoreMetadata:(id)arg1 ;
+(id)modelByMergingModels:(id)arg0 ;
+(id)modelByMergingModels:(id)arg0 forStoreMetadata:(id)arg1 ;
+(id)versionsHashesForModelAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isConfiguration:(id)arg0 compatibleWithStoreMetadata:(id)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)_initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_initWithEntities:(id)arg0 ;
-(id)_localizationPolicy;
-(id)_modelForVersionHashes:(id)arg0 ;
-(id)_optimizedEncoding:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entitiesForConfiguration:(id)arg0 ;
-(id)fetchRequestFromTemplateWithName:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)fetchRequestTemplateForName:(id)arg0 ;
-(id)immutableCopy;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfOptimizedURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 forStoreMetadata:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)versionHash;
-(void)_addEntity:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_flattenProperties;
-(void)_restoreValidation;
-(void)_setIsEditable:(BOOL)arg0 ;
-(void)_setIsEditable:(BOOL)arg0 optimizationStyle:(NSUInteger)arg1 ;
-(void)_setLocalizationPolicy:(id)arg0 ;
-(void)_stripForMigration;
-(void)_throwIfNotEditable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setFetchRequestTemplate:(id)arg0 forName:(id)arg1 ;


@end


#endif