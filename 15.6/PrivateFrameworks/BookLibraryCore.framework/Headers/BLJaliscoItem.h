// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLJALISCOITEM_H
#define BLJALISCOITEM_H

@class NSDictionary, NSString, NSSet, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface BLJaliscoItem : NSObject

@property (retain, nonatomic) NSDictionary *additionalAudiobookInfo; // ivar: _additionalAudiobookInfo
@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) NSString *artworkTokenCode; // ivar: _artworkTokenCode
@property (copy, nonatomic) NSString *artworkURLString; // ivar: _artworkURLString
@property (retain, nonatomic) NSSet *booklets; // ivar: _booklets
@property (retain, nonatomic) NSString *chapterMetadataURLString; // ivar: _chapterMetadataURLString
@property (copy, nonatomic) NSString *cloudID; // ivar: _cloudID
@property (retain, nonatomic) NSNumber *containsAudio; // ivar: _containsAudio
@property (copy, nonatomic) NSString *displayVersion; // ivar: _displayVersion
@property (readonly, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSDate *expectedDate; // ivar: _expectedDate
@property (copy, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) NSString *hlsPlaylistURLString; // ivar: _hlsPlaylistURLString
@property (retain, nonatomic) NSNumber *isAudiobook; // ivar: _isAudiobook
@property (retain, nonatomic) NSNumber *isDisabled; // ivar: _isDisabled
@property (retain, nonatomic) NSNumber *isExplicit; // ivar: _isExplicit
@property (retain, nonatomic) NSNumber *isHidden; // ivar: _isHidden
@property (retain, nonatomic) NSNumber *isPictureBook; // ivar: _isPictureBook
@property (retain, nonatomic) NSNumber *isReadAloud; // ivar: _isReadAloud
@property (retain, nonatomic) NSNumber *needsImport; // ivar: _needsImport
@property (retain, nonatomic) NSNumber *purchaseHistoryID; // ivar: _purchaseHistoryID
@property (copy, nonatomic) NSDate *purchasedAt; // ivar: _purchasedAt
@property (copy, nonatomic) NSString *purchasedTokenCode; // ivar: _purchasedTokenCode
@property (copy, nonatomic) NSString *sortedAuthor; // ivar: _sortedAuthor
@property (copy, nonatomic) NSString *sortedTitle; // ivar: _sortedTitle
@property (retain, nonatomic) NSNumber *storeAccountID; // ivar: _storeAccountID
@property (copy, nonatomic) NSString *storeDownloadParameters; // ivar: _storeDownloadParameters
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)arrayWithServerItems:(id)arg0 ;
+(id)itemWithServerItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif