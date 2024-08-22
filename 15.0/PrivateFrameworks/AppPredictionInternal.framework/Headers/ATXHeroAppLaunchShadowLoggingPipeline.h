// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEROAPPLAUNCHSHADOWLOGGINGPIPELINE_H
#define ATXHEROAPPLAUNCHSHADOWLOGGINGPIPELINE_H

@class BMAppLaunchStream;

#import <Foundation/Foundation.h>

#import "ATXBiomeLocationStream.h"

@interface ATXHeroAppLaunchShadowLoggingPipeline : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXBiomeLocationStream *_locationStream;
}




-(id)_populateAppLaunchContexts:(id)arg0 sortedLocationEvents:(id)arg1 ;
-(id)init;
-(id)initFromAppLaunchStream:(id)arg0 locationStream:(id)arg1 ;
-(void)logDailyAppLaunches;
-(void)logDailyAppLaunchesWithXPCActivity:(id)arg0 ;


@end


#endif