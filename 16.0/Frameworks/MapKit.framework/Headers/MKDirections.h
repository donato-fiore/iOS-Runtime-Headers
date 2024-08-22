// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKDIRECTIONS_H
#define MKDIRECTIONS_H

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, GEORouteAttributes, NSError;
@protocol MKLocationManagerOperation, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MKDirectionsRequest.h"

@interface MKDirections : NSObject {
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id<MKLocationManagerOperation> *_locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
    GEORouteAttributes *_routeAttributes;
    NSError *_previousError;
}


@property (readonly, nonatomic, getter=isCalculating) BOOL calculating;


-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(void)_calculateDirectionsWithTraits:(id)arg0 completionHandler:(id)arg1 ;
-(void)_calculateETAWithTraits:(id)arg0 completionHandler:(id)arg1 ;
-(void)_cleanupLocationOperation;
-(void)_establishCurrentLocationAndThen:(id)arg0 ;
-(void)_issueDirectionsRequestForOrigin:(id)arg0 destination:(id)arg1 completionHandler:(id)arg2 ;
-(void)_issueETARequestForOrigin:(id)arg0 destination:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)arg0 traits:(id)arg1 handler:(id)arg2 ;
-(void)calculateDirectionsWithCompletionHandler:(id)arg0 ;
-(void)calculateETAWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif