// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLDOWNLOADSTATUS_H
#define BLDOWNLOADSTATUS_H

@class NSString, NSNumber, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLDownloadStatus : NSObject <NSCopying>



@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *assetKind; // ivar: _assetKind
@property (nonatomic) BOOL canPause; // ivar: _canPause
@property (copy, nonatomic) NSString *collectionArtistName; // ivar: _collectionArtistName
@property (copy, nonatomic) NSString *collectionTitle; // ivar: _collectionTitle
@property (copy, nonatomic) NSString *downloadID; // ivar: _downloadID
@property (nonatomic) NSInteger downloadPhase; // ivar: _downloadPhase
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (nonatomic) BOOL isAudiobook; // ivar: _isAudiobook
@property (nonatomic) BOOL isPurchase; // ivar: _isPurchase
@property (nonatomic) BOOL isRestore; // ivar: _isRestore
@property (nonatomic) BOOL isSample; // ivar: _isSample
@property (retain, nonatomic) NSNumber *percentComplete; // ivar: _percentComplete
@property (copy, nonatomic) NSString *permLink; // ivar: _permLink
@property (nonatomic) NSInteger persistentIdentifier; // ivar: _persistentIdentifier
@property (retain, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (retain, nonatomic) NSNumber *storeAccountIdentifier; // ivar: _storeAccountIdentifier
@property (retain, nonatomic) NSNumber *storeID; // ivar: _storeID
@property (retain, nonatomic) NSNumber *storePlaylistID; // ivar: _storePlaylistID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSNumber *transferBytesExpected; // ivar: _transferBytesExpected
@property (retain, nonatomic) NSNumber *transferBytesWritten; // ivar: _transferBytesWritten


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif