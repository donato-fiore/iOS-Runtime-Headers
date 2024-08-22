// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGWIDGETADDSHEETDICTIONARIES_H
#define ATXHOMESCREENLOGWIDGETADDSHEETDICTIONARIES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogWidgetAddSheetDictionaries : NSObject {
    NSMutableDictionary *_widgetAddSheetDictionaries;
}




+(id)rankKeysSplitBySize;
-(id)_createNewWidgetAddSheetDictionaryForBundleId:(id)arg0 kind:(id)arg1 ;
-(id)_widgetAddSheetDictionaryForDescriptor:(id)arg0 ;
-(id)_widgetAddSheetDictionaryForStack;
-(id)_widgetAddSheetDictionaryForWidgetId:(id)arg0 widgetKind:(id)arg1 ;
-(id)dryRunResult;
-(id)init;
-(id)widgetAddSheetDictionaryKeyWithWidgetId:(id)arg0 widgetKind:(id)arg1 ;
-(void)_updateWidgetAddSheetDictionariesForDescriptor:(id)arg0 inStack:(BOOL)arg1 rank:(NSUInteger)arg2 ;
-(void)_updateWidgetAddSheetDictionariesForStack:(id)arg0 suggestedSize:(NSUInteger)arg1 ;
-(void)_updateWidgetAddSheetDictionariesWithDictionary:(id)arg0 suggestedSize:(NSUInteger)arg1 inStack:(BOOL)arg2 rank:(NSUInteger)arg3 ;
-(void)sendToCoreAnalytics;
-(void)updateWidgetAddSheetSummaryForDefaultStack:(id)arg0 ;
-(void)updateWidgetAddSheetSummaryForSuggestions:(id)arg0 ;


@end


#endif