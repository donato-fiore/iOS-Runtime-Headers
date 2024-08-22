// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESHOMESCREENWIDGETDATASOURCE_H
#define ATXSUGGESTEDPAGESHOMESCREENWIDGETDATASOURCE_H

@protocol ATXSuggestedPagesWidgetDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesHomeScreenWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>





-(id)provideWidgetsForPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif