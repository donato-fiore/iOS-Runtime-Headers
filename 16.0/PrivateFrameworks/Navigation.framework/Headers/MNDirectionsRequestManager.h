// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNDIRECTIONSREQUESTMANAGER_H
#define MNDIRECTIONSREQUESTMANAGER_H

@class NSMutableDictionary, geo_isolater, GEODirectionsService;

#import <Foundation/Foundation.h>


@interface MNDirectionsRequestManager : NSObject {
    NSMutableDictionary *_pendingRequests;
    geo_isolater *_pendingRequestsIsolater;
    GEODirectionsService *_directionsService;
}




-(id)init;
-(void)_logRoutes:(id)arg0 error:(id)arg1 ;
-(void)_requestDirectionsFromTraceWithPath:(id)arg0 feedback:(id)arg1 auditToken:(id)arg2 finishedHandler:(id)arg3 ;
-(void)_requestServerDirections:(id)arg0 preferredRoute:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(id)arg4 ;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg0 ;
-(void)requestDirections:(id)arg0 withIdentifier:(id)arg1 auditToken:(id)arg2 finishedHandler:(id)arg3 ;


@end


#endif