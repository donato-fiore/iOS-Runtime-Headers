// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELTVSEASON_H
#define MPMODELTVSEASON_H

@class NSString, NSDate;


#import "MPModelObject.h"
#import "MPModelTVEpisode.h"
#import "MPModelTVShow.h"

@interface MPModelTVSeason : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (nonatomic) NSInteger episodesCount;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic) NSInteger number;
@property (retain, nonatomic) MPModelTVEpisode *representativeEpisode;
@property (retain, nonatomic) MPModelTVShow *show;
@property (nonatomic) NSInteger sortType;
@property (nonatomic) NSInteger year;


+(BOOL)supportsLibraryAddStatusObservation;
+(NSInteger)genericObjectType;
+(id)__libraryAddEligible_KEY;
+(id)__libraryAdded_KEY;
+(id)kindWithEpisodeKind:(id)arg0 ;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredStoreLibraryPersonalizationProperties;
-(id)artworkCatalog;
-(id)humanDescription;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(struct MPLibraryAddStatusObserverConfiguration )libraryAddStatusObserverConfiguration;


@end


#endif