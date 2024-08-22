// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPRIVATEMEDIAITEMVALUEDATA_H
#define _INPBPRIVATEMEDIAITEMVALUEDATA_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPrivateMediaItemValueData, NSSecureCoding, NSCopying;



@interface _INPBPrivateMediaItemValueData : PBCodable <_INPBPrivateMediaItemValueData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ampConfidenceLevel; // ivar: _ampConfidenceLevel
@property (nonatomic) float ampConfidenceScore; // ivar: _ampConfidenceScore
@property (copy, nonatomic) NSString *assetInfo; // ivar: _assetInfo
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmpConfidenceLevel;
@property (nonatomic) BOOL hasAmpConfidenceScore;
@property (readonly, nonatomic) BOOL hasAssetInfo;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasIsAvailable;
@property (nonatomic) BOOL hasIsHardBan;
@property (readonly, nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasProviderAppName;
@property (readonly, nonatomic) BOOL hasPunchoutURI;
@property (readonly, nonatomic) BOOL hasRecommendationId;
@property (nonatomic) BOOL hasRequiresSubscription;
@property (readonly, nonatomic) BOOL hasSharedUserIdFromPlayableMusicAccount;
@property (readonly, nonatomic) BOOL hasUniversalResourceLink;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, nonatomic) NSUInteger internalSignalsCount;
@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable
@property (nonatomic) BOOL isHardBan; // ivar: _isHardBan
@property (copy, nonatomic) NSArray *mediaSubItems; // ivar: _mediaSubItems
@property (readonly, nonatomic) NSUInteger mediaSubItemsCount;
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (copy, nonatomic) NSString *providerAppName; // ivar: _providerAppName
@property (copy, nonatomic) NSString *punchoutURI; // ivar: _punchoutURI
@property (copy, nonatomic) NSString *recommendationId; // ivar: _recommendationId
@property (nonatomic) BOOL requiresSubscription; // ivar: _requiresSubscription
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount; // ivar: _sharedUserIdFromPlayableMusicAccount
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalResourceLink; // ivar: _universalResourceLink


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)ampConfidenceLevelAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)internalSignalAtIndex:(NSUInteger)arg0 ;
-(id)mediaSubItemsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAmpConfidenceLevel:(id)arg0 ;
-(void)addInternalSignal:(id)arg0 ;
-(void)addMediaSubItems:(id)arg0 ;
-(void)clearInternalSignals;
-(void)clearMediaSubItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif