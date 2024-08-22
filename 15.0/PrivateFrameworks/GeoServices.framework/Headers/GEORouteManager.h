// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEMANAGER_H
#define GEOROUTEMANAGER_H

@protocol GEORouteManagerDelegate;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"

@interface GEORouteManager : NSObject

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (weak, nonatomic) NSObject<GEORouteManagerDelegate> *delegate; // ivar: _delegate


+(void)setShouldRequestServerLatencyInfo:(BOOL)arg0 ;
-(id)refineErrorFromServerError:(id)arg0 directionsError:(id)arg1 ;
-(void)didReceiveRoutes:(id)arg0 ;
// -(void)fetchDirectionsForTicket:(id)arg0 networkActivity:(id)arg1 completionHandler:(unk)arg2  ;
-(void)handleError:(id)arg0 directionsError:(id)arg1 forTicket:(id)arg2 ;
-(void)handleResponse:(id)arg0 fromRequest:(id)arg1 forTicket:(id)arg2 ;


@end


#endif