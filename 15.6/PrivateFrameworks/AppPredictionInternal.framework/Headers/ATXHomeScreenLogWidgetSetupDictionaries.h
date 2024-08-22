// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGWIDGETSETUPDICTIONARIES_H
#define ATXHOMESCREENLOGWIDGETSETUPDICTIONARIES_H

@class NSMutableArray, NSMutableDictionary, ATXInformationStore;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogWidgetSetupDictionaries : NSObject {
    NSMutableArray *_widgetSetupDictionaries;
    NSMutableDictionary *_stackConfigDictionary;
    ATXInformationStore *_informationStore;
}




-(id)dryRunResult;
-(id)init;
-(void)_copyAllowedWidgetBundleIds;
-(void)_createNewWidgetSetupDictionaryForWidget:(id)arg0 stackKind:(NSUInteger)arg1 stackLocation:(NSUInteger)arg2 rowCoordinate:(NSInteger)arg3 columnCoordinate:(NSInteger)arg4 ;
-(void)_createStackConfigStatisticsForWidget:(id)arg0 stackKind:(NSUInteger)arg1 ;
-(void)_finalizeWidgetSetupDictionaries;
-(void)_persistStackConfigStatistics;
-(void)_removeAuxiliaryFieldsFromWidgetSetupDictionaries;
-(void)sendToCoreAnalytics;
-(void)updateTotalUnlockSessions:(NSUInteger)arg0 ;
-(void)updateWidgetLevelParentAppLaunches:(id)arg0 ;
-(void)updateWidgetSetupSummaryForHomeScreenPages:(id)arg0 ;


@end


#endif