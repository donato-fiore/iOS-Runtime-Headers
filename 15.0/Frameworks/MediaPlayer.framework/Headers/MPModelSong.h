// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSONG_H
#define MPMODELSONG_H

@class NSString, NSDate;


#import "MPModelObject.h"
#import "MPModelAlbum.h"
#import "MPModelArtist.h"
#import "MPModelComposer.h"
#import "MPGaplessInfo.h"
#import "MPModelGenre.h"
#import "MPModelHomeSharingAsset.h"
#import "MPModelFileAsset.h"
#import "MPModelLyrics.h"
#import "MPModelPlaybackPosition.h"
#import "MPModelStoreAsset.h"

@interface MPModelSong : MPModelObject

@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (nonatomic, getter=isArtistUploadedContent) BOOL artistUploadedContent;
@property (copy, nonatomic) id *artworkCatalogBlock;
@property (nonatomic) NSInteger beatsPerMinute;
@property (copy, nonatomic) NSString *classicalMovement;
@property (nonatomic) NSInteger classicalMovementCount;
@property (nonatomic) NSInteger classicalMovementNumber;
@property (copy, nonatomic) NSString *classicalWork;
@property (nonatomic) NSInteger cloudStatus;
@property (retain, nonatomic) MPModelComposer *composer;
@property (copy, nonatomic) NSString *copyrightText;
@property (nonatomic) NSInteger discNumber;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (nonatomic) CGFloat duration;
@property (nonatomic, getter=isExplicitSong) BOOL explicitSong;
@property (retain, nonatomic) MPGaplessInfo *gaplessInfo;
@property (retain, nonatomic) MPModelGenre *genre;
@property (copy, nonatomic) NSString *grouping;
@property (nonatomic) BOOL hasCloudSyncSource;
@property (nonatomic) BOOL hasVideo;
@property (retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic) NSInteger keepLocalEnableState;
@property (nonatomic) NSInteger keepLocalManagedStatus;
@property (readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelLyrics *lyrics;
@property (nonatomic) NSInteger playCount;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic) BOOL shouldShowComposer;
@property (nonatomic) NSInteger skipCount;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger trackCount;
@property (nonatomic) NSInteger trackNumber;
@property (nonatomic) NSUInteger traits;
@property (nonatomic) float userRating;
@property (nonatomic) float volumeAdjustment;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) NSInteger year;


+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(NSInteger)genericObjectType;
+(id)__explicitSong_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__libraryAdded_KEY;
+(id)kindWithVariants:(NSUInteger)arg0 ;
+(id)kindWithVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(id)requiredStoreLibraryPersonalizationProperties;
-(NSInteger)libraryRemovalSupportedOptions;
-(id)artworkCatalog;
-(id)humanDescription;
-(id)mediaItemPropertyValues;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(struct MPLibraryAddStatusObserverConfiguration )libraryAddStatusObserverConfiguration;


@end


#endif