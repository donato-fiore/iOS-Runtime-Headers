// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDFEEDENTRIESMANAGER_H
#define PLCLOUDFEEDENTRIESMANAGER_H


#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLCloudFeedEntriesManager : NSObject

@property (readonly, nonatomic) PLPhotoLibrary *library; // ivar: _library


-(BOOL)_commentIsBatchCaption:(id)arg0 ;
-(BOOL)_shouldIgnoreAsset:(id)arg0 ;
-(BOOL)_shouldIgnoreComment:(id)arg0 ;
-(BOOL)_shouldIgnoreInvitationRecord:(id)arg0 ;
-(BOOL)_shouldMergeAsset:(id)arg0 intoEntry:(id)arg1 ;
-(BOOL)_tryMergingComment:(id)arg0 withEntry:(id)arg1 ;
-(BOOL)_wasAssetPublishedBeforeSubscription:(id)arg0 ;
-(BOOL)_wasCommentPublishedBeforeSubscription:(id)arg0 ;
-(id)_albumCreatedEntryForSharedAlbum:(id)arg0 ;
-(id)_assetSortingComparator:(SEL)arg0 ;
-(id)_commentSortingComparator:(SEL)arg0 ;
-(id)_dateForAsset:(id)arg0 ;
-(id)_firstEntryAfterDate:(id)arg0 ;
-(id)_firstEntryOnOrAfterDate:(id)arg0 ;
-(id)_firstEntryOnOrBeforeDate:(id)arg0 ;
-(id)_firstEntryRelativeToDate:(id)arg0 ascending:(BOOL)arg1 includeSameDate:(BOOL)arg2 ;
-(id)_invitationAcceptedEntryForInvitationRecord:(id)arg0 ;
-(id)_invitationDeclinedEntryForInvitationRecord:(id)arg0 ;
-(id)_invitationReceivedEntryForSharedAlbum:(id)arg0 ;
-(id)_singleEntryOfType:(NSInteger)arg0 forInvitationRecord:(id)arg1 ;
-(id)_singleEntryOfType:(NSInteger)arg0 forSharedAlbum:(id)arg1 ;
-(id)_subscriptionDateForSharedAlbum:(id)arg0 ;
-(id)_subscriptionEntryForSharedAlbum:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_addAsset:(id)arg0 toEntry:(id)arg1 ;
-(void)_getEarliestDate:(*id)arg0 latestDate:(*id)arg1 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg2 ;
-(void)_mergeEntriesAroundDate:(id)arg0 ;
-(void)_mergeOlderEntry:(id)arg0 intoMoreRecentEntry:(id)arg1 ;
-(void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg0 ;
-(void)_noteContentDeletionAffectingAssetsEntry:(id)arg0 ;
-(void)_noteContentDeletionAffectingCommentsEntry:(id)arg0 ;
-(void)_noteContentDeletionAffectingInvitationEntry:(id)arg0 ;
-(void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg0 ;
-(void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg0 ;
-(void)_noteDidReceiveSharedAsset:(id)arg0 ;
-(void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg0 ;
-(void)_noteDidReceiveSharedComment:(id)arg0 ;
-(void)_noteDidReceiveSharedComments:(id)arg0 ;
-(void)_noteDidUpdateInvitationRecord:(id)arg0 ;
-(void)_noteDidUpdateSharedAlbum:(id)arg0 ;
-(void)_splitEntriesAtDate:(id)arg0 ;
-(void)processAlbumUpdates:(id)arg0 assetInserts:(id)arg1 assetUpdates:(id)arg2 commentInserts:(id)arg3 invitationRecordUpdates:(id)arg4 deletionEntries:(id)arg5 completionHandler:(id)arg6 ;
-(void)rebuildAllEntries:(id)arg0 ;


@end


#endif