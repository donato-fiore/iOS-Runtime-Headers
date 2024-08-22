// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLAVAILABLEVENUESSTATEMACHINE_H
#define CLAVAILABLEVENUESSTATEMACHINE_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "CLIndoorAvailabilityTileParams.h"
#import "GeographicCoordinate.h"

@interface CLAvailableVenuesStateMachine : NSObject

@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams; // ivar: _availabilityTileParams
@property (retain) NSSet *disabledVenues; // ivar: _disabledVenues
@property (readonly) GeographicCoordinate *lastFix; // ivar: _lastFix
@property CGFloat maxLoadRadius; // ivar: _maxLoadRadius


+(CGFloat)deg2rad:(CGFloat)arg0 ;
+(CGFloat)distBetweenLatLon:(id)arg0 latlon1:(id)arg1 ;
+(CGFloat)metersFromGreatCircleDistance:(CGFloat)arg0 ;
+(NSInteger)getLocationContextFromVenueBounds:(*void)arg0 ;
-(BOOL)isVenueDisabled:(id)arg0 locationId:(id)arg1 ;
-(BOOL)shouldRecompute:(id)arg0 ;
-(id)computeAvailableVenues:(id)arg0 nearCoordinates:(id)arg1 ;
-(id)computeAvailableVenues:(id)arg0 nearCoordinates:(id)arg1 withError:(*BOOL)arg2 ;
-(id)getNearbyLocationGroups:(id)arg0 withUpdatedPos:(id)arg1 ;
-(id)getNearbyLocationGroups:(id)arg0 withUpdatedPos:(id)arg1 nearLocationsOfInterest:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg0 withUpdatedPos:(id)arg1 ;
-(id)getNearbyLocationGroupsForTile:(id)arg0 withUpdatedPos:(id)arg1 nearLocationsOfInterest:(id)arg2 ;
-(id)init;
-(id)openTileParserAtPath:(id)arg0 ;
-(id)recomputeIfNecessary:(id)arg0 withGlobalAvailabilityTile:(id)arg1 andAdditionalLOIs:(id)arg2 ;
-(void)clearLastFix;


@end


#endif