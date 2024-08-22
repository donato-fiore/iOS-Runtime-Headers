// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(CGFloat)isTransitUserConfidence;
-(CGFloat)isTransitUserHereConfidence;
-(id)initWithSignalPack:(id)arg0 ;


@end


#endif