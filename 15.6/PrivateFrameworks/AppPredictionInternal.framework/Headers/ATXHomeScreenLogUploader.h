// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGUPLOADER_H
#define ATXHOMESCREENLOGUPLOADER_H


#import <Foundation/Foundation.h>

#import "ATXHomeScreenLogWidgetSetupDictionaries.h"
#import "ATXHomeScreenLogWidgetEventDictionaries.h"
#import "ATXHomeScreenLogWidgetRotationDictionaries.h"
#import "ATXHomeScreenLogSystemEventDictionaries.h"
#import "ATXHomeScreenLogSystemChangeDictionary.h"
#import "ATXHomeScreenLogWidgetAddSheetDictionaries.h"
#import "ATXHomeScreenWidgetDiscoverabilityLogHarvester.h"
#import "ATXTVWidgetLogHarvester.h"

@interface ATXHomeScreenLogUploader : NSObject {
    ATXHomeScreenLogWidgetSetupDictionaries *_widgetSetupDictionaries;
    ATXHomeScreenLogWidgetEventDictionaries *_widgetEventDictionaries;
    ATXHomeScreenLogWidgetRotationDictionaries *_widgetRotationDictionaries;
    ATXHomeScreenLogSystemEventDictionaries *_systemEventDictionary;
    ATXHomeScreenLogSystemChangeDictionary *_systemChangeDictionary;
    ATXHomeScreenLogWidgetAddSheetDictionaries *_widgetAddSheetDictionaries;
    ATXHomeScreenWidgetDiscoverabilityLogHarvester *_widgetDiscoverabilityDictionaries;
    ATXTVWidgetLogHarvester *_tvWidgetLogHarvester;
}




+(BOOL)_shouldProcessATXUIEvent:(id)arg0 startTime:(CGFloat)arg1 ;
-(id)_timeBasedMergePublisher:(id)arg0 withOtherPublishers:(id)arg1 ;
-(id)init;
-(void)uploadHomeScreenSummaryLogsToCoreAnalyticsWithActivity:(id)arg0 customStartDate:(id)arg1 dryRunCompletionHandler:(id)arg2 ;


@end


#endif