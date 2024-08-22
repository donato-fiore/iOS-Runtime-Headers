// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCOLLECTION_H
#define PHCOLLECTION_H

@class NSDate, NSSortDescriptor, NSArray, NSString, NSManagedObjectID;
@protocol PHCollectionPresentationHints;


#import "PHObject.h"

@interface PHCollection : PHObject

@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) BOOL customSortAscending; // ivar: _customSortAscending
@property (readonly, nonatomic) unsigned int customSortKey; // ivar: _customSortKey
@property (readonly, copy, nonatomic) NSSortDescriptor *defaultSortDescriptor;
@property (readonly, copy, nonatomic) NSArray *effectiveCustomSortDescriptors;
@property (readonly, copy, nonatomic) NSString *effectiveCustomSortKey;
@property (readonly, nonatomic) NSUInteger estimatedPhotosCount; // ivar: _estimatedPhotosCount
@property (readonly, nonatomic) NSUInteger estimatedVideosCount; // ivar: _estimatedVideosCount
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (readonly, nonatomic) BOOL hasLocationInfo;
@property (readonly, nonatomic) BOOL isAlbumContentSort;
@property (readonly, nonatomic) BOOL isAlbumContentTitleSort;
@property (readonly, nonatomic) BOOL isUserSmartAlbum;
@property (readonly, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSManagedObjectID *parentFolderID;
@property (readonly, copy, nonatomic) NSObject<PHCollectionPresentationHints> *presentationHints;
@property (readonly, nonatomic) BOOL startsAtEnd;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed


+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)fetchCollectionsInCollectionList:(id)arg0 options:(id)arg1 ;
+(id)fetchFilteredAssetCollections:(id)arg0 containingAssetsMatchingPredicate:(id)arg1 ;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsForAssetsWithOIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)managedEntityName;
+(id)predicateForUserCollections;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)isDeleted;
-(NSUInteger)ancestryIndexOfCollectionList:(id)arg0 context:(id)arg1 ;
-(NSUInteger)collectionFixedOrderPriority;
-(id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg0 ;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)objectReference;


@end


#endif