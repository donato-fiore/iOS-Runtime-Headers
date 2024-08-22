// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPURLPARSER_H
#define GEOMAPURLPARSER_H

@class NSURL, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOURLCollectionStorage.h"
#import "GEOURLExtraStorage.h"
#import "GEOMuninViewState.h"
#import "GEOUserSessionEntity.h"

@interface GEOMapURLParser : NSObject {
    NSURL *_url;
}


@property (readonly, nonatomic) NSString *abAddressID; // ivar: _abAddressID
@property (readonly, nonatomic) NSString *abRecordID; // ivar: _abRecordID
@property (readonly, nonatomic) NSString *addressString; // ivar: _addressString
@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) ? centerCoordinate; // ivar: _centerCoordinate
@property (readonly, nonatomic) NSString *cnAddressIdentifier; // ivar: _cnAddressIdentifier
@property (readonly, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (readonly, nonatomic) GEOURLCollectionStorage *collectionStorage; // ivar: _collectionStorage
@property (readonly, nonatomic) NSString *contentProvider; // ivar: _contentProvider
@property (readonly, nonatomic) NSString *contentProviderID; // ivar: _contentProviderID
@property (readonly, nonatomic) NSUInteger curatedCollectionMUID; // ivar: _curatedCollectionMUID
@property (readonly, nonatomic) NSString *directionsDestinationAddressString;
@property (readonly, nonatomic) NSArray *directionsDestinationAddressStrings; // ivar: _directionsDestinationAddressStrings
@property (readonly, nonatomic) NSString *directionsSourceAddressString; // ivar: _directionsSourceAddressString
@property (readonly, nonatomic) BOOL exactPositionSpecified; // ivar: _exactPositionSpecified
@property (readonly, nonatomic) GEOURLExtraStorage *extraStorage; // ivar: _extraStorage
@property (readonly, nonatomic) NSInteger favoritesType; // ivar: _favoritesType
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger lineMUID; // ivar: _lineMUID
@property (readonly, copy, nonatomic) NSString *lineName; // ivar: _lineName
@property (readonly, nonatomic) int mapType; // ivar: _mapType
@property (readonly, nonatomic) GEOMuninViewState *muninViewState; // ivar: _muninViewState
@property (readonly, nonatomic) NSUInteger publisherMUID; // ivar: _publisherMUID
@property (readonly, nonatomic) CGFloat roll; // ivar: _roll
@property (readonly, nonatomic) CGFloat rotation; // ivar: _rotation
@property (readonly, nonatomic) ? searchCoordinate; // ivar: _searchCoordinate
@property (readonly, nonatomic) int searchProviderID; // ivar: _searchProviderID
@property (readonly, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (readonly, nonatomic) ? searchRegion; // ivar: _searchRegion
@property (readonly, nonatomic) NSUInteger searchUID; // ivar: _searchUID
@property (readonly, nonatomic) BOOL showAllCuratedCollections; // ivar: _showAllCuratedCollections
@property (readonly, nonatomic) BOOL showCarDestinations; // ivar: _showCarDestinations
@property (readonly, nonatomic) ? span; // ivar: _span
@property (readonly, nonatomic) BOOL tester; // ivar: _tester
@property (readonly, nonatomic) CGFloat tilt; // ivar: _tilt
@property (readonly, nonatomic) int trackingMode; // ivar: _trackingMode
@property (readonly, nonatomic) BOOL trackingModeSpecified; // ivar: _trackingModeSpecified
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) GEOUserSessionEntity *userSessionEntity; // ivar: _userSessionEntity
@property (readonly, nonatomic) float zoomLevel; // ivar: _zoomLevel


+(BOOL)isValidMapURL:(id)arg0 ;
+(BOOL)isValidMapsCategoryURL:(id)arg0 ;
+(BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg0 ;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)restoreCodableOfClass:(Class)arg0 queryItem:(id)arg1 key:(id)arg2 compressedKey:(id)arg3 ;


@end


#endif