// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOABSTRACTREQUESTRESPONSETICKET_H
#define GEOABSTRACTREQUESTRESPONSETICKET_H



#import "GEOAbstractTicket.h"
#import "GEOPDPlaceRequest.h"
#import "GEOPDPlaceResponse.h"

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {
    GEOPDPlaceRequest *_request;
    id *_requestToken;
    GEOPDPlaceResponse *_response;
}




-(id)initWithRequest:(id)arg0 traits:(id)arg1 ;
-(id)initWithTraits:(id)arg0 ;
-(struct ? )dataRequestKind;
-(void)cancel;
// -(void)performSubmitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(CGFloat)arg3  ;
// -(void)performSubmitWithHandler:(id)arg0 timeout:(unk)arg1 networkActivity:(CGFloat)arg2  ;


@end


#endif