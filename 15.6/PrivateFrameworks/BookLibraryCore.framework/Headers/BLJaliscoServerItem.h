// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLJALISCOSERVERITEM_H
#define BLJALISCOSERVERITEM_H

@class NSManagedObject, NSDictionary, NSString, NSSet, NSNumber, NSDate;


#import "BLJaliscoServerDatabase.h"

@interface BLJaliscoServerItem : NSManagedObject

@property (retain, nonatomic) NSDictionary *additionalAudiobookInfo;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *artworkTokenCode;
@property (retain, nonatomic) NSString *artworkURLString;
@property (retain, nonatomic) NSSet *booklets;
@property (retain, nonatomic) NSString *chapterMetadataURLString;
@property (retain, nonatomic) NSString *cloudID;
@property (retain, nonatomic) NSNumber *containsAudio;
@property (retain, nonatomic) BLJaliscoServerDatabase *database;
@property (retain, nonatomic) NSString *displayVersion;
@property (retain, nonatomic) NSDate *expectedDate;
@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *hlsPlaylistURLString;
@property (retain, nonatomic) NSNumber *isAudiobook;
@property (retain, nonatomic) NSNumber *isDisabled;
@property (retain, nonatomic) NSNumber *isExplicit;
@property (retain, nonatomic) NSNumber *isHidden;
@property (retain, nonatomic) NSNumber *isPictureBook;
@property (retain, nonatomic) NSNumber *isReadAloud;
@property (retain, nonatomic) NSNumber *needsImport;
@property (retain, nonatomic) NSNumber *purchaseHistoryID;
@property (retain, nonatomic) NSDate *purchasedAt;
@property (retain, nonatomic) NSString *purchasedTokenCode;
@property (retain, nonatomic) NSString *sortedAuthor;
@property (retain, nonatomic) NSString *sortedTitle;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (retain, nonatomic) NSString *storeDownloadParameters;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *title;


-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif