// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPSERVICESPATIALPLACELOOKUPTICKET_H
#define _GEOMAPSERVICESPATIALPLACELOOKUPTICKET_H

@class GEOPlaceRequestTicket, NSString, NSArray;
@protocol GEOMapServiceSpatialPlaceLookupTicket;


#import "GEOMapServiceTraits.h"

@interface _GEOMapServiceSpatialPlaceLookupTicket : GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


+(NSUInteger)maxParametersCount;
-(id)initWithRequest:(id)arg0 parameters:(id)arg1 traits:(id)arg2 ;
-(id)mapItemsForPlaceLookupResponses:(id)arg0 usingIdentifierToMapItemMap:(id)arg1 ;
-(id)spatialPlaceLookupResultsFromResponse:(id)arg0 ;
// -(void)callCompletion:(id)arg0 onQueue:(unk)arg1 withResult:(id)arg2 error:(id)arg3  ;
// -(void)createSpatialPlaceLookupResultForLookupResults:(id)arg0 mapItems:(id)arg1 completion:(id)arg2 queue:(unk)arg3  ;
// -(void)handleResponse:(id)arg0 completion:(id)arg1 queue:(unk)arg2  ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 queue:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif