// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVSECUREKEYDELIVERYREQUESTOPERATION_H
#define SSVSECUREKEYDELIVERYREQUESTOPERATION_H

@class NSOperation, NSDictionary, NSURL, NSData, NSNumber, AVAssetResourceLoadingRequest;
@protocol OS_dispatch_queue, SSVSecureKeyDeliveryRequestOperationDelegate;



@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _iTunesStoreRequest;
    BOOL _shouldIncludeGUID;
    NSDictionary *_URLBagDictionary;
}


@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (retain) NSURL *certificateURL; // ivar: _certificateURL
@property (readonly, nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (retain) NSURL *keyServerURL; // ivar: _keyServerURL
@property (nonatomic) NSInteger leaseAction; // ivar: _leaseAction
@property BOOL offline; // ivar: _offline
@property (readonly, copy, nonatomic) NSData *persistentContentKeyContext; // ivar: _persistentContentKeyContext
@property (readonly, nonatomic) CGFloat playbackStartTime; // ivar: _playbackStartTime
@property (copy) NSNumber *rentalId; // ivar: _rentalId
@property (retain) AVAssetResourceLoadingRequest *resourceLoadingRequest; // ivar: _resourceLoadingRequest
@property (copy) id *responseBlock; // ivar: _responseBlock
@property (retain, nonatomic) NSData *serverPlaybackContextData; // ivar: _serverPlaybackContextData
@property (weak, nonatomic) NSObject<SSVSecureKeyDeliveryRequestOperationDelegate> *serverPlaybackContextDataDelegate; // ivar: _serverPlaybackContextDataDelegate
@property (nonatomic) BOOL shouldIncludeGUID;
@property BOOL skippedRentalCheckout; // ivar: _skippedRentalCheckout


-(CGFloat)_expirationTimeForStreamingKeyID:(NSInteger)arg0 streamingKeyDictionaries:(id)arg1 ;
-(CGFloat)_playbackStartTimeForStreamingKeyID:(NSInteger)arg0 streamingKeyDictionaries:(id)arg1 ;
-(CGFloat)_timeIntervalForStreamingKeyID:(NSInteger)arg0 responseKey:(id)arg1 streamingKeyDictionaries:(id)arg2 ;
-(id)_contentKeyContextForStreamingKeyID:(NSInteger)arg0 streamingKeyDictionaries:(id)arg1 renewAfter:(*CGFloat)arg2 error:(*id)arg3 ;
-(id)_streamingKeyDictionaryForID:(NSInteger)arg0 URI:(id)arg1 serverPlaybackContextData:(id)arg2 ;
-(id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg0 ;
-(id)init;
-(void)_sendResponseBlockWithError:(id)arg0 ;
-(void)configureWithURLBagDictionary:(id)arg0 ;
-(void)main;
-(void)start;


@end


#endif