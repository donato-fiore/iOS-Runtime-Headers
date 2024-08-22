// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEANDDISTANCEUPDATER_H
#define MNTIMEANDDISTANCEUPDATER_H

@class NSArray, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "MNLocation.h"
#import "MNActiveRouteInfo.h"

@interface MNTimeAndDistanceUpdater : NSObject {
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
}


@property (weak, nonatomic) NSObject<MNTimeAndDistanceUpdaterDelegate> *delegate; // ivar: _delegate


-(void)_startTimerToNextMinute;
-(void)dealloc;
-(void)setLocation:(id)arg0 notificationType:(NSUInteger)arg1 ;
-(void)setRoutes:(id)arg0 mainRoute:(id)arg1 location:(id)arg2 notificationType:(NSUInteger)arg3 ;
-(void)startUpdating;
-(void)stopUpdating;
-(void)updateDisplayETAForRoute:(id)arg0 notificationType:(NSUInteger)arg1 ;


@end


#endif