// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCAMERAAPPLICATION_H
#define SBCAMERAAPPLICATION_H



#import "SBApplication.h"

@interface SBCameraApplication : SBApplication

@property (nonatomic) BOOL hasPreHeatInFlight; // ivar: _hasPreHeatInFlight


-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(void)_cancelPreheatForUserLaunchIfNecessary;
-(void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(NSUInteger)arg0 andContinuousTime:(NSUInteger)arg1 ;


@end


#endif