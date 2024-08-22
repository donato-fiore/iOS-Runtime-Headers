// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKURLPARSER_H
#define _MKURLPARSER_H

@class GEOMapURLParser, NSString, GEOURLCollectionStorage, GEOURLExtraStorage, GEOMuninViewState, GEOUserSessionEntity;

#import <Foundation/Foundation.h>

#import "MKMapCamera.h"

@interface _MKURLParser : NSObject {
    GEOMapURLParser *parser;
}


@property (readonly, nonatomic) NSString *abAddressID;
@property (readonly, nonatomic) NSString *abRecordID;
@property (readonly) NSString *addressString;
@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (readonly, nonatomic) NSString *cnAddressIdentifier;
@property (readonly, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (readonly, nonatomic) NSString *contentProvider;
@property (readonly, nonatomic) NSString *contentProviderID;
@property (readonly, nonatomic) NSUInteger curatedCollectionMUID;
@property (readonly) NSString *directionsDestinationAddressString;
@property (readonly) NSString *directionsSourceAddressString;
@property (readonly, nonatomic) BOOL exactPositionSpecified;
@property (readonly, nonatomic) GEOURLExtraStorage *extraStorage;
@property (readonly, nonatomic) NSInteger favoritesType;
@property (readonly) NSString *label;
@property (readonly, nonatomic) NSUInteger lineMUID;
@property (readonly, copy) NSString *lineName;
@property (readonly, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) NSUInteger mapType;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) NSUInteger publisherMUID;
@property (readonly, nonatomic) CGFloat roll;
@property (readonly, nonatomic) CGFloat rotation;
@property (readonly, nonatomic) CLLocationCoordinate2D searchCoordinate;
@property (readonly, nonatomic) int searchProviderID;
@property (readonly) NSString *searchQuery;
@property (readonly, nonatomic) ? searchRegion;
@property (readonly, nonatomic) NSUInteger searchUID;
@property (readonly) BOOL showAllCuratedCollections;
@property (readonly) BOOL showCarDestinations;
@property (readonly, nonatomic) ? span;
@property (readonly, nonatomic) BOOL tester;
@property (readonly, nonatomic) CGFloat tilt;
@property (readonly, nonatomic) NSInteger trackingMode;
@property (readonly, nonatomic) BOOL trackingModeSpecified;
@property (readonly, nonatomic) NSUInteger transportType;
@property (readonly) GEOUserSessionEntity *userSessionEntity;
@property (readonly, nonatomic) float zoomLevel;


+(BOOL)isAppleMapsGuidesURL:(id)arg0 ;
+(BOOL)isValidMapURL:(id)arg0 ;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif