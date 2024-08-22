// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORELIBRARYPERSONALIZATIONCOLLECTIONDATASOURCE_H
#define MPSTORELIBRARYPERSONALIZATIONCOLLECTIONDATASOURCE_H

@class NSString, NSDictionary, NSMapTable, NSMutableDictionary;
@protocol MPLazySectionedCollectionDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPPropertySet.h"
#import "MPMediaLibraryView.h"
#import "MPMediaLibraryEntityTranslationContext.h"
#import "MPSectionedCollection.h"

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>

 {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    vector<std::shared_ptr<mlcore::EntityCache>, std::allocator<std::shared_ptr<mlcore::EntityCache>>> _entityCaches;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet; // ivar: _itemIndexPathToOverridePropertySet
@property (copy, nonatomic) MPPropertySet *itemProperties; // ivar: _itemProperties
@property (copy, nonatomic) MPMediaLibraryView *libraryView; // ivar: _libraryView
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse; // ivar: _relativeModelClassToMappingResponse
@property (copy, nonatomic) MPPropertySet *sectionProperties; // ivar: _sectionProperties
@property (retain, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride; // ivar: _sectionToLibraryAddedOverride
@property (readonly) Class superclass;
@property (retain, nonatomic) MPMediaLibraryEntityTranslationContext *translatingContext; // ivar: _translatingContext
@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // ivar: _unpersonalizedContentDescriptors


+(id)_completePersonalizedObjectWithLibraryObject:(id)arg0 personalizationProperties:(id)arg1 overrideLibraryAddedStatus:(NSInteger)arg2 ;
+(id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)arg0 libraryLyrics:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3 ;
+(id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg0 libraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(NSInteger)arg3 ;
+(id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg0 identifiers:(id)arg1 personalizationProperties:(id)arg2 ;
+(id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg0 libraryPlaybackPosition:(id)arg1 personalizationProperties:(id)arg2 ;
+(id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg0 libraryAsset:(id)arg1 personalizationProperties:(id)arg2 ;
+(id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg0 requestedProperties:(id)arg1 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_libraryObjectWithRelativeModelClass:(Class)arg0 identifierSet:(id)arg1 propertySet:(id)arg2 ;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(struct shared_ptr<mlcore::EntityCache> )_entityCacheForEntityClass:(*void)arg0 propertiesToFetch:(struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> )arg1 ;


@end


#endif