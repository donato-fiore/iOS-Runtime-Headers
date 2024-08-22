// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTSOURCESGUARDEDDATA_H
#define ATXCONTEXTSOURCESGUARDEDDATA_H

@class ATXLocationManager, ATXMotionManagerWrapper;

#import <Foundation/Foundation.h>

#import "ATXAmbientLightMonitor.h"
#import "_ATXAppInfoManager.h"
#import "ATXBiomeLocationStream.h"
#import "ATXBiomePredictionContextStream.h"

@interface ATXContextSourcesGuardedData : NSObject

@property (readonly, nonatomic) ATXAmbientLightMonitor *ambientLightMonitor; // ivar: _ambientLightMonitor
@property (readonly, nonatomic) _ATXAppInfoManager *appInfoManager; // ivar: _appInfoManager
@property (readonly, nonatomic) BOOL biomeStreamsInitialized; // ivar: _biomeStreamsInitialized
@property (readonly, nonatomic) BOOL contextSourcesInitialized; // ivar: _contextSourcesInitialized
@property (readonly, nonatomic) Class deviceStateMonitorClass; // ivar: _deviceStateMonitorClass
@property (readonly, nonatomic) ATXLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) ATXBiomeLocationStream *locationStream; // ivar: _locationStream
@property (readonly, nonatomic) ATXMotionManagerWrapper *motionManagerWrapper; // ivar: _motionManagerWrapper
@property (readonly, nonatomic) ATXBiomePredictionContextStream *predictionContextStream; // ivar: _predictionContextStream


-(void)updateAppInfoManager:(id)arg0 locationManager:(id)arg1 motionManagerWrapper:(id)arg2 ambientLightMonitor:(id)arg3 deviceStateMonitorClass:(Class)arg4 contextSourcesInitialized:(BOOL)arg5 ;
-(void)updatePredictionContextStream:(id)arg0 locationStream:(id)arg1 biomeStreamsInitialized:(BOOL)arg2 ;


@end


#endif