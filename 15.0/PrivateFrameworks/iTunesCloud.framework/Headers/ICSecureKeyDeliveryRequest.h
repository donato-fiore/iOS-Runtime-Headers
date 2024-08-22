// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSECUREKEYDELIVERYREQUEST_H
#define ICSECUREKEYDELIVERYREQUEST_H

@class NSNumber, NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICRequestContext.h"

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying>



@property (nonatomic, getter=isITunesStoreRequest) BOOL ITunesStoreRequest; // ivar: _ITunesStoreRequest
@property (copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (copy, nonatomic) id *asyncServerPlaybackContextDataCreationHandler; // ivar: _asyncServerPlaybackContextDataCreationHandler
@property (copy, nonatomic) NSURL *certificateURL; // ivar: _certificateURL
@property (copy, nonatomic) NSString *contentURI; // ivar: _contentURI
@property (nonatomic) BOOL isOfflineDownload; // ivar: _isOfflineDownload
@property (copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (nonatomic) NSInteger leaseActionType; // ivar: _leaseActionType
@property (copy, nonatomic) NSString *playbackToken; // ivar: _playbackToken
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) NSInteger rentalID; // ivar: _rentalID
@property (copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) NSInteger requestProtocolType; // ivar: _requestProtocolType
@property (copy, nonatomic) id *serverPlaybackContextDataCreationHandler; // ivar: _serverPlaybackContextDataCreationHandler
@property (nonatomic) BOOL shouldIncludeDeviceGUID; // ivar: _shouldIncludeDeviceGUID
@property (nonatomic) BOOL skippedRentalCheckout; // ivar: _skippedRentalCheckout


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)configureUsingAssetResourceLoadingRequest:(id)arg0 ;
-(void)configureUsingContentKeyRequest:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif