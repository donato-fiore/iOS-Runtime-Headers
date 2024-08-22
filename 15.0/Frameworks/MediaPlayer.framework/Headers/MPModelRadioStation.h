// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELRADIOSTATION_H
#define MPMODELRADIOSTATION_H

@class NSString, NSDate, NSURL, NSArray;


#import "MPModelObject.h"
#import "MPRadioStationEvent.h"

@interface MPModelRadioStation : MPModelObject

@property (nonatomic) BOOL allowsItemLiking;
@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *attributionLabel;
@property (nonatomic, getter=isBeats1) BOOL beats1;
@property (readonly, nonatomic) MPRadioStationEvent *currentStationEvent;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSDate *endingAirDate;
@property (nonatomic) BOOL hasExplicitContent;
@property (nonatomic, getter=isLive) BOOL live;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (copy, nonatomic) NSString *providerBundleIdentifier;
@property (readonly, nonatomic) NSInteger providerID;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSURL *providerUniversalLink;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSDate *startingAirDate;
@property (copy, nonatomic) NSArray *stationEvents;
@property (copy, nonatomic) id *stationGlyphBlock;
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (nonatomic) NSInteger subtype;
@property (nonatomic) NSInteger type;
@property (readonly, nonatomic) MPRadioStationEvent *upcomingStationEvent;


+(NSInteger)genericObjectType;
+(id)__beats1_KEY;
+(id)__live_KEY;
+(id)__subscriptionRequired_KEY;
+(id)classesForSecureCoding;
-(id)artworkCatalog;
-(id)contentItemCollectionInfo;
-(id)humanDescription;
-(id)stationGlyph;


@end


#endif