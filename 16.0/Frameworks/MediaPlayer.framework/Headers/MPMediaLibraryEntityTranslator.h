// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIALIBRARYENTITYTRANSLATOR_H
#define MPMEDIALIBRARYENTITYTRANSLATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MPMediaLibraryEntityTranslator : NSObject {
    NSMutableDictionary *_propertiesToTranslators;
    NSMutableDictionary *_relationshipsToTranslators;
}


@property (readonly, nonatomic) Class MPModelClass; // ivar: _MPModelClass
@property (copy, nonatomic) id *allowedItemPredicatesBlock; // ivar: _allowedItemPredicatesBlock
@property (readonly, nonatomic) *void entityClass; // ivar: _entityClass
@property (copy, nonatomic) id *entityQueryBlock; // ivar: _entityQueryBlock
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // ivar: _transient


+(id)_translatorForMPModelClass:(Class)arg0 mlcoreEntityClass:(*void)arg1 create:(BOOL)arg2 transient:(BOOL)arg3 ;
+(id)translatorForMPModelClass:(Class)arg0 ;
+(id)translatorForMPModelClass:(Class)arg0 mlcoreEntityClass:(*void)arg1 ;
+(id)translatorForTransientMPModelClass:(Class)arg0 ;
-(*void)_propertyForKeyPath:(id)arg0 ;
-(?)MLCorePropertiesForPropertySet;
-(?)_MLCorePropertiesForPropertySetwithForeignPropertyBase;
-(?)_objectForPropertySet:(?)arg0 entity:(?)arg1 baseTranslator:(?)arg2 prependKeyPathcontext;
-(?)entityQueryForPropertySet:(?)arg0 sortDescriptors:(?)arg1 contextview;
-(?)identifiersForEntitycontext;
-(Class)classForRelationshipKey:(id)arg0 ;
-(id)_propertyTranslatorForKeyPath:(id)arg0 ;
-(id)_valueForKeyPath:(id)arg0 forEntity:(struct shared_ptr<mlcore::Entity> )arg1 context:(id)arg2 ;
-(id)objectForPropertySet:(id)arg0 entity:(struct shared_ptr<mlcore::Entity> )arg1 context:(id)arg2 ;
-(struct map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> )_propertyMapForKeyPath:(id)arg0 includePropertiesToSort:(BOOL)arg1 ;
-(struct map<std::string, mlcore::ModelPropertyBase *, std::less<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> )propertiesToFetchForPropertyKey:(id)arg0 ;
-(struct shared_ptr<mlcore::PropertiesQuery> )propertiesQueryForPropertySet:(id)arg0 scopedContainers:(id)arg1 allowedItemIdentifiers:(id)arg2 view:(id)arg3 ;
-(struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> )MLCoreSortDescriptorsForModelSortDescriptors:(id)arg0 ;
-(struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> )MLCorePredicateForModelPropertyFilters:(id)arg0 ;
-(void)mapIdentifierMLProperties:(*void)arg0 identifierCreationBlock:(id)arg1 ;
-(void)mapPropertyKey:(id)arg0 toMLProperty:(*void)arg1 ;
// -(void)mapPropertyKey:(id)arg0 withPropertiesToFetch:(*void)arg1 propertiesToSort:(*void)arg2 sortTransformer:(id)arg3 filterTransformer:(unk)arg4 valueTransformer:(id)arg5  ;
// -(void)mapPropertyKey:(id)arg0 withPropertiesToFetch:(*void)arg1 propertiesToSort:(*void)arg2 sortTransformer:(id)arg3 valueTransformer:(unk)arg4  ;
-(void)mapPropertyKey:(id)arg0 withPropertiesToFetch:(*void)arg1 valueTransformer:(id)arg2 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 transient:(BOOL)arg2 usingForeignPropertyBase:(*void)arg3 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 transient:(BOOL)arg2 usingForeignPropertyBase:(*void)arg3 relationshipValidationProperties:(*void)arg4 isValidRelationshipHandler:(id)arg5 ;
-(void)mapRelationshipKey:(id)arg0 toModelClass:(Class)arg1 usingForeignPropertyBase:(*void)arg2 ;


@end


#endif