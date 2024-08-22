// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USKNODE_H
#define USKNODE_H

@class NSDictionary, NSArray, NSString;


#import "USKObject.h"
#import "USKScene.h"
#import "USKToken.h"

@interface USKNode : USKObject {
    UsdPrim _prim;
    USKScene *_owner;
}


@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *schemaTypes;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;


-(BOOL)clearVariantSelectionForVariantSet:(id)arg0 ;
-(BOOL)editVariant:(id)arg0 variantSet:(id)arg1 block:(id)arg2 ;
-(BOOL)hasSchemaType:(id)arg0 ;
-(BOOL)hasVariantSet:(id)arg0 ;
-(BOOL)hasVariantSets;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInstanceNode;
-(BOOL)removeProperty:(id)arg0 ;
-(BOOL)selectVariant:(id)arg0 variantSet:(id)arg1 ;
-(BOOL)setCustomMetadata:(id)arg0 value:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 value:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg0 value:(id)arg1 ;
-(NSUInteger)hash;
-(id)childIterator;
-(id)customMetadataWithKey:(id)arg0 ;
-(id)dictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 ;
-(id)inheritedMaterialBinding;
-(id)inheritedProperty:(id)arg0 ;
-(id)inheritedSkeletonAnimationBinding;
-(id)inheritedSkeletonBinding;
-(id)initWithUsdPrim:(struct UsdPrim )arg0 ;
-(id)initWithUsdPrim:(struct UsdPrim )arg0 withSceneOwner:(id)arg1 ;
-(id)loadedChildIterator;
-(id)loadedSubtreeIterator;
-(id)masterNode;
-(id)metadata;
-(id)metadataWithKey:(id)arg0 ;
-(id)name;
-(id)newCustomPropertyWithName:(id)arg0 type:(id)arg1 role:(id)arg2 ;
-(id)newPropertyWithName:(id)arg0 type:(id)arg1 role:(id)arg2 ;
-(id)newPropertyWithName:(id)arg0 type:(id)arg1 role:(id)arg2 variability:(BOOL)arg3 ;
-(id)parent;
-(id)path;
-(id)property:(id)arg0 ;
-(id)propertyList;
-(id)specifier;
-(id)subtreeIterator;
-(id)variantSets;
-(id)variantsWithVariantSet:(id)arg0 ;
-(struct UsdPrim )usdPrim;
-(void)addReferenceWithPath:(id)arg0 nodePath:(id)arg1 ;
-(void)addReferenceWithPath:(id)arg0 nodePath:(id)arg1 offset:(id)arg2 ;
-(void)addReferenceWithURL:(id)arg0 nodePath:(id)arg1 ;
-(void)addVariant:(id)arg0 variantSet:(id)arg1 ;
-(void)addVariantSet:(id)arg0 ;
-(void)applyType:(id)arg0 ;
-(void)clearReferences;
-(void)setSpecifier:(id)arg0 ;


@end


#endif