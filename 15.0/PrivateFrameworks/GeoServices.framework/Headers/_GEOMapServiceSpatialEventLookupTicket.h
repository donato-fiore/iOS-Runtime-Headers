// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOMAPSERVICESPATIALEVENTLOOKUPTICKET_H
#define _GEOMAPSERVICESPATIALEVENTLOOKUPTICKET_H

@class GEOPlaceRequestTicket, NSString, NSArray;
@protocol GEOMapServiceSpatialEventLookupTicket;


#import "GEOMapServiceTraits.h"

@interface _GEOMapServiceSpatialEventLookupTicket : GEOPlaceRequestTicket <GEOMapServiceSpatialEventLookupTicket>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


+(NSUInteger)maxParametersCount;
-(id)eventsForEventLookupResponses:(id)arg0 usingIdentifierToEventMap:(id)arg1 ;
-(id)initWithRequest:(id)arg0 parameters:(id)arg1 traits:(id)arg2 ;
-(id)mapItemIdentifiersToPOIEventsMapForPlaces:(id)arg0 ;
-(id)spatialEventLookupResultsFromResponse:(id)arg0 ;
// -(void)callCompletion:(id)arg0 onQueue:(unk)arg1 withResult:(id)arg2 error:(id)arg3  ;
// -(void)createSpatialEventLookupResultForLookupResults:(id)arg0 usingPlaces:(id)arg1 completion:(id)arg2 queue:(unk)arg3  ;
// -(void)handleResponse:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 queue:(unk)arg3  ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 queue:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif