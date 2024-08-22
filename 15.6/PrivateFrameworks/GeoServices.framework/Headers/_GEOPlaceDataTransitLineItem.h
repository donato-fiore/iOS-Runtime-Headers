// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOPLACEDATATRANSITLINEITEM_H
#define _GEOPLACEDATATRANSITLINEITEM_H

@class NSString, NSArray;
@protocol GEOTransitLineItem, GEOTransitAttribution, GEOTransitLine, GEOMapItemTransitInfo, GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitSystem;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"
#import "GEOMapItemIdentifier.h"

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem>

 {
    id<GEOTransitAttribution> *_attribution;
    id<GEOTransitLine> *_line;
    id<GEOMapItemTransitInfo> *_transitInfo;
    GEOMapRegion *_mapRegion;
    BOOL _hasEncyclopedicInfo;
    id<GEOEncyclopedicInfo> *_encyclopedicInfo;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *alternateArtwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (readonly, nonatomic) NSObject<GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<GEOEncyclopedicInfo> *encyclopedicInfo;
@property (readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) BOOL hasIncidentComponent;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *headerArtwork;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *modeArtwork;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *system;


-(id)initWithMapItem:(id)arg0 ;


@end


#endif