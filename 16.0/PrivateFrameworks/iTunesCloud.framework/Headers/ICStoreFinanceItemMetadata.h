// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREFINANCEITEMMETADATA_H
#define ICSTOREFINANCEITEMMETADATA_H

@class NSString, NSNumber, NSDate, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICStoreFinanceItemMetadata : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *albumSortName;
@property (readonly, copy, nonatomic) NSNumber *artistID;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *artistSortName;
@property (readonly, copy, nonatomic) NSNumber *bitrate;
@property (readonly, copy, nonatomic) NSString *comments;
@property (readonly, copy, nonatomic) NSString *composerName;
@property (readonly, copy, nonatomic) NSString *composerSortName;
@property (readonly, copy, nonatomic) NSString *copyright;
@property (readonly, copy, nonatomic) NSDate *dateAdded;
@property (readonly, copy, nonatomic) NSNumber *discCount;
@property (readonly, copy, nonatomic) NSNumber *discNumber;
@property (readonly, copy, nonatomic) NSNumber *drmVersionNumber;
@property (readonly, copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, copy, nonatomic) NSString *genre;
@property (readonly, copy, nonatomic) NSNumber *genreID;
@property (readonly, copy, nonatomic) NSNumber *isCompilation;
@property (readonly, copy, nonatomic) NSNumber *isExplicit;
@property (readonly, copy, nonatomic) NSNumber *isGapless;
@property (readonly, copy, nonatomic) NSNumber *isMasteredForITunes;
@property (readonly, copy, nonatomic) NSNumber *itemAdamID;
@property (readonly, copy, nonatomic) NSNumber *itemCloudID;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *itemSortName;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (readonly, copy, nonatomic) NSString *playlistArtistName;
@property (readonly, copy, nonatomic) NSNumber *playlistID; // ivar: _playlistID
@property (readonly, copy, nonatomic) NSString *playlistName;
@property (readonly, copy, nonatomic) NSNumber *rank;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSNumber *sampleRate;
@property (readonly, copy, nonatomic) NSNumber *storefrontID;
@property (readonly, copy, nonatomic) NSNumber *trackCount;
@property (readonly, copy, nonatomic) NSNumber *trackNumber;
@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *versionRestrictions;
@property (readonly, copy, nonatomic) NSString *xid;
@property (readonly, copy, nonatomic) NSNumber *year;


-(id)albumID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetadataDictionary:(id)arg0 ;


@end


#endif