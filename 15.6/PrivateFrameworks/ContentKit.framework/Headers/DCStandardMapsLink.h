// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCSTANDARDMAPSLINK_H
#define DCSTANDARDMAPSLINK_H

@class NSURL, NSDictionary;


#import "DCMapsLink.h"

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDictionary *queryDictionary; // ivar: _queryDictionary


+(BOOL)isMapsURL:(id)arg0 ;
+(BOOL)isStandardAppleMapsURL:(id)arg0 ;
+(BOOL)isStandardGoogleMapsURL:(id)arg0 ;
+(id)mapsLinkWithURL:(id)arg0 ;
-(BOOL)showsBicycling;
-(BOOL)showsStreetView;
-(BOOL)showsTraffic;
-(BOOL)showsTransit;
-(NSInteger)zoomLevel;
-(NSUInteger)directionsMode;
-(NSUInteger)mapType;
-(id)centerLocation;
-(id)destinationAddress;
-(id)initWithURL:(id)arg0 ;
-(id)searchLocation;
-(id)searchNearQuery;
-(id)searchQuery;
-(id)startAddress;
-(id)streetViewLocation;


@end


#endif