// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESGENERATOR_H
#define ATXSUGGESTEDPAGESGENERATOR_H

@class NSDictionary, NSSet;
@protocol ATXSuggestedSpacesEnvironment;

#import <Foundation/Foundation.h>

#import "ATXSuggestedPagesWidgetAggregator.h"
#import "ATXSuggestedPagesAppAggregator.h"
#import "ATXSuggestedPagesSleepShortcutsDataSource.h"
#import "ATXSuggestedPagesTunableConstants.h"

@interface ATXSuggestedPagesGenerator : NSObject <ATXSuggestedSpacesEnvironment>

 {
    ATXSuggestedPagesWidgetAggregator *_widgetAggregator;
    ATXSuggestedPagesAppAggregator *_appAggregator;
    ATXSuggestedPagesSleepShortcutsDataSource *_shortcutsDataSource;
    NSUInteger _cachedHomeScreenRows;
    NSUInteger _cachedHomeScreenColumns;
}


@property (readonly, nonatomic) NSDictionary *appLaunchCounts; // ivar: _appLaunchCounts
@property (readonly, nonatomic) NSSet *suggestedApps; // ivar: _suggestedApps
@property (readonly, nonatomic) ATXSuggestedPagesTunableConstants *tunableConstants; // ivar: _tunableConstants


-(NSUInteger)_suggestAppsFromPool:(id)arg0 forPage:(id)arg1 type:(NSInteger)arg2 numberOfAppsNecessary:(NSUInteger)arg3 ;
-(NSUInteger)_suggestShortcutsFromPool:(id)arg0 forPage:(id)arg1 type:(NSInteger)arg2 numberOfShortcutsNecessary:(NSUInteger)arg3 ;
-(NSUInteger)_suggestStacksFromPool:(id)arg0 forPage:(id)arg1 type:(NSInteger)arg2 layout:(id)arg3 numberOfColumns:(NSUInteger)arg4 ;
-(id)_validatedWidgets:(id)arg0 bundleIdsToLaunches:(id)arg1 ;
-(id)generateSuggestedPagesForPageType:(NSInteger)arg0 layoutOptions:(id)arg1 ;
-(id)init;
-(id)initWithWidgetAggregator:(id)arg0 appAggregator:(id)arg1 shortcutsDataSource:(id)arg2 ;


@end


#endif