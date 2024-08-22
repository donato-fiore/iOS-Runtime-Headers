// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCMUTABLEMAPSLINK_H
#define DCMUTABLEMAPSLINK_H

@class NSString;


#import "DCMapsLink.h"

@interface DCMutableMapsLink : DCMapsLink

@property (copy, nonatomic) NSString *centerLocation; // ivar: _centerLocation
@property (copy, nonatomic) NSString *destinationAddress; // ivar: _destinationAddress
@property (nonatomic) NSUInteger directionsMode; // ivar: _directionsMode
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (copy, nonatomic) NSString *searchLocation; // ivar: _searchLocation
@property (copy, nonatomic) NSString *searchNearQuery; // ivar: _searchNearQuery
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (nonatomic) BOOL showsBicycling; // ivar: _showsBicycling
@property (nonatomic) BOOL showsStreetView; // ivar: _showsStreetView
@property (nonatomic) BOOL showsTraffic; // ivar: _showsTraffic
@property (nonatomic) BOOL showsTransit; // ivar: _showsTransit
@property (copy, nonatomic) NSString *startAddress; // ivar: _startAddress
@property (copy, nonatomic) NSString *streetViewLocation; // ivar: _streetViewLocation
@property (nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel




@end


#endif