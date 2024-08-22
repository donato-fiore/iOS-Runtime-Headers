// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELGENERICAVITEMASSETLOADPROPERTIES_H
#define MPCMODELGENERICAVITEMASSETLOADPROPERTIES_H

@class NSString, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPIdentifierSet, MPModelStoreAsset;
@protocol MPCModelPlaybackAssetCacheProviding;

#import <Foundation/Foundation.h>


@interface MPCModelGenericAVItemAssetLoadProperties : NSObject

@property (nonatomic) NSUInteger accountID; // ivar: _accountID
@property (nonatomic) BOOL allowsHLSContent; // ivar: _allowsHLSContent
@property (retain, nonatomic) NSObject<MPCModelPlaybackAssetCacheProviding> *assetCacheProvider; // ivar: _assetCacheProvider
@property (copy, nonatomic) NSString *assetSourceStorefrontID; // ivar: _assetSourceStorefrontID
@property (nonatomic) NSUInteger delegatedAccountID; // ivar: _delegatedAccountID
@property (retain, nonatomic) MPModelFileAsset *fileAsset; // ivar: _fileAsset
@property (nonatomic, getter=isFollowUp) BOOL followUp; // ivar: _followUp
@property (retain, nonatomic) MPModelGenericObject *genericObject; // ivar: _genericObject
@property (retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // ivar: _homeSharingAsset
@property (copy, nonatomic) NSString *householdID; // ivar: _householdID
@property (retain, nonatomic) MPIdentifierSet *itemIdentifiers; // ivar: _itemIdentifiers
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (nonatomic) NSInteger preferredAudioAssetType; // ivar: _preferredAudioAssetType
@property (nonatomic) BOOL prefersHighQualityContent; // ivar: _prefersHighQualityContent
@property (nonatomic) BOOL prefersVideoContent; // ivar: _prefersVideoContent
@property (nonatomic, getter=isRadioPlayback) BOOL radioPlayback; // ivar: _radioPlayback
@property (retain, nonatomic) MPModelStoreAsset *storeAsset; // ivar: _storeAsset
@property (copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID




@end


#endif