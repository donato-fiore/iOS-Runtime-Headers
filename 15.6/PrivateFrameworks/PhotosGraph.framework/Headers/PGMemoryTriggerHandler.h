// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYTRIGGERHANDLER_H
#define PGMEMORYTRIGGERHANDLER_H

@class NSArray, PHPhotoLibrary, NSString, CLSHolidayCalendarEventService;
@protocol PGMemoryPlannerFutureSource, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGMemoryTriggerHandler : NSObject <PGMemoryPlannerFutureSource>

 {
    NSArray *_allMemoryTriggers;
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLSHolidayCalendarEventService *holidayService; // ivar: _holidayService
@property (readonly) Class superclass;


+(CGFloat)scoreForTriggerType:(NSUInteger)arg0 ;
+(CGFloat)triggerScoreForTriggeredMemory:(id)arg0 ;
+(NSUInteger)maximumValidityPeriodForValidityIntervalByTriggerType:(id)arg0 context:(id)arg1 ;
+(id)creationDateWithContext:(id)arg0 ;
+(id)fallbackTriggeredMemoriesWithContext:(id)arg0 excludingTriggeredMemories:(id)arg1 inGraph:(id)arg2 holidayService:(id)arg3 ;
+(id)memoryNodesAllowedToBeFallbackFromMemoryNodes:(id)arg0 withContext:(id)arg1 inGraph:(id)arg2 holidayService:(id)arg3 ;
+(id)personMemoryNodesFeaturingMeNodeInGraph:(id)arg0 ;
-(id)allTriggeredMemoriesWithContext:(id)arg0 forTriggerType:(NSUInteger)arg1 inGraph:(id)arg2 progressReporter:(id)arg3 ;
-(id)allTriggeredMemoriesWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)futureMemoriesForConfiguration:(id)arg0 withGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 momentNodesWithBlockedFeatureCache:(id)arg2 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 forTriggerType:(NSUInteger)arg1 ;


@end


#endif