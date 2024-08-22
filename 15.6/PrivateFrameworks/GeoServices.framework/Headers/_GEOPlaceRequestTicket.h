// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOPLACEREQUESTTICKET_H
#define _GEOPLACEREQUESTTICKET_H

@protocol GEOMapItem;


#import "GEOAbstractMapServiceTicket.h"
#import "GEOPDPlaceRequest.h"
#import "GEOPDPlaceResponse.h"

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
    GEOPDPlaceRequest *_request;
    id *_requestToken;
    GEOPDPlaceResponse *_response;
    id<GEOMapItem> *_mapItemToRefine;
    id *_preSubmitUpdateRequestBlock;
    id *_retryRequestForErrorBlock;
}




-(id)description;
-(id)initWithRequest:(id)arg0 traits:(id)arg1 ;
-(id)initWithRequest:(id)arg0 traits:(id)arg1 mapItemToRefine:(id)arg2 ;
// -(id)initWithRequest:(id)arg0 traits:(id)arg1 mapItemToRefine:(id)arg2 preSubmitUpdateRequestBlock:(id)arg3 retryForErrorBlock:(unk)arg4  ;
// -(id)initWithRequest:(id)arg0 traits:(id)arg1 preSubmitUpdateRequestBlock:(id)arg2 retryForErrorBlock:(unk)arg3  ;
-(id)initWithTraits:(id)arg0 ;
-(id)resultSectionHeader;
-(struct ? )dataRequestKind;
// -(void)_processRequest:(id)arg0 auditToken:(id)arg1 timeout:(CGFloat)arg2 withHandler:(id)arg3 refinedHandler:(unk)arg4 networkActivity:(id)arg5  ;
-(void)applyToCorrectedSearch:(id)arg0 ;
-(void)applyToPlaceInfo:(id)arg0 ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;
// -(void)submitWithRefinedHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif