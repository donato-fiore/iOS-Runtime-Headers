// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXONBOARDINGSTACKWIDGETCACHEMANAGER_H
#define ATXONBOARDINGSTACKWIDGETCACHEMANAGER_H

@class NSString, BMAppLaunchStream;

#import <Foundation/Foundation.h>


@interface ATXOnboardingStackWidgetCacheManager : NSObject {
    NSString *_cachePath;
    BMAppLaunchStream *_appLaunchStream;
    NSUInteger _max3PWidgetsToSerialize;
}




-(BOOL)_writeOnboardingWidgetStackCache:(id)arg0 withError:(*id)arg1 ;
-(id)_mapDescriptorsToAppLaunchData:(id)arg0 descriptorCache:(id)arg1 error:(*id)arg2 ;
-(id)_sortAndFilterOutLeastUsed3PWidgets:(id)arg0 ;
-(id)_splitDescriptorsIntoFirstPartyAndThirdParty:(id)arg0 ;
-(id)fetchOnboardingStackWidgetCacheWithError:(*id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 appLaunchStream:(id)arg1 max3PWidgetsToSerialize:(NSUInteger)arg2 ;
-(id)updateCacheWithActivity:(id)arg0 ;
-(void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)arg0 withAppLaunchDictionary:(id)arg1 ;


@end


#endif