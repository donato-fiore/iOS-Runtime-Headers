// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXHOMESCREENSTACKSTATE_H
#define _ATXHOMESCREENSTACKSTATE_H

@class ATXBlendingLayerHyperParameters, ATXHomeScreenStackConfig, NSArray, NSMutableArray, NSMutableDictionary;
@protocol ATXSuggestionDeduplicatorProtocol, _ATXWidgetSuggesting;

#import <Foundation/Foundation.h>

#import "ATXStackStateTracker.h"
#import "_ATXHomeScreenPageState.h"

@interface _ATXHomeScreenStackState : NSObject {
    ATXStackStateTracker *_stackStateTracker;
    id<ATXSuggestionDeduplicatorProtocol> *_suggestionDeduplicator;
    ATXBlendingLayerHyperParameters *_hyperParameters;
    id<_ATXWidgetSuggesting> *_topOfStackSuggestion;
}


@property (readonly, nonatomic) ATXHomeScreenStackConfig *config; // ivar: _config
@property (readonly, weak, nonatomic) _ATXHomeScreenPageState *page; // ivar: _page
@property (readonly, nonatomic) NSArray *previousSuggestedWidgets; // ivar: _previousSuggestedWidgets
@property (readonly, nonatomic) NSObject<_ATXWidgetSuggesting> *previousTopOfStackSuggestion; // ivar: _previousTopOfStackSuggestion
@property (readonly, nonatomic) NSMutableArray *suggestedWidgets; // ivar: _suggestedWidgets
@property (readonly, nonatomic) NSMutableDictionary *suggestionsWidgetSuggestionsByWidgetUniqueId; // ivar: _suggestionsWidgetSuggestionsByWidgetUniqueId
@property (retain, nonatomic) NSObject<_ATXWidgetSuggesting> *topOfStackSuggestion;


-(BOOL)containsIdenticalContentOfSuggestion:(id)arg0 ignoreDuplicatesInSGWidget:(BOOL)arg1 ignoreDuplicatesInPanels:(BOOL)arg2 ;
-(BOOL)containsSuggestedWidgetForApp:(id)arg0 ;
-(BOOL)containsWidgetForAction:(id)arg0 ;
-(BOOL)containsWidgetForApp:(id)arg0 ;
-(BOOL)isStale;
-(BOOL)mostRecentRotationOfStackIsSystemInitiated;
-(BOOL)previousSuggestedWidgetsContainIdenticalContentOfSuggestion:(id)arg0 ;
-(BOOL)previousTopWidgetWasShowingIdenticalContentOfSuggestion:(id)arg0 ;
-(BOOL)sizeIsCompatibleWithWidgetSuggestion:(id)arg0 ;
-(BOOL)topWidgetIsShowingIdenticalContentOfSuggestion:(id)arg0 ignoreDuplicatesInSGWidget:(BOOL)arg1 ignoreDuplicatesInPanels:(BOOL)arg2 ;
// -(id)_firstWidgetPassingTest:(id)arg0 considerSuggestedWidgets:(unk)arg1  ;
-(id)_previousSuggestionForMemberWidget:(id)arg0 ;
-(id)init;
-(id)initWithPageState:(id)arg0 stackConfig:(id)arg1 stackStateTracker:(id)arg2 suggestionDeduplicator:(id)arg3 hyperParameters:(id)arg4 ;
-(id)previousTopWidget;
-(id)widgetForSuggestion:(id)arg0 considerSuggestedWidgets:(BOOL)arg1 ;


@end


#endif