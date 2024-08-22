// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOLEGACYBATCHREVERSEGEOCODETICKET_H
#define _GEOLEGACYBATCHREVERSEGEOCODETICKET_H



#import "GEOAbstractMapServiceTicket.h"
#import "GEOBatchRevGeocodeRequest.h"

@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    id *_locationShifter;
}




-(BOOL)isEqualForHistoryToTicket:(id)arg0 ;
-(id)description;
// -(id)initWithBatchReverseGeocodeRequest:(id)arg0 locationShifter:(id)arg1 traits:(unk)arg2  ;
// -(void)_batchReverseGeocodeWithRequest:(id)arg0 auditToken:(id)arg1 handler:(id)arg2 networkActivity:(unk)arg3  ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif