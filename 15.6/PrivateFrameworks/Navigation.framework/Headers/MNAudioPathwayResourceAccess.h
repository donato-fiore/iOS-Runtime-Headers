// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNAUDIOPATHWAYRESOURCEACCESS_H
#define MNAUDIOPATHWAYRESOURCEACCESS_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"

@interface MNAudioPathwayResourceAccess : NSObject {
    MNObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}


@property (nonatomic) BOOL enableHFPUse; // ivar: _enableHFPUse
@property (retain, nonatomic) NSDictionary *hfpRoute; // ivar: _hfpRoute
@property (nonatomic) BOOL wantsVolumeControl; // ivar: _wantsVolumeControl


-(BOOL)_otherAudioIsPlaying;
-(BOOL)_routeIsAirTunes:(id)arg0 ;
-(BOOL)_routeIsBluetooth:(id)arg0 ;
-(BOOL)_routeIsForVehicle:(id)arg0 ;
-(BOOL)_routeIsHFP:(id)arg0 ;
-(BOOL)_routeIsOverride:(id)arg0 ;
-(BOOL)_routeIsUsable:(id)arg0 ;
-(BOOL)_routeIsWireless:(id)arg0 ;
-(id)initWithHFPEnabled:(BOOL)arg0 ;
-(void)_findUsableRouteWithHandler:(id)arg0 ;
-(void)_mediaServerConnectionDied;
-(void)_pickableRoutesChanged;
-(void)_registerForObservation;
-(void)_unregisterForObservation;
-(void)_updateHFPRoute;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif