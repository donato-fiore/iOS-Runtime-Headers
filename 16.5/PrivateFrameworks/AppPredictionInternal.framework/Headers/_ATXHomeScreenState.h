// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXHOMESCREENSTATE_H
#define _ATXHOMESCREENSTATE_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface _ATXHomeScreenState : NSObject

@property (readonly, nonatomic) NSSet *appsOnDock; // ivar: _appsOnDock
@property (readonly, nonatomic) NSArray *sortedPagesByUserLastVisit; // ivar: _sortedPagesByUserLastVisit


-(BOOL)containsSuggestedWidgetForApp:(id)arg0 ;
-(BOOL)containsWidgetForAction:(id)arg0 ;
-(BOOL)isShowingDuplicatedContentForSuggestion:(id)arg0 considerUnderStackContents:(BOOL)arg1 dedupeAppSuggestionsByWidgets:(BOOL)arg2 ignoreDuplicatesInSGWidget:(BOOL)arg3 ignoreDuplicatesInPanels:(BOOL)arg4 ignoreTodayPage:(BOOL)arg5 ;
-(id)init;
-(id)initWithSortedHomeScreenPagesByUserLastVisit:(id)arg0 appsOnDock:(id)arg1 stackStateTracker:(id)arg2 suggestionDeduplicator:(id)arg3 hyperParameters:(id)arg4 ;


@end


#endif