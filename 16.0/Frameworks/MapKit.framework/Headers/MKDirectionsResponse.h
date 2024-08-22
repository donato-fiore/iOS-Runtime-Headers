// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKDIRECTIONSRESPONSE_H
#define MKDIRECTIONSRESPONSE_H

@class GEODirectionsResponse, NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKDirectionsResponse : NSObject {
    GEODirectionsResponse *_geoResponse;
}


@property (readonly, retain, nonatomic) GEODirectionsResponse *_geoResponse;
@property (readonly, retain, nonatomic) NSString *_incidentDescription;
@property (readonly, retain, nonatomic) NSURL *_mapsURL;
@property (readonly, nonatomic) MKMapItem *destination; // ivar: _destination
@property (readonly, nonatomic) NSArray *routes; // ivar: _routes
@property (readonly, nonatomic) MKMapItem *source; // ivar: _source


+(id)_responseWithGEODirectionsRouteResponse:(id)arg0 routeRequest:(id)arg1 request:(id)arg2 origin:(id)arg3 destination:(id)arg4 error:(*id)arg5 ;
-(id)_initWithGEORouteResponse:(id)arg0 routeRequest:(id)arg1 request:(id)arg2 origin:(id)arg3 destination:(id)arg4 ;


@end


#endif