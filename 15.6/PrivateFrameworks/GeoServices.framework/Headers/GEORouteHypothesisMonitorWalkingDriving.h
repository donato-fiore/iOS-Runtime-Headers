// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESISMONITORWALKINGDRIVING_H
#define GEOROUTEHYPOTHESISMONITORWALKINGDRIVING_H



#import "GEORouteHypothesisMonitor.h"

@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor



-(BOOL)_checkForArrival:(id)arg0 routeMatch:(id)arg1 ;
-(void)_fetchETAWithRouteMatch:(id)arg0 ;
-(void)_recalculateETAWithRouteMatch:(id)arg0 ;
-(void)_sendETARequestWithRouteMatch:(id)arg0 updater:(id)arg1 ;
-(void)checkRouteForLocation:(id)arg0 ;


@end


#endif