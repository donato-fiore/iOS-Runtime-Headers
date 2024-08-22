// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDTRANSITSTATIONROUTESTEP_H
#define GEOCOMPOSEDTRANSITSTATIONROUTESTEP_H

@class NSString;


#import "GEOComposedTransitRouteStep.h"
#import "GEOTransitEnterExitInfo.h"
#import "GEOPBTransitAccessPoint.h"
#import "GEOTransitTransferInfo.h"

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {
    GEOTransitEnterExitInfo *_enterExitInfo;
}


@property (readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // ivar: _accessPoint
@property (readonly, nonatomic) BOOL displayStop;
@property (readonly, nonatomic) NSString *exitSign;
@property (readonly, nonatomic) unsigned int expectedTime; // ivar: _expectedTime
@property (readonly, nonatomic) BOOL hasDisplayStop;
@property (readonly, nonatomic) BOOL isArrivalUncertain; // ivar: _isArrivalUncertain
@property (readonly, nonatomic) GEOTransitTransferInfo *transitTransfer; // ivar: _transitTransfer


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 decoderData:(id)arg1 step:(id)arg2 stepIndex:(NSUInteger)arg3 duration:(unsigned int)arg4 pointRange:(struct _NSRange )arg5 ;
-(struct ? )endGeoCoordinate;
-(struct ? )startGeoCoordinate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif