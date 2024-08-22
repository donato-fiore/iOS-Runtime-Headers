// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVIGATIONSERVERPEER_H
#define GEONAVIGATIONSERVERPEER_H

@class NSString;
@protocol GEONavigationServerRequestStateXPCInterface;


#import "GEONavdPeer.h"
#import "GEONavigationServer.h"

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GEONavigationServer *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEntitlement; // ivar: _hasEntitlement
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsRoutes; // ivar: _wantsRoutes


-(void)dealloc;
-(void)requestActiveRouteDetailsData;
-(void)requestGuidanceState;
-(void)requestNavigationVoiceVolume;
-(void)requestPositionFromDestination;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromSign;
-(void)requestRideSelections;
-(void)requestRoute;
-(void)requestRouteSummary;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestTransitSummary;
-(void)requestUpdates;


@end


#endif