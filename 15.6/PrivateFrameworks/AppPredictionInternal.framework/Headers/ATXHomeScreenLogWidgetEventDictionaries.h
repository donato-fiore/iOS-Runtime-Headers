// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGWIDGETEVENTDICTIONARIES_H
#define ATXHOMESCREENLOGWIDGETEVENTDICTIONARIES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogWidgetEventDictionaries : NSObject {
    NSMutableDictionary *_widgetEventDictionaries;
}




+(id)widgetEventDictionaryAccumulatorSplitByLocationKeys;
-(id)_createNewWidgetEventDictionaryForBundleId:(id)arg0 kind:(id)arg1 size:(NSUInteger)arg2 ;
-(id)_widgetEventDictionaryForATXHomeScreenWidgetIdentifiable:(id)arg0 ;
-(id)_widgetEventDictionaryForHomeScreenEvent:(id)arg0 ;
-(id)_widgetEventDictionaryForWidgetId:(id)arg0 widgetKind:(id)arg1 widgetSize:(NSUInteger)arg2 ;
-(id)_widgetEventDictionaryKeyWithWidgetId:(id)arg0 widgetKind:(id)arg1 widgetSize:(NSUInteger)arg2 ;
-(id)dryRunResult;
-(id)init;
-(void)sendToCoreAnalytics;
-(void)updateUnlockSessionsWithWidgetDwell:(id)arg0 ;
-(void)updateWidgetLevelSummaryForHomeScreenEvent:(id)arg0 lastStackEvent:(id)arg1 ;
-(void)updateWidgetLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg0 ;


@end


#endif