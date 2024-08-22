// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKURLPARSER_H
#define _MKURLPARSER_H

@class GEOMapURLParser, NSString, GEOURLCollectionStorage, NSArray, GEOURLExtraStorage, GEOMuninViewState, GEOUserSessionEntity;

#import <Foundation/Foundation.h>

#import "MKMapCamera.h"

@interface _MKURLParser : NSObject {
    GEOMapURLParser *parser;
}


@property (readonly, nonatomic) NSString *abAddressID;
@property (readonly, nonatomic) NSString *abRecordID;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (readonly, nonatomic) NSString *cnAddressIdentifier;
@property (readonly, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (readonly, nonatomic) NSString *contentProvider;
@property (readonly, nonatomic) NSString *contentProviderID;
@property (readonly, nonatomic) NSUInteger curatedCollectionMUID;
@property (readonly, nonatomic) NSString *directionsDestinationAddressString;
@property (readonly, nonatomic) NSArray *directionsDestinationAddressStrings;
@property (readonly, nonatomic) NSString *directionsSourceAddressString;
@property (readonly, nonatomic) BOOL exactPositionSpecified;
@property (readonly, nonatomic) GEOURLExtraStorage *extraStorage;
@property (readonly, nonatomic) NSInteger favoritesType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger lineMUID;
@property (readonly, copy, nonatomic) NSString *lineName;
@property (readonly, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) NSUInteger mapType;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) NSUInteger publisherMUID;
@property (readonly, nonatomic) CGFloat roll;
@property (readonly, nonatomic) CGFloat rotation;
@property (readonly, nonatomic) CLLocationCoordinate2D searchCoordinate;
@property (readonly, nonatomic) int searchProviderID;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) ? searchRegion;
@property (readonly, nonatomic) NSUInteger searchUID;
@property (readonly, nonatomic) BOOL showAllCuratedCollections;
@property (readonly, nonatomic) BOOL showCarDestinations;
@property (readonly, nonatomic) ? span;
@property (readonly, nonatomic) BOOL tester;
@property (readonly, nonatomic) CGFloat tilt;
@property (readonly, nonatomic) NSInteger trackingMode;
@property (readonly, nonatomic) BOOL trackingModeSpecified;
@property (readonly, nonatomic) NSUInteger transportType;
@property (readonly, nonatomic) GEOUserSessionEntity *userSessionEntity;
@property (readonly, nonatomic) float zoomLevel;


+(BOOL)isAppleMapsGuidesURL:(id)arg0 ;
+(BOOL)isValidMapURL:(id)arg0 ;
+(id)transformMapsURLIfNecessary:(id)arg0 ;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif