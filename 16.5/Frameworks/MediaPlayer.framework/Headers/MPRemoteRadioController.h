// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPREMOTERADIOCONTROLLER_H
#define MPREMOTERADIOCONTROLLER_H

@class NSMutableSet, NSXPCListener, RadioAvailabilityController, NSString, RadioRecentStationsController;
@protocol MPServiceRadioController, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_connections;
    BOOL _hasRefreshedStations;
    NSXPCListener *_listener;
}


@property (readonly, nonatomic) RadioAvailabilityController *availabilityController; // ivar: _availabilityController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RadioRecentStationsController *recentStationsController; // ivar: _recentStationsController
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_handleRecentStationsControllerDidChange;
-(void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg0 ;
-(void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg0 ;
-(void)_recentStationsControllerDidChangeStationsNotification:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)dealloc;
-(void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id)arg0 ;
-(void)start;


@end


#endif