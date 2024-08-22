// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPHOTOATTACHMENTSTATUSCHATITEM_H
#define IMPHOTOATTACHMENTSTATUSCHATITEM_H



#import "IMTranscriptChatItem.h"

@interface IMPhotoAttachmentStatusChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSUInteger numberOfPhotos; // ivar: _numberOfPhotos
@property (readonly, nonatomic) NSUInteger numberOfSavedAssets; // ivar: _numberOfSavedAssets
@property (readonly, nonatomic) NSUInteger numberOfVideos; // ivar: _numberOfVideos


+(id)_guidForItem:(id)arg0 ;
-(BOOL)_isEqualToGuid:(id)arg0 numberOfPhotos:(NSUInteger)arg1 numberOfVideos:(NSUInteger)arg2 numberOfSavedAssets:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFromMe;
-(BOOL)wouldBeEqualIfInitializedWithItem:(id)arg0 numberOfPhotos:(NSUInteger)arg1 numberOfVideos:(NSUInteger)arg2 numberOfSavedAssets:(NSUInteger)arg3 ;
-(NSUInteger)hash;
-(id)_initWithItem:(id)arg0 numberOfPhotos:(NSUInteger)arg1 numberOfVideos:(NSUInteger)arg2 numberOfSavedAssets:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif