// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONTEXTSOURCESGUARDEDDATA_H
#define ATXCONTEXTSOURCESGUARDEDDATA_H

@class ATXLocationManager, ATXMotionManagerWrapper;

#import <Foundation/Foundation.h>

#import "ATXAmbientLightMonitor.h"
#import "_ATXAppInfoManager.h"

@interface ATXContextSourcesGuardedData : NSObject

@property (readonly, nonatomic) ATXAmbientLightMonitor *ambientLightMonitor; // ivar: _ambientLightMonitor
@property (readonly, nonatomic) _ATXAppInfoManager *appInfoManager; // ivar: _appInfoManager
@property (readonly, nonatomic) BOOL contextSourcesInitialized; // ivar: _contextSourcesInitialized
@property (readonly, nonatomic) Class deviceStateMonitorClass; // ivar: _deviceStateMonitorClass
@property (readonly, nonatomic) ATXLocationManager *locationManager; // ivar: _locationManager
@property (readonly, nonatomic) ATXMotionManagerWrapper *motionManagerWrapper; // ivar: _motionManagerWrapper


-(void)updateAppInfoManager:(id)arg0 locationManager:(id)arg1 motionManagerWrapper:(id)arg2 ambientLightMonitor:(id)arg3 deviceStateMonitorClass:(Class)arg4 contextSourcesInitialized:(BOOL)arg5 ;


@end


#endif