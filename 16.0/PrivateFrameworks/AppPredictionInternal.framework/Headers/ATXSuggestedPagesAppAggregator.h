// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESAPPAGGREGATOR_H
#define ATXSUGGESTEDPAGESAPPAGGREGATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXSuggestedPagesTunableConstants.h"

@interface ATXSuggestedPagesAppAggregator : NSObject {
    NSArray *_sources;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}




-(NSInteger)_sortApp1:(id)arg0 app2:(id)arg1 appLaunchCounts:(id)arg2 ;
-(id)_dockedApps;
-(id)_sortedApps:(id)arg0 sortedFirstPageApps:(id)arg1 appLaunchCounts:(id)arg2 ;
-(id)_sortedAppsOnFirstHomeScreenPage;
-(id)init;
-(id)initWithSources:(id)arg0 ;
-(id)provideAppsForSuggestedPageType:(NSInteger)arg0 candidateApps:(id)arg1 environment:(id)arg2 ;
-(void)_validateApps:(id)arg0 pageType:(NSInteger)arg1 ;
-(void)_validateApps:(id)arg0 withAppLaunchCounts:(id)arg1 ;


@end


#endif