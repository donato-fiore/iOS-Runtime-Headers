// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTIMEANDDISTANCEUPDATER_H
#define MNTIMEANDDISTANCEUPDATER_H

@class NSArray, NSTimer, NSString;
@protocol MNNavigationSessionStateListener, MNTimeAndDistanceUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "MNLocation.h"
#import "MNActiveRouteInfo.h"
#import "MNNavigationSessionState.h"

@interface MNTimeAndDistanceUpdater : NSObject <MNNavigationSessionStateListener>

 {
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    NSUInteger _currentLogType;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNTimeAndDistanceUpdaterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState; // ivar: _navigationSessionState
@property (readonly) Class superclass;


-(id)_batteryChargeInfoForRoute:(id)arg0 routeCoordinate:(struct ? )arg1 ;
-(id)_displayETAInfoForRoute:(id)arg0 routeCoordinate:(struct ? )arg1 ;
-(id)_routeDistanceInfoForRoute:(id)arg0 routeCoordinate:(struct ? )arg1 ;
-(id)initWithNavigationSessionState:(id)arg0 ;
-(void)_logDisplayETAInfo:(id)arg0 logType:(NSUInteger)arg1 ;
-(void)_startTimerToNextMinute;
-(void)dealloc;
-(void)setLocation:(id)arg0 notificationType:(NSUInteger)arg1 ;
-(void)setRoutes:(id)arg0 mainRoute:(id)arg1 location:(id)arg2 notificationType:(NSUInteger)arg3 ;
-(void)startUpdating;
-(void)stopUpdating;
-(void)updateDisplayETAForRoute:(id)arg0 notificationType:(NSUInteger)arg1 ;


@end


#endif