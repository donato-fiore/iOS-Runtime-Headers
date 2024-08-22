// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDSECTIONINFO_H
#define PXFEEDSECTIONINFO_H

@class NSString, NSOrderedSet, NSArray, PLCloudFeedEntry, NSCountedSet, NSDate, NSIndexSet, PLCloudSharedAlbumInvitationRecord, PLManagedAsset, PLPhotoLibrary;
@protocol PXInboxModel, PXInboxPreviewItem, PLAssetContainer, PLCloudSharedAlbumProtocol;

#import <Foundation/Foundation.h>


@interface PXFeedSectionInfo : NSObject <PXInboxModel, PXInboxPreviewItem, PLAssetContainer>



@property (copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (readonly, nonatomic) NSUInteger approximateCount;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) NSArray *assetsForOneUp;
@property (nonatomic) NSInteger cachedInboxModelType; // ivar: _cachedInboxModelType
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) PLCloudFeedEntry *cloudFeedEntry; // ivar: _cloudFeedEntry
@property (readonly, nonatomic) NSCountedSet *countsByAssetDisplayType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSIndexSet *excludedAssetIndexes; // ivar: _excludedAssetIndexes
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *inboxModelTitle;
@property (readonly, nonatomic) NSInteger inboxModelType;
@property (readonly, nonatomic) NSInteger inboxModelType;
@property (retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // ivar: _invitationRecord
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isMine;
@property (retain, nonatomic) PLManagedAsset *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSString *keyCommentGUID;
@property (readonly, nonatomic) NSArray *leftPreviewItems;
@property (nonatomic, getter=isLoaded) BOOL loaded; // ivar: _loaded
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, nonatomic) NSString *ownerEmail;
@property (readonly, nonatomic) NSString *ownerFirstName;
@property (readonly, nonatomic) NSString *ownerLastName;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSUInteger photosCount;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // ivar: _secondaryKeyAsset
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (nonatomic, getter=isSeen) BOOL seen;
@property (readonly, copy, nonatomic) NSArray *senderNames;
@property (retain, nonatomic) NSObject<PLCloudSharedAlbumProtocol> *sharedAlbum; // ivar: _sharedAlbum
@property (nonatomic) BOOL shouldBeVisibleWhenEmpty; // ivar: _shouldBeVisibleWhenEmpty
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // ivar: _tertiaryKeyAsset
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier
@property (readonly, nonatomic) BOOL userIsSender;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


+(id)defaultPreviewImage;
+(id)sectionInfoWithCloudFeedEntry:(id)arg0 ;
+(void)beginCachingSharedAlbumsByGUIDs;
+(void)endCachingSharedAlbumsByGUIDs;
-(BOOL)areAllAssetsLiked;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)containsAsset:(id)arg0 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPlayableAssetForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfFirstItemFromLastBatch;
-(NSInteger)indexOfItemWithAsset:(id)arg0 ;
-(NSInteger)indexOfItemWithComment:(id)arg0 ;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(id)_usersInvolved;
-(id)_usersInvolvedForCoalescedEntry;
-(id)_usersInvolvedForComment;
-(id)_usersInvolvedForInvitation;
-(id)_usersInvolvedForLike;
-(id)_usersInvolvedForPost;
-(id)_usersInvolvedForResponse;
-(id)assetForItemAtIndex:(NSInteger)arg0 ;
-(id)assetsForItemAtIndex:(NSInteger)arg0 maximumCount:(NSInteger)arg1 ;
-(id)batchIDForItemAtIndex:(NSInteger)arg0 ;
-(id)captionForItemAtIndex:(NSInteger)arg0 ;
-(id)commentForItemAtIndex:(NSInteger)arg0 ;
-(id)commentTextForItemAtIndex:(NSInteger)arg0 ;
-(id)commentsForItemAtIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCloudFeedEntry:(id)arg0 ;
-(id)likesForItemAtIndex:(NSInteger)arg0 ;
-(id)sharedAlbumWithGUID:(id)arg0 ;
-(void)fetchLeftPreviewItemsWithCompletion:(id)arg0 ;
-(void)getCommentCount:(*NSUInteger)arg0 likeCount:(*NSUInteger)arg1 ;
-(void)getPhotoCount:(*NSUInteger)arg0 videoCount:(*NSUInteger)arg1 ;
-(void)reload;


@end


#endif