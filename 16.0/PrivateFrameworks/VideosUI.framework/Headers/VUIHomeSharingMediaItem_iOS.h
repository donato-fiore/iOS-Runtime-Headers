// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIHOMESHARINGMEDIAITEM_IOS_H
#define VUIHOMESHARINGMEDIAITEM_IOS_H

@class iOS, HSHomeSharingLibrary, NSString, NSURL;



@interface VUIHomeSharingMediaItem_iOS : iOS

@property (retain, nonatomic) HSHomeSharingLibrary *homeSharingLibrary; // ivar: _homeSharingLibrary
@property (retain, nonatomic) NSString *keyBagFilePath; // ivar: _keyBagFilePath
@property (nonatomic) NSUInteger loadingContext; // ivar: _loadingContext
@property (retain, nonatomic) NSURL *mediaItemURLInternal; // ivar: _mediaItemURLInternal
@property (nonatomic) BOOL needsKeyBagSyncPriorToPlayback; // ivar: _needsKeyBagSyncPriorToPlayback


+(void)initialize;
-(BOOL)_loadingCancelled:(NSUInteger)arg0 ;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)shouldRetryPlaybackForError:(id)arg0 ;
-(id)imageLoader;
-(id)initWithMPMediaItem:(id)arg0 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(void)_fetchKeybagForDSID:(id)arg0 isFamilyAccount:(BOOL)arg1 completion:(id)arg2 ;
-(void)cleanUpMediaItem;
-(void)prepareForLoadingWithCompletion:(id)arg0 ;
-(void)updateBookmarkWithSuggestedTime:(CGFloat)arg0 forElapsedTime:(CGFloat)arg1 duration:(CGFloat)arg2 playbackOfMediaItemIsEnding:(BOOL)arg3 ;
-(void)updatePlayCountForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif