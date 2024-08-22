// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISTOREMEDIAITEM_IOS_H
#define VUISTOREMEDIAITEM_IOS_H

@class iOS, NSString, NSURL, NSNumber, NSDictionary, NSError;
@protocol TVPMediaItemReportingDelegate, TVPContentKeyLoading, VUIStoreFPSKeyLoaderDelegate;

#import <Foundation/Foundation.h>

#import "VUIStoreDownloadMonitor.h"
#import "VUIStoreFPSKeyLoader.h"

@interface VUIStoreMediaItem_iOS : iOS <TVPMediaItemReportingDelegate, TVPContentKeyLoading, VUIStoreFPSKeyLoaderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *downloadDestinationURL; // ivar: _downloadDestinationURL
@property (retain, nonatomic) VUIStoreDownloadMonitor *downloadMonitor; // ivar: _downloadMonitor
@property (retain, nonatomic) NSNumber *downloadToken; // ivar: _downloadToken
@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // ivar: _fpsAdditionalServerParams
@property (copy, nonatomic) NSURL *fpsCertificateURL; // ivar: _fpsCertificateURL
@property (retain, nonatomic) NSError *fpsKeyError; // ivar: _fpsKeyError
@property (copy, nonatomic) NSURL *fpsKeyServerURL; // ivar: _fpsKeyServerURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBingeWatched; // ivar: _isBingeWatched
@property (nonatomic) NSUInteger loadingContext; // ivar: _loadingContext
@property (nonatomic) BOOL needsRentalCheckin; // ivar: _needsRentalCheckin
@property (nonatomic) BOOL needsRentalCheckoutPriorToPlayback; // ivar: _needsRentalCheckoutPriorToPlayback
@property (retain, nonatomic) NSObject *parentReportingToken; // ivar: _parentReportingToken
@property (nonatomic) NSInteger playbackType; // ivar: _playbackType
@property (retain, nonatomic) NSURL *playbackURL; // ivar: _playbackURL
@property (retain, nonatomic) NSDictionary *sinfsDict; // ivar: _sinfsDict
@property (nonatomic) NSNumber *startTime; // ivar: _startTime
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // ivar: _storeFPSKeyLoader
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_loadingCancelled:(NSUInteger)arg0 ;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)shouldRetryPlaybackForError:(id)arg0 ;
-(id)_adamIDString;
-(id)_downloadForThisMediaItemReturningDownloadManager:(*id)arg0 ;
-(id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg0 ;
-(id)_iTunesStoreContentInfo;
-(id)_iTunesStoreContentPurchasedMediaKind;
-(id)_offlineKeyDataForKeyRequest:(id)arg0 ;
-(id)_rentalEndDate;
-(id)_rentalExpirationDate;
-(id)_rentalPlaybackEndDate;
-(id)_videoPlaybackTypeDescription;
-(id)initWithAdamID:(NSInteger)arg0 ;
-(id)initWithMPMediaItem:(id)arg0 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(id)replacementErrorForPlaybackError:(id)arg0 ;
-(id)reportingDelegate;
-(void)_checkInRental;
-(void)_checkoutRentalWithCheckoutType:(NSUInteger)arg0 startPlaybackClock:(BOOL)arg1 completion:(id)arg2 ;
-(void)_configureForLocalPlaybackWithURL:(id)arg0 completion:(id)arg1 ;
-(void)_configureForPlaybackFromExistingDownload:(id)arg0 downloadManager:(id)arg1 completion:(id)arg2 ;
-(void)_configureForStreamingPlaybackWithCompletion:(id)arg0 ;
-(void)_deleteDownloadKeyCookieForURL:(id)arg0 ;
-(void)_externalPlaybackTypeDidChange:(id)arg0 ;
-(void)_performStreamingRedownloadWithCompletion:(id)arg0 ;
-(void)_persistOfflineKeyData:(id)arg0 forKeyRequest:(id)arg1 ;
-(void)_setDownloadKeyCookieWithURL:(id)arg0 downloadKey:(id)arg1 ;
-(void)_updateRentalPlaybackStartDate:(id)arg0 ;
-(void)cleanUpMediaItem;
-(void)dealloc;
-(void)loadFairPlayStreamingKeyRequests:(id)arg0 ;
-(void)mediaItemAllInitialLoadingComplete:(id)arg0 totalTime:(CGFloat)arg1 player:(id)arg2 ;
-(void)prepareForLoadingWithCompletion:(id)arg0 ;
-(void)prepareForPlaybackInitiationWithCompletion:(id)arg0 ;
-(void)storeFPSKeyLoader:(id)arg0 didLoadOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)storeFPSKeyLoader:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 playbackStartDate:(id)arg2 ;
-(void)storeFPSKeyLoader:(id)arg0 willFailWithError:(id)arg1 forKeyRequest:(id)arg2 ;


@end


#endif