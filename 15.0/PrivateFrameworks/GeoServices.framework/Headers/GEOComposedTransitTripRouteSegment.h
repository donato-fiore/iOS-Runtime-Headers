// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDTRANSITTRIPROUTESEGMENT_H
#define GEOCOMPOSEDTRANSITTRIPROUTESEGMENT_H

@class NSArray, NSDate, NSTimeZone;
@protocol GEOTransitLine, GEOTransitSystem;


#import "GEOComposedTransitBaseRouteSegment.h"
#import "GEOComposedTransitTripRouteStep.h"

@interface GEOComposedTransitTripRouteSegment : GEOComposedTransitBaseRouteSegment {
    NSUInteger _boardStepIndex;
    NSUInteger _alightStepIndex;
    NSUInteger _blockTransferStepIndex;
    NSUInteger _numberOfTransitStops;
    NSArray *_actionSheetDescriptions;
    NSArray *_routeDetailsOptionsArtwork;
    NSArray *_actionSheetOptionsArtwork;
    NSArray *_alightNotifications;
}


@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *alightStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep;
@property (readonly, nonatomic) CGFloat departureFrequencyMax;
@property (readonly, nonatomic) CGFloat departureFrequencyMin;
@property (readonly, nonatomic) NSDate *departureTime;
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSArray *departureTimes;
@property (readonly, nonatomic) NSDate *lastStepArrivalDate;
@property (readonly, nonatomic) BOOL notifyBeforeAlightStep;
@property (readonly, nonatomic) NSUInteger rideOptionsCount;
@property (readonly, nonatomic) NSArray *routeLineArtwork;
@property (nonatomic) NSUInteger selectedRideOptionIndex; // ivar: _selectedRideOptionIndex
@property (readonly, nonatomic) NSObject<GEOTransitLine> *transitLine;
@property (readonly, nonatomic) NSArray *transitLineOptions; // ivar: _transitLineOptions
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *transitSystem;


+(BOOL)supportsSecureCoding;
-(BOOL)_needsStepData;
-(NSUInteger)numberOfTransitStops;
-(id)actionSheetArtworkForRideOption:(NSUInteger)arg0 ;
-(id)actionSheetDescriptionForRideOption:(NSUInteger)arg0 ;
-(id)blockTransferStep;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 rideSelections:(id)arg1 sectionOptions:(id)arg2 decoderData:(id)arg3 tripIndex:(NSUInteger)arg4 stepRange:(struct _NSRange )arg5 transitStepRange:(struct _NSRange )arg6 pointRange:(struct _NSRange )arg7 ;
-(id)routeDetailsPrimaryArtworkForRideOption:(NSUInteger)arg0 ;
-(id)transitLineForRideOption:(NSUInteger)arg0 ;
-(void)_cacheStepData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif