// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WGWIDGETSTATSCONTROLLER_H
#define WGWIDGETSTATSCONTROLLER_H

@class NCLaunchStats;

#import <Foundation/Foundation.h>

#import "WGWidgetDiscoveryController.h"

@interface WGWidgetStatsController : NSObject

@property (nonatomic) BOOL bootstrapFavoriteWidgets; // ivar: _bootstrapFavoriteWidgets
@property (readonly, weak, nonatomic) WGWidgetDiscoveryController *discoveryController; // ivar: _discoveryController
@property (readonly, nonatomic) NCLaunchStats *launchStats; // ivar: _launchStats


-(id)initWithDiscoveryController:(id)arg0 ;
-(void)_favoriteWidgetIdentifiersDidUpdate:(id)arg0 ;
-(void)_setupLaunchStats;
-(void)_teardownLaunchStats;
-(void)_updateFavoriteWidgetIdentifiers;
-(void)dealloc;
-(void)launchStats:(id)arg0 incomingRecommendationForBundleIDs:(id)arg1 completion:(id)arg2 ;
-(void)notePreWarmHasEnded:(id)arg0 withResult:(NSInteger)arg1 withTriggerType:(int)arg2 withSequence:(NSUInteger)arg3 ;
-(void)notePreWarmHasStarted:(id)arg0 withTriggerType:(int)arg1 withSequence:(NSUInteger)arg2 ;
-(void)registerWidgetForPredictionEvents:(id)arg0 ;
-(void)requestRefreshForWidget:(id)arg0 afterDate:(id)arg1 ;
-(void)unregisterWidgetForPredictionEvents:(id)arg0 ;


@end


#endif