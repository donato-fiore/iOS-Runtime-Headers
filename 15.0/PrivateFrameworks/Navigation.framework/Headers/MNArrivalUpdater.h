// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNARRIVALUPDATER_H
#define MNARRIVALUPDATER_H

@class GEOComposedRoute, NSDate, NSMutableArray, NSString;
@protocol MNArrivalRegionTimerDelegate;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNLocation.h"

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate>

 {
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    BOOL _useLegacyArrival;
    NSUInteger _arrivalState;
    NSUInteger _arrivalLegIndex;
    NSDate *_arrivalDate;
    CGFloat _closestDistanceToWaypoint;
    BOOL _isApproachingWaypoint;
    NSMutableArray *_timeoutRegions;
    BOOL _isCharging;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (readonly) Class superclass;


-(BOOL)_checkApproachingForLocation:(id)arg0 ;
-(BOOL)_checkArrival:(id)arg0 forLocation:(id)arg1 ;
-(BOOL)_checkPreArrival:(id)arg0 forLocation:(id)arg1 ;
-(BOOL)_legacyCheckArrivalForLocation:(id)arg0 ;
-(BOOL)_legacyCheckDrivingArrivalForLocation:(id)arg0 ;
-(BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)arg0 ;
-(BOOL)_shouldUseNewArrivalLogic;
-(BOOL)allowDepartureForLocation:(id)arg0 ;
-(CGFloat)_distanceToEndOfLeg:(id)arg0 fromLocation:(id)arg1 ;
-(id)init;
-(id)initWithRoute:(id)arg0 useLegacyArrival:(BOOL)arg1 ;
-(void)_setArrivalForLegIndex:(NSUInteger)arg0 ;
-(void)arrivalRegionTimerDidFire:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsCharging:(BOOL)arg0 location:(id)arg1 ;
-(void)updateForDepartureFromWaypoint;
-(void)updateForLocation:(id)arg0 ;
-(void)updateForRoute:(id)arg0 ;


@end


#endif