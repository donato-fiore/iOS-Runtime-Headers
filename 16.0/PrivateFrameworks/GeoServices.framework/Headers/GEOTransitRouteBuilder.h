// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITROUTEBUILDER_H
#define GEOTRANSITROUTEBUILDER_H



#import "GEORouteBuilder.h"

@interface GEOTransitRouteBuilder : GEORouteBuilder



+(BOOL)_shouldBreakPointSectionAtStep:(id)arg0 previousStep:(id)arg1 ;
+(CGFloat)_buildPointSectionsInCollection:(id)arg0 pointRange:(struct _NSRange )arg1 stepIndex:(NSUInteger)arg2 transitLineColor:(id)arg3 startDistance:(CGFloat)arg4 andCoordinates:(id)arg5 fromSteps:(id)arg6 andSegments:(id)arg7 ;
+(CGFloat)_buildPointSectionsInCollection:(id)arg0 pointRange:(struct _NSRange )arg1 stepIndex:(NSUInteger)arg2 transitLineColor:(id)arg3 startDistance:(CGFloat)arg4 coordinates:(id)arg5 fromSteps:(id)arg6 andSegments:(id)arg7 andDecoderData:(id)arg8 ;
+(CGFloat)_totalDistanceForLegs:(id)arg0 ;
+(NSUInteger)_stepCountForSegmentWithStartingStepIndex:(NSUInteger)arg0 andStepInfos:(id)arg1 ;
+(id)_buildArrivalStepInfoFromStep:(id)arg0 withPointCount:(NSUInteger)arg1 ;
+(id)_buildCoordinatesForData:(id)arg0 andStepInfos:(id)arg1 andCustodian:(id)arg2 withWaypoints:(id)arg3 andArrivalParameters:(id)arg4 andCreateLegs:(id)arg5 ;
+(id)_buildExpandedWalkingStepInfosFromStep:(id)arg0 andDecoderData:(id)arg1 andPointData:(id)arg2 ;
+(id)_buildLegsFromSteps:(id)arg0 andCoordinates:(id)arg1 andCustodian:(id)arg2 ;
+(id)_buildPointDataForGeometry:(id)arg0 andCreatePointStarts:(id)arg1 ;
+(id)_buildPointSectionsFromSteps:(id)arg0 andSegments:(id)arg1 coordinates:(id)arg2 andTransitLineColor:(id)arg3 ;
+(id)_buildSegmentsForGeometry:(id)arg0 andStepCount:(NSUInteger)arg1 andPointCount:(NSUInteger)arg2 andCustodian:(id)arg3 ;
+(id)_buildStepInfosFromSteps:(id)arg0 withDecoderData:(id)arg1 andIsWalkingOnlyRoute:(BOOL)arg2 andBuildPointData:(id)arg3 ;
+(id)_buildStepsForGeometry:(id)arg0 andPointStarts:(id)arg1 andStopCount:(NSUInteger)arg2 andLine:(id)arg3 andCustodian:(id)arg4 ;
+(id)_buildStepsForStepInfos:(id)arg0 andCustodian:(id)arg1 andDecoderData:(id)arg2 andSuggestedRoute:(id)arg3 andLegs:(id)arg4 andPointCount:(NSUInteger)arg5 andRideSelections:(id)arg6 andSectionOptions:(id)arg7 andCreateSegments:(id)arg8 andUpdateTripCount:(*NSUInteger)arg9 ;
+(id)_buildTransitStepInfoFromStep:(id)arg0 withPreviousStep:(id)arg1 andNextStep:(id)arg2 andDecoderData:(id)arg3 andPointData:(id)arg4 ;
+(id)_sectionForSteps:(id)arg0 withIndex:(NSUInteger)arg1 andSegment:(id)arg2 withIndex:(NSUInteger)arg3 andCoordinates:(id)arg4 andPointRange:(struct _NSRange )arg5 andBounds:(struct ? )arg6 andTransitLineColor:(id)arg7 andStartDistance:(CGFloat)arg8 andDecoderData:(id)arg9 ;
+(id)_sectionOptionForTripIndex:(NSUInteger)arg0 andSectionOptions:(id)arg1 ;
+(id)_segmentForSteps:(id)arg0 withRange:(struct _NSRange )arg1 andCustodian:(id)arg2 andDecoderData:(id)arg3 andSuggestedRoute:(id)arg4 andRideSelections:(id)arg5 andSectionOptions:(id)arg6 andUpdateTripCount:(*NSUInteger)arg7 ;
+(id)_stepForStepInfoAtIndex:(NSUInteger)arg0 andStepInfos:(id)arg1 andSteps:(id)arg2 andCustodian:(id)arg3 withDecoderData:(id)arg4 andSuggestedRoute:(id)arg5 andPointCount:(NSUInteger)arg6 ;
+(id)_walkingStepForStepInfo:(id)arg0 withValidPointRange:(struct _NSRange )arg1 andStepCount:(NSUInteger)arg2 andCustodian:(id)arg3 andDecoderData:(id)arg4 andSuggestedRoute:(id)arg5 ;
+(id)buildRouteSectionsForSuggestedRoute:(id)arg0 fromSteps:(id)arg1 andSegments:(id)arg2 andCoordinates:(id)arg3 andDecoderData:(id)arg4 ;
+(id)optionsForRideSelections:(id)arg0 forSuggestionRoute:(id)arg1 ;
+(id)outputForGeometry:(id)arg0 andLine:(id)arg1 andStops:(id)arg2 andCustodian:(id)arg3 ;
+(id)outputForSuggestedRoute:(id)arg0 withDecoderData:(id)arg1 andWaypoints:(id)arg2 andArrivalParameters:(id)arg3 andCustodian:(id)arg4 ;
+(id)outputForSuggestedRoute:(id)arg0 withDecoderData:(id)arg1 andWaypoints:(id)arg2 andArrivalParameters:(id)arg3 andCustodian:(id)arg4 andRideSelections:(id)arg5 andSectionOptions:(id)arg6 ;
+(id)selectionsForSuggestedRoute:(id)arg0 ;
+(struct _NSRange )_appendPointData:(id)arg0 toPointData:(id)arg1 withContinuity:(BOOL)arg2 ;
+(struct _NSRange )_validPointRangeForStepInfoIndex:(NSUInteger)arg0 andStepInfos:(id)arg1 withPointCount:(NSUInteger)arg2 ;
+(void)preprocessClusteredSuggestedRoute:(id)arg0 withSectionOptions:(id)arg1 andRideSelections:(id)arg2 andDecoderData:(id)arg3 ;


@end


#endif