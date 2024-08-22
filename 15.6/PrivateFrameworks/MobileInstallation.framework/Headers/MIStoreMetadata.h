// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MISTOREMETADATA_H
#define MISTOREMETADATA_H

@class NSNumber, NSString, NSArray, NSDictionary, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *DSPersonID; // ivar: _DSPersonID
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *assetToken; // ivar: _assetToken
@property (copy, nonatomic) NSString *betaBuildGroupID; // ivar: _betaBuildGroupID
@property (retain, nonatomic) NSNumber *betaExternalVersionIdentifier; // ivar: _betaExternalVersionIdentifier
@property (copy, nonatomic) NSString *bundleShortVersionString; // ivar: _bundleShortVersionString
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) BOOL deviceBasedVPP; // ivar: _deviceBasedVPP
@property (retain, nonatomic) NSNumber *downloaderID; // ivar: _downloaderID
@property (copy, nonatomic) NSString *enterpriseInstallURL; // ivar: _enterpriseInstallURL
@property (nonatomic, getter=isFactoryInstall) BOOL factoryInstall; // ivar: _factoryInstall
@property (retain, nonatomic) NSNumber *familyID; // ivar: _familyID
@property (nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // ivar: _gameCenterEnabled
@property (nonatomic) BOOL gameCenterEverEnabled; // ivar: _gameCenterEverEnabled
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) NSNumber *genreID; // ivar: _genreID
@property (nonatomic) BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property (retain, nonatomic) NSNumber *hasOrEverHasHadIAP; // ivar: _hasOrEverHasHadIAP
@property (copy, nonatomic) NSString *iAdAttribution; // ivar: _iAdAttribution
@property (copy, nonatomic) NSString *iAdConversionDate; // ivar: _iAdConversionDate
@property (copy, nonatomic) NSString *iAdImpressionDate; // ivar: _iAdImpressionDate
@property (retain, nonatomic) NSNumber *initialODRSize; // ivar: _initialODRSize
@property (nonatomic) BOOL isAutoDownload; // ivar: _isAutoDownload
@property (retain, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *itemName; // ivar: _itemName
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // ivar: _launchProhibited
@property (copy, nonatomic) NSString *md5; // ivar: _md5
@property (copy, nonatomic) NSDictionary *nameTranscriptions; // ivar: _nameTranscriptions
@property (copy, nonatomic) NSData *protectedMetadata; // ivar: _protectedMetadata
@property (copy, nonatomic) NSString *purchaseDate; // ivar: _purchaseDate
@property (nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload; // ivar: _purchasedRedownload
@property (retain, nonatomic) NSNumber *purchaserID; // ivar: _purchaserID
@property (copy, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (retain, nonatomic) NSNumber *ratingRank; // ivar: _ratingRank
@property (copy, nonatomic) NSString *redownloadParams; // ivar: _redownloadParams
@property (copy, nonatomic) NSString *referrerApp; // ivar: _referrerApp
@property (copy, nonatomic) NSString *referrerURL; // ivar: _referrerURL
@property (copy, nonatomic) NSString *releaseDate; // ivar: _releaseDate
@property (nonatomic) BOOL sideLoadedDeviceBasedVPP; // ivar: _sideLoadedDeviceBasedVPP
@property (copy, nonatomic) NSString *softwareVersionBundleID; // ivar: _softwareVersionBundleID
@property (retain, nonatomic) NSNumber *softwareVersionExternalIdentifier; // ivar: _softwareVersionExternalIdentifier
@property (copy, nonatomic) NSString *sourceApp; // ivar: _sourceApp
@property (copy, nonatomic) NSString *storeCohort; // ivar: _storeCohort
@property (retain, nonatomic) NSNumber *storefront; // ivar: _storefront
@property (copy, nonatomic) NSArray *subGenres; // ivar: _subGenres
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID


+(BOOL)supportsSecureCoding;
+(id)metadataFromDictionary:(id)arg0 ;
+(id)metadataFromPlistAtURL:(id)arg0 error:(*id)arg1 ;
+(id)metadataFromPlistData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif