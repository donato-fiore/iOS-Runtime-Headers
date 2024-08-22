// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCNEWGOOGLEMAPSLINK_H
#define DCNEWGOOGLEMAPSLINK_H

@class NSURL, NSString, NSArray;


#import "DCMapsLink.h"

@interface DCNewGoogleMapsLink : DCMapsLink {
    BOOL _showsTransit;
    BOOL _showsBicycling;
    BOOL _showsStreetView;
    BOOL _showsTraffic;
    NSUInteger _mapType;
    NSUInteger _directionsMode;
    NSInteger _zoomLevel;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) int linkType; // ivar: _linkType
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSArray *mapsURLComponents; // ivar: _mapsURLComponents
@property (readonly, nonatomic) BOOL parsed; // ivar: _parsed


+(BOOL)isMapsURL:(id)arg0 ;
+(id)mapsLinkWithURL:(id)arg0 ;
-(BOOL)showsBicycling;
-(BOOL)showsStreetView;
-(BOOL)showsTraffic;
-(BOOL)showsTransit;
-(NSInteger)zoomLevel;
-(NSUInteger)directionsMode;
-(NSUInteger)mapType;
-(id)centerLocation;
-(id)dataString;
-(id)destinationAddress;
-(id)initWithURL:(id)arg0 ;
-(id)latLonZoomString;
-(id)mapsURLComponentAtIndex:(NSInteger)arg0 ;
-(id)searchLocation;
-(id)searchNearQuery;
-(id)searchQuery;
-(id)startAddress;
-(id)streetViewLocation;
-(void)parse;
-(void)parseLatLonZoom;
-(void)parseLinkType;
-(void)parseMapsData;


@end


#endif