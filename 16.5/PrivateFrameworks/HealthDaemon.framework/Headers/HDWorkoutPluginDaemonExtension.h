// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTPLUGINDAEMONEXTENSION_H
#define HDWORKOUTPLUGINDAEMONEXTENSION_H

@class NSString;
@protocol HDHealthDaemonExtension;

#import <Foundation/Foundation.h>

#import "HDAlertSuppressor.h"
#import "HDAppLauncher.h"
#import "HDBackgroundWorkoutRunner.h"
#import "HDCarouselServicesManager.h"
#import "HDCoreMotionWorkoutInterface.h"
#import "HDDaemon.h"
#import "HDHeartRateRecoveryManager.h"

@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension>



@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor; // ivar: _alertSuppressor
@property (readonly, nonatomic) HDAppLauncher *appLauncher; // ivar: _appLauncher
@property (readonly, nonatomic) HDBackgroundWorkoutRunner *backgroundWorkoutRunner; // ivar: _backgroundWorkoutRunner
@property (readonly, nonatomic) HDCarouselServicesManager *carouselServicesManager; // ivar: _carouselServicesManager
@property (readonly, nonatomic) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface; // ivar: _coreMotionWorkoutInterface
@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDHeartRateRecoveryManager *heartRateRecoveryManager; // ivar: _heartRateRecoveryManager
@property (readonly) Class superclass;


-(id)initWithDaemon:(id)arg0 ;


@end


#endif