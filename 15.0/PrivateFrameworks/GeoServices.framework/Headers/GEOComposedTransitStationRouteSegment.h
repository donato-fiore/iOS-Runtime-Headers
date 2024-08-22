// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDTRANSITSTATIONROUTESEGMENT_H
#define GEOCOMPOSEDTRANSITSTATIONROUTESEGMENT_H



#import "GEOComposedTransitBaseRouteSegment.h"

@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment



-(BOOL)hasEnterStationManeuver;
-(BOOL)hasExitStationManeuver;
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 stepRange:(struct _NSRange )arg2 transitStepRange:(struct _NSRange )arg3 pointRange:(struct _NSRange )arg4 ;


@end


#endif