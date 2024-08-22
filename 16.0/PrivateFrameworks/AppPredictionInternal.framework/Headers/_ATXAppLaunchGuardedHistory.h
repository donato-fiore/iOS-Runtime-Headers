// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCHGUARDEDHISTORY_H
#define _ATXAPPLAUNCHGUARDEDHISTORY_H

@class NSMutableArray;
@protocol ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"
#import "_ATXAppDailyDose.h"
#import "_ATXAppInfoManager.h"
#import "_ATXAppLaunchHistogramManager.h"
#import "_ATXAppLaunchSequenceManager.h"
#import "ATXHeroPoiManager.h"

@interface _ATXAppLaunchGuardedHistory : NSObject {
    NSMutableArray *_deltaLog;
    _ATXDuetHelper *_duetHelper;
    _ATXAppDailyDose *_appDailyDose;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
    id<ATXPredictionContextBuilderProtocol> *_contextBuilder;
    ATXHeroPoiManager *_heroPoiManager;
}






@end


#endif