// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISTOREAUXMEDIAITEM_H
#define VUISTOREAUXMEDIAITEM_H

@class NSString, NSNumber, NSDictionary, NSURL, NSError, TVPPlayer;
@protocol VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate;

#import <Foundation/Foundation.h>

#import "VUIBaseMediaItem.h"
#import "VUIMutableBookmark.h"
#import "VUIStoreFPSKeyLoader.h"
#import "VUIVideoManagedObject.h"

@interface VUIStoreAuxMediaItem : VUIBaseMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>



@property (retain, nonatomic) VUIMutableBookmark *bookmark; // ivar: _bookmark
@property (copy, nonatomic) NSString *bookmarkID; // ivar: _bookmarkID
@property (copy, nonatomic) NSNumber *bookmarkOverrideTime; // ivar: _bookmarkOverrideTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableResumeMenu; // ivar: _disableResumeMenu
@property (nonatomic) BOOL disableScrubbing; // ivar: _disableScrubbing
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // ivar: _fpsAdditionalServerParams
@property (copy, nonatomic) NSURL *fpsCertificateURL; // ivar: _fpsCertificateURL
@property (retain, nonatomic) NSError *fpsKeyError; // ivar: _fpsKeyError
@property (copy, nonatomic) NSURL *fpsKeyServerURL; // ivar: _fpsKeyServerURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreExistingOfflineKeyData; // ivar: _ignoreExistingOfflineKeyData
@property (nonatomic) BOOL isAudioOnly; // ivar: _isAudioOnly
@property (nonatomic) BOOL isFamilySharingContent; // ivar: _isFamilySharingContent
@property (nonatomic) BOOL isForStartingDownload; // ivar: _isForStartingDownload
@property (nonatomic) BOOL isHLS; // ivar: _isHLS
@property (nonatomic) BOOL isLiveContent; // ivar: _isLiveContent
@property (nonatomic) BOOL isiTunesPurchasedOrRentedContent; // ivar: _isiTunesPurchasedOrRentedContent
@property (retain, nonatomic) NSObject *parentReportingToken; // ivar: _parentReportingToken
@property (nonatomic) NSInteger playbackType; // ivar: _playbackType
@property (retain, nonatomic) TVPPlayer *scrubPlayer; // ivar: _scrubPlayer
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // ivar: _storeFPSKeyLoader
@property (copy, nonatomic) NSURL *streamingOverrideURLForDownload; // ivar: _streamingOverrideURLForDownload
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // ivar: _videoManagedObject


+(void)initialize;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isEqualToMediaItem:(id)arg0 ;
-(id)_offlineKeyDataForKeyRequest:(id)arg0 ;
-(id)_replacementErrorForITunesPlaybackError:(id)arg0 ;
-(id)_replacementErrorForPlaybackError:(id)arg0 ;
-(id)_tvpRatingDomainFromUTSRatingDomain:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithVideoManagedObject:(id)arg0 isForStartingDownload:(BOOL)arg1 externalBookmarkTime:(id)arg2 externalBookmarkTimestamp:(id)arg3 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(id)replacementErrorForPlaybackError:(id)arg0 ;
-(id)reportingDelegate;
-(void)_keepKeyLoaderAlive:(id)arg0 ;
-(void)_scrubPlayerItemDidLoad:(id)arg0 ;
-(void)cleanUpMediaItem;
-(void)dealloc;
-(void)loadFairPlayStreamingKeyRequests:(id)arg0 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)mediaItem:(id)arg0 didChangeFromPlaybackState:(id)arg1 toPlaybackState:(id)arg2 updatedRate:(CGFloat)arg3 player:(id)arg4 ;
-(void)mediaItem:(id)arg0 errorDidOccur:(id)arg1 player:(id)arg2 ;
-(void)prepareForLoadingWithCompletion:(id)arg0 ;
-(void)resetReportingEventCollection;
-(void)setMediaItemMetadata:(id)arg0 forProperty:(id)arg1 ;
-(void)storeFPSKeyLoader:(id)arg0 didLoadOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)storeFPSKeyLoader:(id)arg0 willFailWithError:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)updateBookmarkWithSuggestedTime:(CGFloat)arg0 forElapsedTime:(CGFloat)arg1 duration:(CGFloat)arg2 playbackOfMediaItemIsEnding:(BOOL)arg3 ;
-(void)updateOfflineKeyWithIdentifier:(id)arg0 updatedOfflineKeyData:(id)arg1 ;


@end


#endif