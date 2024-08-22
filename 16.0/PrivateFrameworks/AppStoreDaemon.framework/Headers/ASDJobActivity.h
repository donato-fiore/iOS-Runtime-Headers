// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDJOBACTIVITY_H
#define ASDJOBACTIVITY_H

@class NSNumber, NSData, NSString, NSArray, NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding>

 {
    NSNumber *_persistentID;
}


@property (copy, nonatomic) NSData *appReceiptData; // ivar: _appReceiptData
@property (copy, nonatomic) NSNumber *artistID; // ivar: _artistID
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (copy, nonatomic) NSNumber *betaExternalVersionIdentifier; // ivar: _betaExternalVersionIdentifier
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (copy, nonatomic) NSString *cancelDownloadURL; // ivar: _cancelDownloadURL
@property (nonatomic) BOOL cancelIfDuplicate; // ivar: _cancelIfDuplicate
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (copy, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (copy, nonatomic) NSNumber *divertedTrackingID; // ivar: _divertedTrackingID
@property (copy, nonatomic) NSNumber *enableExtensions; // ivar: _enableExtensions
@property (nonatomic) BOOL explicitContent; // ivar: _explicitContent
@property (copy, nonatomic) NSNumber *externalOrderKey; // ivar: _externalOrderKey
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (copy, nonatomic) NSNumber *genreID; // ivar: _genreID
@property (nonatomic) BOOL hasMessagesExtension; // ivar: _hasMessagesExtension
@property (nonatomic) BOOL hasWatchApp; // ivar: _hasWatchApp
@property (copy, nonatomic) NSNumber *iAdAttribution; // ivar: _iAdAttribution
@property (copy, nonatomic) NSDate *iAdConversionDate; // ivar: _iAdConversionDate
@property (copy, nonatomic) NSDate *iAdImpressionDate; // ivar: _iAdImpressionDate
@property (nonatomic) BOOL isAutomatic; // ivar: _isAutomatic
@property (nonatomic) BOOL isCompatibilityUpdate; // ivar: _isCompatibilityUpdate
@property (nonatomic) BOOL isDeviceBasedVPP; // ivar: _isDeviceBasedVPP
@property (nonatomic) BOOL isFromStore; // ivar: _isFromStore
@property (nonatomic) BOOL isGameCenterEnabled; // ivar: _isGameCenterEnabled
@property (nonatomic) BOOL isInQueue; // ivar: _isInQueue
@property (nonatomic) BOOL isPendingApproval; // ivar: _isPendingApproval
@property (nonatomic) BOOL isPurchasedRedownload; // ivar: _isPurchasedRedownload
@property (nonatomic) BOOL isRestore; // ivar: _isRestore
@property (nonatomic) BOOL isShared; // ivar: _isShared
@property (nonatomic) BOOL isTVTemplate; // ivar: _isTVTemplate
@property (nonatomic) BOOL isUpdate; // ivar: _isUpdate
@property (copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (nonatomic) BOOL launchProhibited; // ivar: _launchProhibited
@property (copy, nonatomic) NSString *messagesArtworkURL; // ivar: _messagesArtworkURL
@property (readonly, nonatomic) NSNumber *persistentID;
@property (copy, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (copy, nonatomic) NSNumber *purchaseID; // ivar: _purchaseID
@property (copy, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (copy, nonatomic) NSNumber *ratingRank; // ivar: _ratingRank
@property (copy, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (nonatomic) BOOL softwareIconNeedsShine; // ivar: _softwareIconNeedsShine
@property (copy, nonatomic) NSNumber *softwareVersionExternalIdentifier; // ivar: _softwareVersionExternalIdentifier
@property (copy, nonatomic) NSNumber *storeAccountID; // ivar: _storeAccountID
@property (copy, nonatomic) NSString *storeAccountName; // ivar: _storeAccountName
@property (copy, nonatomic) NSString *storeCohort; // ivar: _storeCohort
@property (copy, nonatomic) NSString *storeCorrelationKey; // ivar: _storeCorrelationKey
@property (copy, nonatomic) NSDictionary *storeDownloadInfo; // ivar: _storeDownloadInfo
@property (copy, nonatomic) NSString *storeDownloadKey; // ivar: _storeDownloadKey
@property (copy, nonatomic) NSString *storeTransactionID; // ivar: _storeTransactionID
@property (copy, nonatomic) NSString *storefront; // ivar: _storefront
@property (getter=is32BitOnly) BOOL thirtyTwoBitOnly; // ivar: _thirtyTwoBitOnly
@property (copy, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID


+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif