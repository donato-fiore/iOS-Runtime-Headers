// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELGENERICAVITEMASSETLOADRESULT_H
#define MPCMODELGENERICAVITEMASSETLOADRESULT_H

@class NSURL, NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface MPCModelGenericAVItemAssetLoadResult : NSObject

@property (nonatomic) BOOL allowsAssetCaching; // ivar: _allowsAssetCaching
@property (nonatomic) BOOL allowsAssetInfoCaching; // ivar: _allowsAssetInfoCaching
@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL; // ivar: _alternateHLSKeyCertificateURL
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL; // ivar: _alternateHLSKeyServerURL
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL; // ivar: _alternateHLSPlaylistURL
@property (copy, nonatomic) NSString *assetPathExtension; // ivar: _assetPathExtension
@property (nonatomic) NSInteger assetProtectionType; // ivar: _assetProtectionType
@property (nonatomic) NSInteger assetQualityType; // ivar: _assetQualityType
@property (copy, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (nonatomic) NSInteger audioAssetType; // ivar: _audioAssetType
@property (nonatomic, getter=isDownloadedAsset) BOOL downloadedAsset; // ivar: _downloadedAsset
@property (readonly, nonatomic) BOOL hasValidAsset;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // ivar: _iTunesStoreStream
@property (nonatomic) BOOL isCloudStreamingAsset; // ivar: _isCloudStreamingAsset
@property (nonatomic) BOOL isHLSAsset; // ivar: _isHLSAsset
@property (nonatomic) BOOL isHomeSharingAsset; // ivar: _isHomeSharingAsset
@property (copy, nonatomic) NSString *keyServerProtocolType; // ivar: _keyServerProtocolType
@property (nonatomic) BOOL onlineSubscriptionKeysRequired; // ivar: _onlineSubscriptionKeysRequired
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL; // ivar: _protectedContentSupportStorageFileURL
@property (copy, nonatomic) NSDictionary *purchaseBundleDictionary; // ivar: _purchaseBundleDictionary
@property (nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) NSNumber *streamingKeyAdamID; // ivar: _streamingKeyAdamID
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL; // ivar: _streamingKeyCertificateURL
@property (copy, nonatomic) NSURL *streamingKeyServerURL; // ivar: _streamingKeyServerURL
@property (retain, nonatomic) id *suzeLeaseID; // ivar: _suzeLeaseID
@property (copy, nonatomic) id *willBecomeActivePlayerItemHandler; // ivar: _willBecomeActivePlayerItemHandler


+(id)assetLoadResultWithStoreAssetPlaybackResponse:(id)arg0 assetLoadProperties:(id)arg1 source:(NSInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)descriptionDictionary;


@end


#endif