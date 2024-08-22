// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREPLATFORMMETADATA_H
#define ICSTOREPLATFORMMETADATA_H

@class NSString, NSArray, NSURL, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface ICStorePlatformMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSInteger artistStoreAdamID;
@property (readonly, copy, nonatomic) NSArray *artworkInfos;
@property (readonly, copy, nonatomic) NSArray *audioTraits;
@property (readonly, copy, nonatomic) NSURL *classicalURL;
@property (readonly, copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (readonly, copy, nonatomic) NSString *collectionName;
@property (readonly, nonatomic) NSInteger collectionStoreAdamID;
@property (readonly, copy, nonatomic) NSString *composerName;
@property (readonly, copy, nonatomic) NSString *copyrightText;
@property (readonly, nonatomic) NSInteger discNumber;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSInteger explicitRating;
@property (readonly, copy, nonatomic) NSArray *formerStoreAdamIDs;
@property (readonly, copy, nonatomic) NSArray *genreNames;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL hasTimeSyncedLyrics;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (readonly, nonatomic) NSInteger movementCount;
@property (readonly, copy, nonatomic) NSString *movementName;
@property (readonly, nonatomic) NSInteger movementNumber;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, copy, nonatomic) NSString *playlistGlobalID;
@property (readonly, copy, nonatomic) NSString *radioStationStringID;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) BOOL shouldShowComposer;
@property (readonly, nonatomic) NSInteger storeAdamID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger trackCount;
@property (readonly, nonatomic) NSInteger trackNumber;
@property (readonly, copy, nonatomic) NSString *workName;


+(id)storeServerCalendar;
-(id)_storePlatformReleaseDateFormatter;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(id)initWithMetadataDictionary:(id)arg0 expirationDate:(id)arg1 ;
-(id)offerWithType:(id)arg0 ;


@end


#endif