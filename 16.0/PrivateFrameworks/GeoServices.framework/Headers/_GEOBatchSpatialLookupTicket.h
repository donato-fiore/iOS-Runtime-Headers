// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOBATCHSPATIALLOOKUPTICKET_H
#define _GEOBATCHSPATIALLOOKUPTICKET_H

@class NSArray, NSMapTable, NSString;
@protocol GEOMapServiceBatchSpatialLookupTicket;


#import "GEOAbstractTicket.h"
#import "GEOSpatialLookupBatchRequest.h"
#import "GEOSpatialLookupBatchResponse.h"
#import "GEOMapServiceTraits.h"

@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket <GEOMapServiceBatchSpatialLookupTicket>

 {
    GEOSpatialLookupBatchRequest *_request;
    GEOSpatialLookupBatchResponse *_response;
    NSArray *_parameters;
    NSMapTable *_parametersToMapItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithRequest:(id)arg0 forParameters:(id)arg1 traits:(id)arg2 ;
-(id)mapItemsForParameters:(id)arg0 ;
-(struct ? )dataRequestKind;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2 queue:(id)arg3  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1 queue:(id)arg2  ;


@end


#endif