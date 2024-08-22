// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOQUICKETAREQUESTER_H
#define GEOQUICKETAREQUESTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOQuickETARequest.h"
#import "GEOETARequest.h"
#import "GEODirectionsRequest.h"

@interface GEOQuickETARequester : NSObject {
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
}




// +(BOOL)requestETAFromOrigin:(id)arg0 toDestinations:(id)arg1 transportType:(int)arg2 timepoint:(struct GEOTimepoint )arg3 includeDistance:(BOOL)arg4 commonOptions:(id)arg5 automobileOptions:(id)arg6 walkingOptions:(id)arg7 transitOptions:(id)arg8 cyclingOptions:(id)arg9 auditToken:(id)arg10 handler:(id)arg11 callbackQueue:(unk)arg12  ;
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg0 toWaypoints:(id)arg1 transportType:(int)arg2 automobileOptions:(id)arg3 handler:(id)arg4 ;
-(id)initWithRequest:(id)arg0 ;
-(void)_calculateRoutingETAWithHandler:(id)arg0 ;
-(void)_calculateRoutingETAWithSummary:(BOOL)arg0 handler:(id)arg1 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg0 WithHandler:(id)arg1 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg0 includeSummary:(BOOL)arg1 WithHandler:(id)arg2 ;
-(void)calculateETAFromAPI:(BOOL)arg0 WithResponseHandler:(id)arg1 ;
-(void)calculateETAFromAPI:(BOOL)arg0 includeSummary:(BOOL)arg1 WithResponseHandler:(id)arg2 ;
-(void)calculateETAWithResponseHandler:(id)arg0 ;
-(void)cancel;


@end


#endif