// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCOMMENT_H
#define PHASSETCOMMENT_H

@class NSString, NSDate;


#import "PHObject.h"

@interface PHAssetComment : PHObject

@property (readonly, nonatomic) BOOL canBeDeletedByUser; // ivar: _canBeDeletedByUser
@property (readonly, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (readonly, nonatomic) NSDate *commentClientDate; // ivar: _commentClientDate
@property (readonly, nonatomic) NSDate *commentDate; // ivar: _commentDate
@property (readonly, nonatomic) NSString *commentText; // ivar: _commentText
@property (readonly, nonatomic) NSString *commenterDisplayName;
@property (readonly, nonatomic) NSString *commenterEmail;
@property (readonly, nonatomic) NSString *commenterFirstName;
@property (readonly, nonatomic) NSString *commenterFullName;
@property (readonly, nonatomic) NSString *commenterHashedPersonID; // ivar: _commenterHashedPersonID
@property (readonly, nonatomic) NSString *commenterLastName;
@property (readonly, nonatomic) BOOL isBatchComment; // ivar: _isBatchComment
@property (readonly, nonatomic) BOOL isCaption; // ivar: _isCaption
@property (readonly, nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (readonly, nonatomic) BOOL isInterestingForAlbumsSorting;
@property (readonly, nonatomic) BOOL isInterestingToUser; // ivar: _isInterestingToUser
@property (readonly, nonatomic) BOOL isLike; // ivar: _isLike
@property (readonly, nonatomic) BOOL isMyComment; // ivar: _isMyComment


+(id)fetchType;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
-(BOOL)_isInterestingToUser:(id)arg0 ;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg0 asCaptionOnly:(*BOOL)arg1 ;
-(Class)changeRequestClass;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)personInfoManager;


@end


#endif