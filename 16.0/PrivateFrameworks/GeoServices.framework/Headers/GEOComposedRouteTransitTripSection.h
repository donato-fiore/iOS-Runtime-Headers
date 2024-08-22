// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTETRANSITTRIPSECTION_H
#define GEOCOMPOSEDROUTETRANSITTRIPSECTION_H

@class NSString;
@protocol GEOComposedRouteTransitSection;


#import "GEOComposedRouteSection.h"

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection>

 {
    ? _fromNodeLocation;
    ? _toNodeLocation;
    Color<float, 4, geo::ColorSpace::Linear> _lineColor;
    ? _originalBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? fromNodeID; // ivar: _fromNodeID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransfer;
@property ? lineColor;
@property (readonly, nonatomic) NSUInteger lineID; // ivar: _lineID
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? toNodeID; // ivar: _toNodeID
@property (readonly, nonatomic) int toNodeSignificance; // ivar: _toNodeSignificance


-(BOOL)_MapsCarPlay_isEqual:(id)arg0 ;
-(id)_hallForStop:(id)arg0 withDecoderData:(id)arg1 ;
-(id)_stationForHall:(id)arg0 withDecoderData:(id)arg1 ;
-(id)initWithCoordinates:(id)arg0 segment:(id)arg1 segmentIndex:(NSUInteger)arg2 steps:(id)arg3 startCoordinateIndex:(unsigned int)arg4 coordinateCount:(unsigned int)arg5 stepIndex:(NSUInteger)arg6 toNodeSignificance:(int)arg7 transitLineColor:(id)arg8 startDistance:(CGFloat)arg9 lengthScaleFactor:(CGFloat)arg10 decoderData:(id)arg11 ;
-(id)initWithCoordinates:(id)arg0 segment:(id)arg1 segmentIndex:(NSUInteger)arg2 steps:(id)arg3 startCoordinateIndex:(unsigned int)arg4 coordinateCount:(unsigned int)arg5 stepIndex:(NSUInteger)arg6 toNodeSignificance:(int)arg7 transitLineColor:(id)arg8 startDistance:(CGFloat)arg9 lengthScaleFactor:(CGFloat)arg10 fallbackStartCoordinate:(struct ? )arg11 fallbackEndCoordinate:(struct ? )arg12 ;
-(void)_initSupportWithDecoderData:(id)arg0 step:(id)arg1 toNodeSignificance:(int)arg2 transitLineColor:(id)arg3 ;


@end


#endif