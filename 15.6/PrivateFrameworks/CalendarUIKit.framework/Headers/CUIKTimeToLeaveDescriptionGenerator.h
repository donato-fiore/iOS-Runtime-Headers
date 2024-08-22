// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKTIMETOLEAVEDESCRIPTIONGENERATOR_H
#define CUIKTIMETOLEAVEDESCRIPTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CUIKTimeToLeaveDescriptionGenerator : NSObject



+(id)_attributedEtaString:(CGFloat)arg0 fontName:(id)arg1 fontSize:(CGFloat)arg2 ;
+(id)_etaString:(CGFloat)arg0 ;
+(id)_travelAdvisoryDescriptionOfType:(NSUInteger)arg0 hypothesis:(id)arg1 eta:(id)arg2 location:(id)arg3 ;
+(id)_travelTimeDrivingStringExcludingTrafficWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeDrivingStringIncludingTrafficWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeDrivingStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg0 location:(id)arg1 includeTransportType:(BOOL)arg2 ;
+(id)_travelTimeDrivingSubstringWithEta:(id)arg0 location:(id)arg1 routeName:(id)arg2 includeTransportType:(BOOL)arg3 ;
+(id)_travelTimeLeaveNowDrivingStringExcludingTrafficWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringIncludingTrafficWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg0 location:(id)arg1 includeTransportType:(BOOL)arg2 ;
+(id)_travelTimeLeaveNowDrivingSubstringWithEta:(id)arg0 location:(id)arg1 routeName:(id)arg2 includeTransportType:(BOOL)arg3 ;
+(id)_travelTimeLeaveNowTransitStringWithEta:(id)arg0 location:(id)arg1 ;
+(id)_travelTimeLeaveNowTransitStringWithLocation:(id)arg0 ;
+(id)_travelTimeLeaveNowWalkingStringWithEta:(id)arg0 location:(id)arg1 ;
+(id)_travelTimeLeaveNowWalkingStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeOnTimeDrivingStringWithEta:(id)arg0 ;
+(id)_travelTimeOnTimeTransitStringWithEta:(id)arg0 ;
+(id)_travelTimeOnTimeWalkingStringWithEta:(id)arg0 ;
+(id)_travelTimeRunningLateTransitStringWithEta:(id)arg0 location:(id)arg1 ;
+(id)_travelTimeStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)_travelTimeWalkingStringWithEta:(id)arg0 location:(id)arg1 ;
+(id)_travelTimeWalkingStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)departureDateString:(id)arg0 ;
+(id)explanatoryTextForTTLStatus:(NSUInteger)arg0 ;
+(id)timeToLeaveAttributedStringWithAttributes:(id)arg0 hypothesis:(id)arg1 location:(id)arg2 ;
+(id)timeToLeaveStringWithEta:(CGFloat)arg0 transportType:(int)arg1 runningLate:(BOOL)arg2 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)timeToLeaveStringWithHypothesis:(id)arg0 location:(id)arg1 ;
+(id)travelAdvisoryDescriptionOfType:(NSUInteger)arg0 hypothesis:(id)arg1 location:(id)arg2 ;
+(id)travelTimeApproachingDepartureDateStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)travelTimeApproachingDepartureDateTransitStringWithDepartureDate:(id)arg0 location:(id)arg1 ;
+(id)travelTimeLeaveNowStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;
+(id)travelTimeRunningLateStringWithHypothesis:(id)arg0 eta:(id)arg1 location:(id)arg2 ;


@end


#endif