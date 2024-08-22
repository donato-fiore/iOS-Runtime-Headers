// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELFORYOURECOMMENDATIONITEM_H
#define MPMODELFORYOURECOMMENDATIONITEM_H

@class NSString, NSURL;


#import "MPModelObject.h"
#import "MPModelAlbum.h"
#import "MPModelForYouRecommendationGroup.h"
#import "MPModelPlaylist.h"
#import "MPModelRadioStation.h"

@interface MPModelForYouRecommendationItem : MPModelObject

@property (retain, nonatomic) MPModelAlbum *album;
@property (nonatomic, getter=isBackedByStoreItemMetadata) BOOL backedByStoreItemMetadata;
@property (nonatomic) NSUInteger itemType;
@property (weak, nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) MPModelForYouRecommendationGroup *subgroup;
@property (nonatomic) NSInteger subgroupIndex;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *utterance;


+(id)__backedByStoreItemMetadata_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;


@end


#endif