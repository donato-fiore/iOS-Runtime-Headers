// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELTVEPISODE_H
#define MPMODELTVEPISODE_H

@class NSString, NSDate;


#import "MPModelObject.h"
#import "MPModelFileAsset.h"
#import "MPModelPlaybackPosition.h"
#import "MPModelTVSeason.h"
#import "MPModelTVShow.h"
#import "MPModelStoreAsset.h"

@interface MPModelTVEpisode : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (nonatomic) CGFloat duration;
@property (nonatomic) NSInteger episodeNumber;
@property (nonatomic) NSInteger episodeType;
@property (copy, nonatomic) NSString *episodeTypeDisplayName;
@property (nonatomic) NSInteger explicitRating;
@property (nonatomic) BOOL hasCloudSyncSource;
@property (nonatomic) NSInteger keepLocalEnableState;
@property (nonatomic) NSInteger keepLocalManagedStatus;
@property (readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (nonatomic, getter=isMusicShow) BOOL musicShow;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(NSInteger)genericObjectType;
+(id)__libraryAddEligible_KEY;
+(id)__libraryAdded_KEY;
+(id)__musicShow_KEY;
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