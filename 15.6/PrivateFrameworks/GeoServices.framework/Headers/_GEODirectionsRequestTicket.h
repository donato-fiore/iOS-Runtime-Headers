// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEODIRECTIONSREQUESTTICKET_H
#define _GEODIRECTIONSREQUESTTICKET_H

@class NSError, NSDictionary, NSString, NSNumber, NSArray;
@protocol GEODirectionServiceTicket;

#import <Foundation/Foundation.h>

#import "_GEODirectionsServiceRequestBuilder.h"
#import "GEODirectionsRequest.h"
#import "GEODirectionsRequester.h"
#import "GEOComposedRoute.h"

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket>

 {
    _GEODirectionsServiceRequestBuilder *_requestBuilder;
    GEODirectionsRequest *_request;
    NSError *_previousError;
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) GEODirectionsRequester *directionsRequester; // ivar: _directionsRequester
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDoom; // ivar: _isDoom
@property (nonatomic) BOOL isReroute; // ivar: _isReroute
@property (retain, nonatomic) GEOComposedRoute *originalRoute; // ivar: _originalRoute
@property (copy, nonatomic) id *requestCallback; // ivar: _requestCallback
@property (copy, nonatomic) NSNumber *requestPriority; // ivar: _requestPriority
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints


-(id)initWithRequestBuilder:(id)arg0 directionsRequester:(id)arg1 ;
// -(void)_submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;


@end


#endif