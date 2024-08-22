// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIISMEDIAITEM_H
#define VUIISMEDIAITEM_H

@class TVPBaseMediaItem, NSString, NSData, NSMutableArray, NSURL, NSDictionary;
@protocol TVPContentKeyLoading;



@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading>



@property (retain, nonatomic) NSString *assetIDForStopping; // ivar: _assetIDForStopping
@property (retain, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableScrubbing; // ivar: _disableScrubbing
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger loadingContext; // ivar: _loadingContext
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // ivar: _requestsAwaitingCertFetch
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSURL *stopServerURL; // ivar: _stopServerURL
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tokenServerParameters; // ivar: _tokenServerParameters
@property (retain, nonatomic) NSURL *tokenServerURL; // ivar: _tokenServerURL
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(void)initialize;
-(BOOL)_allowedToRetryRequestForError:(id)arg0 response:(id)arg1 ;
-(BOOL)hasTrait:(id)arg0 ;
-(BOOL)isEqualToMediaItem:(id)arg0 ;
-(CGFloat)_randomRetryDelayForFailedAttemptNumber:(NSUInteger)arg0 ;
-(id)_assetIDDataForKeyRequest:(id)arg0 ;
-(id)_assetIDForKeyRequest:(id)arg0 ;
-(id)_certificateURLForKeyRequest:(id)arg0 ;
-(id)_keyServerURLForKeyRequest:(id)arg0 ;
-(id)_linearServiceRequestForURL:(id)arg0 assetID:(id)arg1 ;
-(id)initWithURL:(id)arg0 tokenServerURL:(id)arg1 stopServerURL:(id)arg2 tokenServerParameters:(id)arg3 ;
-(id)mediaItemMetadataForProperty:(id)arg0 ;
-(id)mediaItemURL;
-(void)_failKeyRequests:(id)arg0 withError:(id)arg1 ;
-(void)_fetchTokenForAssetID:(id)arg0 completion:(id)arg1 ;
-(void)_generateKeyRequestDataForKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)_loadCertificateDataFromURL:(id)arg0 loadingContext:(NSUInteger)arg1 attemptNumber:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_parseCertificateURL:(*id)arg0 keyServerURL:(*id)arg1 assetID:(*id)arg2 fromKeyRequest:(id)arg3 ;
-(void)_sendKeyRequestsToServer:(id)arg0 token:(id)arg1 ;
-(void)_sendStopForAssetID:(id)arg0 ;
-(void)_sendURLRequestToServer:(id)arg0 forKeyRequest:(id)arg1 attemptNumber:(NSUInteger)arg2 ;
-(void)_startKeyRequests:(id)arg0 token:(id)arg1 ;
-(void)cleanUpMediaItem;
-(void)loadFairPlayStreamingKeyRequests:(id)arg0 ;


@end


#endif