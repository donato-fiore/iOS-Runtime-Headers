// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOMAPSERVICEWIFIQUALITYLOOKUPTICKET_H
#define _GEOMAPSERVICEWIFIQUALITYLOOKUPTICKET_H

@class NSString;
@protocol GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket;


#import "GEOAbstractTicket.h"
#import "GEOWiFiQualityServiceRequest.h"

@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket>

 {
    GEOWiFiQualityServiceRequest *_request;
    NSString *_tileKey;
    NSString *_eTag;
    NSString *_requestID;
}


@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 requestId:(id)arg1 ;
-(id)initWithRequestID:(id)arg0 ;
-(id)initWithTileKey:(id)arg0 eTag:(id)arg1 requestId:(id)arg2 ;
-(void)_cancel;
-(void)cancelLocationSearch;
-(void)cancelNetworkSearch;
-(void)cancelTileLoad;
-(void)submitLocationSearchWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)submitNetworkSearchWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)submitTileLoadWithCompletionQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif