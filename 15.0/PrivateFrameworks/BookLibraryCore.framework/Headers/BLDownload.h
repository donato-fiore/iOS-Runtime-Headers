// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLDOWNLOAD_H
#define BLDOWNLOAD_H

@class NSNumber, NSString, NSData, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BLDownload : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (copy, nonatomic) NSString *buyParameters; // ivar: _buyParameters
@property (copy, nonatomic) NSString *cancelDownloadURL; // ivar: _cancelDownloadURL
@property (retain, nonatomic) NSNumber *cleanupPending; // ivar: _cleanupPending
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *collectionArtistName; // ivar: _collectionArtistName
@property (copy, nonatomic) NSString *collectionTitle; // ivar: _collectionTitle
@property (copy, nonatomic) NSString *downloadID; // ivar: _downloadID
@property (copy, nonatomic) NSString *downloadKey; // ivar: _downloadKey
@property (copy, nonatomic) NSData *dpInfo; // ivar: _dpInfo
@property (copy, nonatomic) NSString *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSNumber *familyAccountID; // ivar: _familyAccountID
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (copy, nonatomic) NSString *hashType; // ivar: _hashType
@property (retain, nonatomic) NSNumber *isAutomaticDownload; // ivar: _isAutomaticDownload
@property (retain, nonatomic) NSNumber *isLocalCacheServer; // ivar: _isLocalCacheServer
@property (retain, nonatomic) NSNumber *isPurchase; // ivar: _isPurchase
@property (retain, nonatomic) NSNumber *isRestore; // ivar: _isRestore
@property (retain, nonatomic) NSNumber *isSample; // ivar: _isSample
@property (retain, nonatomic) NSNumber *isZipStreamable; // ivar: _isZipStreamable
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSDate *lastStateChangeTime; // ivar: _lastStateChangeTime
@property (copy, nonatomic) NSString *md5HashStrings; // ivar: _md5HashStrings
@property (nonatomic) NSInteger numberOfBytesToHash; // ivar: _numberOfBytesToHash
@property (copy, nonatomic) NSString *originalURL; // ivar: _originalURL
@property (copy, nonatomic) NSString *permlink; // ivar: _permlink
@property (retain, nonatomic) NSNumber *persistentIdentifier; // ivar: _persistentIdentifier
@property (retain, nonatomic) NSNumber *publicationVersion; // ivar: _publicationVersion
@property (retain, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (copy, nonatomic) NSString *salt; // ivar: _salt
@property (retain, nonatomic) NSNumber *serverNumberOfBytesToHash; // ivar: _serverNumberOfBytesToHash
@property (copy, nonatomic) NSData *sinfData; // ivar: _sinfData
@property (copy, nonatomic) NSDate *startTime; // ivar: _startTime
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier
@property (retain, nonatomic) NSNumber *storePlaylistIdentifier; // ivar: _storePlaylistIdentifier
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *targetDownloadDirectory; // ivar: _targetDownloadDirectory
@property (copy, nonatomic) NSString *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (copy, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(CGFloat)transferProgressFraction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif