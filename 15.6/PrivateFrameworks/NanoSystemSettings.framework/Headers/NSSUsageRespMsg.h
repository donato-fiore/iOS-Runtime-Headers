// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSUSAGERESPMSG_H
#define NSSUSAGERESPMSG_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NSSUsageRespMsg : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *appBundleUsages; // ivar: _appBundleUsages
@property (retain, nonatomic) NSMutableArray *appUsages; // ivar: _appUsages
@property (nonatomic) NSUInteger audioCoursesUsage; // ivar: _audioCoursesUsage
@property (nonatomic) NSUInteger audioPodcastsUsage; // ivar: _audioPodcastsUsage
@property (nonatomic) NSUInteger audiobooksUsage; // ivar: _audiobooksUsage
@property (nonatomic) NSUInteger availableStorageInBytes; // ivar: _availableStorageInBytes
@property (retain, nonatomic) NSMutableArray *bundleUsages; // ivar: _bundleUsages
@property (nonatomic) NSUInteger cameralRollUsage; // ivar: _cameralRollUsage
@property (nonatomic) NSUInteger capacityInBytes; // ivar: _capacityInBytes
@property (retain, nonatomic) NSMutableArray *categories; // ivar: _categories
@property (nonatomic) BOOL hasAudioCoursesUsage;
@property (nonatomic) BOOL hasAudioPodcastsUsage;
@property (nonatomic) BOOL hasAudiobooksUsage;
@property (nonatomic) BOOL hasCameralRollUsage;
@property (nonatomic) BOOL hasCapacityInBytes;
@property (nonatomic) BOOL hasHomeVideosUsage;
@property (nonatomic) BOOL hasMovieRentalsUsage;
@property (nonatomic) BOOL hasMoviesUsage;
@property (readonly, nonatomic) BOOL hasMusicBundleIdentifier;
@property (nonatomic) BOOL hasMusicVideosUsage;
@property (nonatomic) BOOL hasPhotoLibraryUsage;
@property (nonatomic) BOOL hasPhotoStreamUsage;
@property (readonly, nonatomic) BOOL hasPhotosBundleIdentifier;
@property (readonly, nonatomic) BOOL hasPodcastsBundleIdentifier;
@property (nonatomic) BOOL hasSongsUsage;
@property (nonatomic) BOOL hasTvShowsUsage;
@property (nonatomic) BOOL hasVideoCoursesUsage;
@property (nonatomic) BOOL hasVideoPodcastsUsage;
@property (nonatomic) NSUInteger homeVideosUsage; // ivar: _homeVideosUsage
@property (nonatomic) NSUInteger movieRentalsUsage; // ivar: _movieRentalsUsage
@property (nonatomic) NSUInteger moviesUsage; // ivar: _moviesUsage
@property (retain, nonatomic) NSString *musicBundleIdentifier; // ivar: _musicBundleIdentifier
@property (nonatomic) NSUInteger musicVideosUsage; // ivar: _musicVideosUsage
@property (nonatomic) BOOL partiallyCharged; // ivar: _partiallyCharged
@property (nonatomic) NSUInteger photoLibraryUsage; // ivar: _photoLibraryUsage
@property (nonatomic) NSUInteger photoStreamUsage; // ivar: _photoStreamUsage
@property (retain, nonatomic) NSString *photosBundleIdentifier; // ivar: _photosBundleIdentifier
@property (retain, nonatomic) NSString *podcastsBundleIdentifier; // ivar: _podcastsBundleIdentifier
@property (nonatomic) NSUInteger songsUsage; // ivar: _songsUsage
@property (nonatomic) float standbyTimeInSeconds; // ivar: _standbyTimeInSeconds
@property (nonatomic) BOOL trusted; // ivar: _trusted
@property (nonatomic) NSUInteger tvShowsUsage; // ivar: _tvShowsUsage
@property (nonatomic) float usageTimeInSeconds; // ivar: _usageTimeInSeconds
@property (nonatomic) NSUInteger usedStorageInBytes; // ivar: _usedStorageInBytes
@property (nonatomic) NSUInteger videoCoursesUsage; // ivar: _videoCoursesUsage
@property (nonatomic) NSUInteger videoPodcastsUsage; // ivar: _videoPodcastsUsage


+(Class)appBundleUsageType;
+(Class)bundleUsageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appBundleUsageAtIndex:(NSUInteger)arg0 ;
-(id)appUsagesAtIndex:(NSUInteger)arg0 ;
-(id)bundleUsageAtIndex:(NSUInteger)arg0 ;
-(id)categoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAppBundleUsage:(id)arg0 ;
-(void)addAppUsages:(id)arg0 ;
-(void)addBundleUsage:(id)arg0 ;
-(void)addCategories:(id)arg0 ;
-(void)clearAppBundleUsages;
-(void)clearAppUsages;
-(void)clearBundleUsages;
-(void)clearCategories;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif