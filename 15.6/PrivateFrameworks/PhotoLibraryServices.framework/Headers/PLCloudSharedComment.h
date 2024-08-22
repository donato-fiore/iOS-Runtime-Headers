// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDSHAREDCOMMENT_H
#define PLCLOUDSHAREDCOMMENT_H

@class NSString, NSDate, NSNumber;


#import "PLManagedObject.h"
#import "PLCloudFeedCommentsEntry.h"
#import "PLManagedAsset.h"

@interface PLCloudSharedComment : PLManagedObject

@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (readonly, weak, nonatomic) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDate *commentClientDate;
@property (retain, nonatomic) NSDate *commentDate;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSString *commentType;
@property (retain, nonatomic) PLManagedAsset *commentedAsset;
@property (readonly, weak, nonatomic) NSString *commenterEmail;
@property (readonly, weak, nonatomic) NSString *commenterFirstName;
@property (readonly, weak, nonatomic) NSString *commenterFullName;
@property (retain, nonatomic) NSString *commenterHashedPersonID;
@property (readonly, weak, nonatomic) NSString *commenterLastName;
@property (retain, nonatomic) NSNumber *isBatchComment;
@property (retain, nonatomic) NSNumber *isCaption;
@property (retain, nonatomic) NSNumber *isDeletable;
@property (retain, nonatomic) NSNumber *isLike;
@property (readonly, nonatomic) BOOL isLikeBoolValue;
@property (retain, nonatomic) NSNumber *isMyComment;
@property (retain, nonatomic) PLManagedAsset *likedAsset;


+(id)_cloudSharedCommentsWithPredicate:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)cloudSharedCommentWithGUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)cloudSharedCommentsWithCommentDate:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)cloudSharedCommentsWithGUIDs:(id)arg0 inLibrary:(id)arg1 ;
+(id)entityName;
+(id)insertNewCommentIntoAsset:(id)arg0 commentDate:(id)arg1 withText:(id)arg2 isLike:(BOOL)arg3 isMyComment:(BOOL)arg4 inLibrary:(id)arg5 ;
-(BOOL)_isInterestingToUser;
-(BOOL)canBeDeletedByUser;
-(BOOL)isInterestingForAlbumsSorting;
-(BOOL)matchesCommentText:(id)arg0 isLike:(BOOL)arg1 ;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg0 asCaptionOnly:(*BOOL)arg1 ;
-(id)asset;
-(id)commenterDisplayName;
-(id)init;
-(void)awakeFromInsert;
-(void)performDelete;
-(void)prepareForDeletion;
-(void)willSave;


@end


#endif