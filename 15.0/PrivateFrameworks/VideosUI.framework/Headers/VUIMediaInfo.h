// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIAINFO_H
#define VUIMEDIAINFO_H

@class VUIImageProxy, NSString, UIColor, UIView, NSArray, TVPPlaylist;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VUIAppContext.h"

@interface VUIMediaInfo : NSObject <NSCopying>



@property (nonatomic) BOOL allowsPictureInPicture; // ivar: _allowsPictureInPicture
@property (retain, nonatomic) VUIImageProxy *alphaImageProxy; // ivar: _alphaImageProxy
@property (retain, nonatomic) NSString *alphaLayerAccessibilityText; // ivar: _alphaLayerAccessibilityText
@property (retain, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart; // ivar: _automaticPlaybackStart
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop; // ivar: _automaticPlaybackStop
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) BOOL hasProgress; // ivar: _hasProgress
@property (copy, nonatomic) NSArray *imageProxies; // ivar: _imageProxies
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL overridesStartTimeWithResumeTime; // ivar: _overridesStartTimeWithResumeTime
@property (nonatomic) NSUInteger playbackContext; // ivar: _playbackContext
@property (nonatomic) CGFloat playbackDelayInterval; // ivar: _playbackDelayInterval
@property (nonatomic) NSUInteger playbackStartReason; // ivar: _playbackStartReason
@property (nonatomic) NSUInteger playbackStopReason; // ivar: _playbackStopReason
@property (retain, nonatomic) TVPPlaylist *playlist; // ivar: _playlist
@property (nonatomic) BOOL restrictionsAlreadyUnlocked; // ivar: _restrictionsAlreadyUnlocked
@property (nonatomic) BOOL shouldDelayLoadingImage; // ivar: _shouldDelayLoadingImage
@property (nonatomic) BOOL showsSecondaryVideoView; // ivar: _showsSecondaryVideoView
@property (retain, nonatomic) TVPPlaylist *tvpPlaylist; // ivar: _tvpPlaylist
@property (retain, nonatomic) NSArray *videosPlayables; // ivar: _videosPlayables


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_videoDynamimcRangeFromMPColorCapability:(NSInteger)arg0 ;
-(NSInteger)_videoResolutionFromMPVideoQuality:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)_auxMediaItemFromVideosPlayable:(id)arg0 ;
-(id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg0 ;
-(id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg0 ;
-(id)_playbackOverridesForURL:(id)arg0 orAdamID:(id)arg1 ;
-(id)_playlistForVUIMediaItems:(id)arg0 ;
-(id)_playlistFromMPMediaItems:(id)arg0 ;
-(id)_playlistFromVideosPlayables:(id)arg0 andStoreDictionary:(id)arg1 ;
-(id)_storeMediaItemFromMPMediaItem:(id)arg0 ;
-(id)_storeMediaItemFromVideosPlayable:(id)arg0 andStoreDictionary:(id)arg1 ;
-(id)_tvpMediaTypeFromPlayable:(id)arg0 ;
-(id)_tvpRatingDomainFromUTSRatingDomain:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPlaybackContext:(NSUInteger)arg0 mpMediaItems:(id)arg1 ;
-(id)initWithPlaybackContext:(NSUInteger)arg0 videosPlayables:(id)arg1 imageProxies:(id)arg2 storeDictionary:(id)arg3 ;
-(id)initWithPlaybackContext:(NSUInteger)arg0 vuiMediaItems:(id)arg1 ;
-(void)_populateMediaItem:(id)arg0 withMetadataFromVideosPlayable:(id)arg1 ;
-(void)_populateMediaItem:(id)arg0 withMetadataOverrides:(id)arg1 ;
-(void)_populateMediaItem:(id)arg0 withResumeTimeInfoFromPlayable:(id)arg1 ;
-(void)_updatePlaybackStartReason;
-(void)setUserPlaybackInitiationDate:(id)arg0 openURLCompletionDate:(id)arg1 ;


@end


#endif