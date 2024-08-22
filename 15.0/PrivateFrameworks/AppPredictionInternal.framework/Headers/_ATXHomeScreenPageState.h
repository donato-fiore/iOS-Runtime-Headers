// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXHOMESCREENPAGESTATE_H
#define _ATXHOMESCREENPAGESTATE_H

@class ATXHomeScreenPage, NSArray;

#import <Foundation/Foundation.h>

#import "ATXStackStateTracker.h"
#import "_ATXHomeScreenState.h"

@interface _ATXHomeScreenPageState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
}


@property (readonly, nonatomic) ATXHomeScreenPage *config; // ivar: _config
@property (readonly, weak, nonatomic) _ATXHomeScreenState *homeScreen; // ivar: _homeScreen
@property (readonly, nonatomic) NSArray *stacks; // ivar: _stacks


-(BOOL)_isShowingApp:(id)arg0 allowFolder:(BOOL)arg1 ;
-(BOOL)containsSGWidget;
-(BOOL)containsSuggestedWidgetForApp:(id)arg0 ;
-(BOOL)containsWidgetForAction:(id)arg0 ;
-(BOOL)isSeldomVisited;
-(BOOL)isShowingDuplicatedContentForSuggestion:(id)arg0 considerUnderStackContents:(BOOL)arg1 dedupeAppSuggestionsByWidgets:(BOOL)arg2 ignoreDuplicatesInSGWidget:(BOOL)arg3 ignoreDuplicatesInPanels:(BOOL)arg4 ;
-(BOOL)suggestionsWidgetOnPageIsShowingDuplicatedContentForSuggestion:(id)arg0 ;
-(id)init;
-(id)initWithHomeScreenState:(id)arg0 pageConfig:(id)arg1 stackStateTracker:(id)arg2 suggestionDeduplicator:(id)arg3 hyperParameters:(id)arg4 ;
-(id)pinnedAPPs;
-(id)pinnedSGWidgets;


@end


#endif