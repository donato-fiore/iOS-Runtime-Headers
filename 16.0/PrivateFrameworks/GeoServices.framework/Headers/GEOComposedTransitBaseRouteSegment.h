// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDTRANSITBASEROUTESEGMENT_H
#define GEOCOMPOSEDTRANSITBASEROUTESEGMENT_H



#import "GEOComposedRouteSegment.h"

@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {
    _NSRange _transitStepRange;
}




+(BOOL)supportsSecureCoding;
-(id)endingTransitStop;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 routeSegmentType:(NSInteger)arg1 stepRange:(struct _NSRange )arg2 transitStepRange:(struct _NSRange )arg3 pointRange:(struct _NSRange )arg4 ;
-(id)startingTransitStop;
-(struct _NSRange )transitStepRange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif