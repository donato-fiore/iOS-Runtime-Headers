// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHAREDALBUM_H
#define PLCLOUDSHAREDALBUM_H

@class NSOrderedSet, NSDate, NSString, NSDictionary, NSNumber, NSURL, NSArray, NSMutableOrderedSet;
@protocol PLCloudSharedAlbumProtocol;

#import <Foundation/Foundation.h>

#import "PLManagedAlbum.h"
#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol>

 {
    BOOL _deleteFromDBOnly;
}


@property (readonly, nonatomic) NSUInteger approximateCount;
@property (retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (nonatomic) NSUInteger batchSize;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (nonatomic) short cloudAlbumSubtype;
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
@property (retain, nonatomic) NSNumber *cloudOwnerEmailKey;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (nonatomic) BOOL cloudOwnerIsWhitelisted;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property (retain, nonatomic) NSNumber *cloudRelationshipState;
@property (retain, nonatomic) NSNumber *cloudRelationshipStateLocal;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (readonly) int cloudRelationshipStateValue;
@property (retain, nonatomic) NSDate *cloudSubscriptionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (retain, nonatomic) NSNumber *hasUnseenContent;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSOrderedSet *invitationRecords;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (retain, nonatomic) NSNumber *isOwned;
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
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


+(id)allCloudSharedAlbumsInLibrary:(id)arg0 ;
+(id)cloudOwnerDisplayNameWithFirstName:(id)arg0 lastName:(id)arg1 fullName:(id)arg2 emailKey:(id)arg3 includingEmail:(BOOL)arg4 allowsEmail:(BOOL)arg5 emailAddressManager:(id)arg6 ;
+(id)cloudSharedAlbumWithGUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)cloudSharedAlbumWithObjectID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)lightweightReimportDirectoryNameWithGUID:(id)arg0 cloudPersonID:(id)arg1 ;
+(id)localizedSharedByLabelWithFirstName:(id)arg0 lastName:(id)arg1 fullName:(id)arg2 emailKey:(id)arg3 isOwned:(BOOL)arg4 allowsEmail:(BOOL)arg5 emailAddressManager:(id)arg6 ;
-(id)_expectedKeyAssets:(id)arg0 ;
-(id)albumDirectoryPath;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg0 allowsEmail:(BOOL)arg1 ;
-(id)emailAddressManager;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg0 ;
-(void)awakeFromInsert;
-(void)delete;
-(void)deleteFromDatabaseOnly;
-(void)getUnseenStartMarkerIndex:(*NSUInteger)arg0 count:(*NSUInteger)arg1 showsProgress:(*BOOL)arg2 ;
-(void)persistRecoveryMetadata;
-(void)prepareForDeletion;
-(void)publishBatchOfOriginalAssetUUIDs:(id)arg0 withBatchCommentText:(id)arg1 assetsSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 isNewAlbum:(BOOL)arg5 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg0 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg0 ;
-(void)userDeleteSubscriberRecord:(id)arg0 ;
-(void)willSave;


@end


#endif