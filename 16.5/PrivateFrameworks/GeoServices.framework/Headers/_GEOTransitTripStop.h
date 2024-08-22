// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOTRANSITTRIPSTOP_H
#define _GEOTRANSITTRIPSTOP_H

@class NSTimeZone, NSString, NSArray;
@protocol GEOTransitTripStop, GEOTransitDeparture;

#import <Foundation/Foundation.h>

#import "GEOLatLng.h"
#import "GEOStyleAttributes.h"

@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop>

 {
    NSTimeZone *_timeZone;
    NSUInteger _stationIdentifier;
    NSString *_transitName;
    NSArray *_labelItems;
    GEOLatLng *_location;
    GEOStyleAttributes *_styleAttributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<GEOTransitDeparture> *departure; // ivar: _departure
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) NSUInteger stationIdentifier;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone;


+(id)transitTripStopsForPlaceData:(id)arg0 ;
-(id)initWithTransitSnippet:(id)arg0 departureSequence:(id)arg1 ;


@end


#endif