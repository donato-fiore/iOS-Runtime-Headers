// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPWIDGETMANAGER_H
#define HKSPSLEEPWIDGETMANAGER_H

@class NSArray;
@protocol NAScheduler;

#import <Foundation/Foundation.h>

#import "HKSPSleepStore.h"

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, nonatomic) NSObject<NAScheduler> *reloadScheduler; // ivar: _reloadScheduler
@property (readonly, weak, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore
@property (readonly, nonatomic) NSArray *timelineControllers; // ivar: _timelineControllers


+(BOOL)_shouldForceWidgetReload:(NSUInteger)arg0 ;
+(id)_widgetReloadDescription:(NSUInteger)arg0 ;
+(id)defaultTimelineControllers;
+(id)widgetBundleIdentifierForCurrentDevice;
-(id)initWithSleepStore:(id)arg0 ;
-(id)initWithSleepStore:(id)arg0 timelineControllers:(id)arg1 ;
-(void)reloadWidgetsWithReason:(NSUInteger)arg0 ;


@end


#endif