// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYMEDIAITEM_IOS_H
#define VUILIBRARYMEDIAITEM_IOS_H

@class NSURL, ML3Track, MPMediaItem, MPMediaLibrary;
@protocol TVImageLoader;


#import "VUIBaseMediaItem.h"
#import "VUIPlaybackPositionInfo.h"

@interface VUILibraryMediaItem_iOS : VUIBaseMediaItem

@property (nonatomic) BOOL bookmarkDisabled; // ivar: _bookmarkDisabled
@property (readonly, nonatomic) NSObject<TVImageLoader> *imageLoader;
@property (retain, nonatomic) NSURL *mediaItemURLInternal; // ivar: _mediaItemURLInternal
@property (retain, nonatomic) ML3Track *ml3Track; // ivar: _ml3Track
@property (retain, nonatomic) MPMediaItem *mpMediaItem; // ivar: _mpMediaItem
@property (readonly, nonatomic) MPMediaLibrary *mpMediaLibrary; // ivar: _mpMediaLibrary
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) VUIPlaybackPositionInfo *playbackPositionInfo; // ivar: _playbackPositionInfo


+(void)initialize;
-(BOOL)_supportsBookmarks;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isEqualToMediaItem:(id)arg0 ;
-(id)_localPlaybackFilePathURL;
-(id)initWithMPMediaItem:(id)arg0 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(void)_schedulePlaybackPositionInfoPersistence;
-(void)cleanUpMediaItem;
-(void)prepareForLoadingWithCompletion:(id)arg0 ;
-(void)updateBookmarkWithSuggestedTime:(CGFloat)arg0 forElapsedTime:(CGFloat)arg1 duration:(CGFloat)arg2 playbackOfMediaItemIsEnding:(BOOL)arg3 ;
-(void)updatePlayCountForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif