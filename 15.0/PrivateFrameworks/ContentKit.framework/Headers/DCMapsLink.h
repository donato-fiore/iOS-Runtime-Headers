// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCMAPSLINK_H
#define DCMAPSLINK_H

@class NSString;
@protocol WFSerializableContent, WFNaming;

#import <Foundation/Foundation.h>


@interface DCMapsLink : NSObject <WFSerializableContent, WFNaming>



@property (readonly, nonatomic) BOOL canGetDirections;
@property (readonly, nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (readonly, nonatomic) NSString *centerLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *destinationAddress;
@property (readonly, nonatomic) NSUInteger directionsMode;
@property (readonly, nonatomic) NSUInteger directionsTransportType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mapType;
@property (readonly, nonatomic) NSString *mkDirectionsMode;
@property (readonly, nonatomic) NSUInteger mkMapType;
@property (readonly, nonatomic) NSString *searchLocation;
@property (readonly, nonatomic) NSString *searchNearQuery;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) BOOL showsBicycling;
@property (readonly, nonatomic) BOOL showsStreetView;
@property (readonly, nonatomic) BOOL showsTraffic;
@property (readonly, nonatomic) BOOL showsTransit;
@property (readonly, nonatomic) NSString *startAddress;
@property (readonly, nonatomic) NSString *streetViewLocation;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSInteger zoomLevel;


+(BOOL)isMapsURL:(id)arg0 ;
+(CGFloat)latitudeToPixelSpaceY:(CGFloat)arg0 ;
+(CGFloat)longitudeToPixelSpaceX:(CGFloat)arg0 ;
+(CGFloat)pixelSpaceXToLongitude:(CGFloat)arg0 ;
+(CGFloat)pixelSpaceYToLatitude:(CGFloat)arg0 ;
+(id)mapsLinkWithURL:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(struct ? )coordinateRegionForMapSize:(struct CGSize )arg0 centeredAtLocation:(struct CLLocationCoordinate2D )arg1 atZoomLevel:(NSInteger)arg2 ;
+(struct ? )coordinateSpanForMapSize:(struct CGSize )arg0 centeredAtLocation:(struct CLLocationCoordinate2D )arg1 atZoomLevel:(NSInteger)arg2 ;
+(void)createMapsLinkWithPlacemark:(id)arg0 location:(id)arg1 streetAddress:(id)arg2 shiftingLocationIfNecessary:(BOOL)arg3 completionHandler:(id)arg4 ;
+(void)processLocation:(id)arg0 shiftingIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)baiduMapsAppURL;
-(id)googleMapsAppURL;
-(id)mapsAppURL;
-(id)region;
-(id)regionCenteredAtLocation:(struct CLLocationCoordinate2D )arg0 ;
-(id)transitAppURL;
-(id)wazeAppURL;
-(id)wfSerializedRepresentation;
-(struct ? )coordinateRegionForMapSize:(struct CGSize )arg0 centeredAtLocation:(struct CLLocationCoordinate2D )arg1 ;
-(struct ? )coordinateSpanForMapSize:(struct CGSize )arg0 centeredAtLocation:(struct CLLocationCoordinate2D )arg1 ;
-(struct CLLocationCoordinate2D )locationCoordinateFromString:(id)arg0 ;
-(void)geocodeAddressString:(id)arg0 inRegionIfAvailable:(id)arg1 completionHandler:(id)arg2 ;
-(void)geocodeDirectionsEndpointsWithCompletionHandler:(id)arg0 ;
-(void)getAppleMapsDirectionsURL:(id)arg0 ;
-(void)getCitymapperAppURL:(id)arg0 ;
-(void)getDirectionsToPlacemark:(id)arg0 fromPlacemark:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)getDirectionsToPlacemark:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getDirectionsWithCompletionHandler:(id)arg0 ;


@end


#endif