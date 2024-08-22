// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXONBOARDINGSTACKWIDGETCACHEMANAGER_H
#define ATXONBOARDINGSTACKWIDGETCACHEMANAGER_H

@class NSString, BMAppLaunchStream;

#import <Foundation/Foundation.h>

#import "ATXAvocadoDescriptorCache.h"

@interface ATXOnboardingStackWidgetCacheManager : NSObject {
    NSString *_cachePath;
    BMAppLaunchStream *_appLaunchStream;
    ATXAvocadoDescriptorCache *_descriptorCache;
    NSUInteger _max3PWidgetsToSerialize;
}




-(BOOL)_writeOnboardingWidgetStackCache:(id)arg0 withError:(*id)arg1 ;
-(id)_hasiCloudFamily;
-(id)_mapDescriptorsToAppLaunchData:(id)arg0 error:(*id)arg1 ;
-(id)_sortAndFilterOutLeastUsed3PWidgets:(id)arg0 ;
-(id)_splitDescriptorsIntoFirstPartyAndThirdParty:(id)arg0 ;
-(id)fetchOnboardingStackWidgetCacheWithError:(*id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 appLaunchStream:(id)arg1 descriptorCache:(id)arg2 max3PWidgetsToSerialize:(NSUInteger)arg3 ;
-(id)updateCacheWithActivity:(id)arg0 ;
-(void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)arg0 withAppLaunchDictionary:(id)arg1 ;


@end


#endif