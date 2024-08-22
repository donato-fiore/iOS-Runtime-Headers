// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESWIDGETAGGREGATOR_H
#define ATXSUGGESTEDPAGESWIDGETAGGREGATOR_H

@class NSArray;
@protocol ATXSuggestedPagesWidgetDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource>

 {
    NSArray *_sources;
}




-(id)init;
-(id)initWithSources:(id)arg0 ;
-(id)provideWidgetsForPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif