// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPSERVICEGEOIPLOOKUPTICKET_H
#define _GEOMAPSERVICEGEOIPLOOKUPTICKET_H

@class NSString;
@protocol GEOMapServiceGeoIpLookupTicket;


#import "GEOAbstractTicket.h"
#import "GEOPDPlaceRequest.h"

@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket <GEOMapServiceGeoIpLookupTicket>

 {
    GEOPDPlaceRequest *_placeRequest;
    id *_requestToken;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIpAddress:(id)arg0 ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2 handlerQueue:(id)arg3  ;


@end


#endif