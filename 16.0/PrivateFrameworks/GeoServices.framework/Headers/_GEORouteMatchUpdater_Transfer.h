// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOROUTEMATCHUPDATER_TRANSFER_H
#define _GEOROUTEMATCHUPDATER_TRANSFER_H

@class GEORouteMatchUpdater;


#import "GEOPBTransitStation.h"
#import "GEOPBTransitStop.h"
#import "GEOComposedRouteStep.h"

@interface _GEORouteMatchUpdater_Transfer : GEORouteMatchUpdater {
    GEOPBTransitStation *_alightStation;
    GEOPBTransitStation *_boardStation;
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStop *_boardStop;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_transferStep;
    GEOComposedRouteStep *_boardStep;
}




-(BOOL)_isLocation:(id)arg0 nearStation:(id)arg1 ;
-(BOOL)_isLocation:(id)arg0 nearStop:(id)arg1 ;
-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithTransitRouteMatcher:(id)arg0 alightStep:(id)arg1 transferStep:(id)arg2 boardStep:(id)arg3 ;


@end


#endif