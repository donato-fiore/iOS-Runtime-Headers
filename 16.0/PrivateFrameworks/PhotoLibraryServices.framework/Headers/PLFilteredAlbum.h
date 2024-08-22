// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILTEREDALBUM_H
#define PLFILTEREDALBUM_H

@class NSMutableIndexSet, NSMutableOrderedSet, NSOrderedSet, NSDate, NSString, NSDictionary, NSNumber, NSArray, NSIndexSet, NSURL, NSPredicate;
@protocol PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache, PLAlbumProtocol, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "PLIndexMapper.h"
#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache>

 {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    BOOL _backingAlbumSupportsEdits;
    BOOL _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
}


@property (weak, nonatomic) NSMutableOrderedSet *_assets;
@property (readonly, nonatomic) NSUInteger approximateCount;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum; // ivar: _backingAlbum
@property (nonatomic) NSUInteger batchSize;
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *cachedIndexMapState;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (retain, nonatomic) NSDate *cloudCreationDate;
@property (readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDate *cloudLastContributionDate;
@property (retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property (retain, nonatomic) NSDictionary *cloudMetadata;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (nonatomic) BOOL cloudOwnerIsWhitelisted;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (readonly) int cloudRelationshipStateValue;
@property (retain, nonatomic) NSDate *cloudSubscriptionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (nonatomic) int filter; // ivar: filter
@property (readonly, nonatomic) NSArray *filterParameters; // ivar: _filterParameters
@property (readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *importSessionID;
@property (readonly, nonatomic) PLIndexMapper *indexMapper;
@property (retain, nonatomic) NSOrderedSet *invitationRecords;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (nonatomic) BOOL isObservingContextChanges; // ivar: isObservingContextChanges
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isProjectAlbum;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, retain, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) int kindValue;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSUInteger photosCount;
@property (readonly, retain, nonatomic) NSObject *posterImage;
@property (retain, nonatomic) NSPredicate *predicate; // ivar: predicate
@property (retain, nonatomic) NSString *publicURL;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (readonly, copy, nonatomic) id *sortingComparator;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *unseenAssetsCount;
@property NSUInteger unseenAssetsCountIntegerValue;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


+(id)descriptionForAlbumFilter:(int)arg0 parameters:(id)arg1 ;
+(id)filteredAlbum:(id)arg0 filter:(int)arg1 ;
+(id)filteredAlbum:(id)arg0 filter:(int)arg1 parameters:(id)arg2 ;
+(id)filteredAlbum:(id)arg0 intersectFilter:(int)arg1 ;
+(id)filteredAlbum:(id)arg0 predicate:(id)arg1 ;
+(id)filteredIndexesInAlbum:(id)arg0 predicate:(id)arg1 ;
+(id)predicateForAlbumFilter:(int)arg0 parameters:(id)arg1 photoLibrary:(id)arg2 ;
+(id)unfilteredAlbum:(id)arg0 ;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)mappedDataSourceChanged:(id)arg0 remoteNotificationData:(id)arg1 ;
-(BOOL)shouldIncludeObjectAtIndex:(NSUInteger)arg0 ;
-(Class)derivedChangeNotificationClass;
-(NSUInteger)count;
-(NSUInteger)countOfFilteredAssets;
-(NSUInteger)indexInFilteredAssetsOfObject:(id)arg0 ;
-(id)_cloudSharedBackingAlbum;
-(id)_editableBackingAlbum;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg0 allowsEmail:(BOOL)arg1 ;
-(id)currentStateForChange;
-(id)filteredAssetsAtIndexes:(id)arg0 ;
-(id)initWithBackingAlbum:(id)arg0 filter:(int)arg1 parameters:(id)arg2 ;
-(id)initWithBackingAlbum:(id)arg0 predicate:(id)arg1 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg0 ;
-(id)objectInFilteredAssetsAtIndex:(NSUInteger)arg0 ;
-(void)_commonInitWithBackingAlbum:(id)arg0 predicate:(id)arg1 ;
-(void)backingContextDidChange:(id)arg0 ;
-(void)batchFetchAssets:(id)arg0 ;
-(void)dealloc;
-(void)getUnseenStartMarkerIndex:(*NSUInteger)arg0 count:(*NSUInteger)arg1 showsProgress:(*BOOL)arg2 ;
-(void)insertFilteredAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg0 atIndexes:(id)arg1 customExportsInfo:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(void)insertObject:(id)arg0 inFilteredAssetsAtIndex:(NSUInteger)arg1 ;
-(void)reducePendingItemsCountBy:(NSUInteger)arg0 ;
-(void)removeFilteredAssetsAtIndexes:(id)arg0 ;
-(void)removeObjectFromFilteredAssetsAtIndex:(NSUInteger)arg0 ;
-(void)replaceFilteredAssetsAtIndexes:(id)arg0 withFilteredValues:(id)arg1 ;
-(void)replaceObjectInFilteredAssetsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg0 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg0 ;
-(void)userDeleteSubscriberRecord:(id)arg0 ;


@end


#endif