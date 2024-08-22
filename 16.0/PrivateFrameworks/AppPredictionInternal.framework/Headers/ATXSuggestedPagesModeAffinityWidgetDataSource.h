// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESMODEAFFINITYWIDGETDATASOURCE_H
#define ATXSUGGESTEDPAGESMODEAFFINITYWIDGETDATASOURCE_H

@protocol ATXSuggestedPagesWidgetDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesModeAffinityWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>





-(CGFloat)_fetchScoreThresholdForWidgetModeAffinityModel;
-(id)_widgetIdentifierWithoutIntentForCHSWidget:(id)arg0 ;
-(id)_widgetIdentifierWithoutIntentForWidget:(id)arg0 ;
-(id)fetchWidgetsPassingThresholdForMode:(NSUInteger)arg0 forSize:(NSUInteger)arg1 ;
-(id)provideWidgetsForPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif