// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSIGNALPACKEVALUATOR_H
#define MAPSSUGGESTIONSSIGNALPACKEVALUATOR_H


#import <Foundation/Foundation.h>

#import "MapsSuggestionsSignalPack.h"

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}




+(id)evaluatorFromSignalPack:(id)arg0 ;
-(BOOL)hasCarPlayInfo;
-(BOOL)hasDistanceFromHereToDestinationInfo;
-(BOOL)hasDistanceFromHereToOriginInfo;
-(BOOL)hasDistanceFromOriginToDestinationInfo;
-(BOOL)hasMapTypeInfo;
-(BOOL)hasRidesharingInfo;
-(BOOL)hasSignalForExpressPaymentCard;
-(BOOL)hasSignalForHasATransitCard;
-(BOOL)hasSignalForPaymentCard;
-(BOOL)hasTouristInfo;
-(BOOL)hasTransitInfo;
-(BOOL)hasUserTransportTypePreferenceInfo;
-(BOOL)hasWeatherInfo;
-(BOOL)hasWeatherPrecipitationInfo;
-(BOOL)hasWeatherTemperatureInfo;
-(BOOL)isBadWeather;
-(BOOL)isCarPlayConnected;
-(BOOL)isColdWeather;
-(BOOL)isEasilyWalkable;
-(BOOL)isHighChanceOfRaining;
-(BOOL)isHighChanceOfSnowing;
-(BOOL)isHotWeather;
-(BOOL)isLowChanceOfRaining;
-(BOOL)isLowChanceOfSnowing;
-(BOOL)isMapTypeTransit;
-(BOOL)isMildWeather;
-(BOOL)isRideSharingAppsInstalled;
-(BOOL)isTouristHere;
-(BOOL)isTransitCurrentlyPossible;
-(BOOL)isUserPreferenceDriving;
-(BOOL)isUserPreferenceRidesharing;
-(BOOL)isUserPreferenceTransit;
-(BOOL)isUserPreferenceWalking;
-(BOOL)isWalkable;
-(BOOL)userHasAPaymentCard;
-(BOOL)userHasATransitCard;
-(BOOL)userHasAnExpressPaymentCard;
-(CGFloat)isTransitUserConfidence;
-(CGFloat)isTransitUserHereConfidence;
-(id)initWithSignalPack:(id)arg0 ;


@end


#endif