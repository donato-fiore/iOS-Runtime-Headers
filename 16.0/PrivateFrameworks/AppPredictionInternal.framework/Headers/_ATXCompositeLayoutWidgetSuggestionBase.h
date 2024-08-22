// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXCOMPOSITELAYOUTWIDGETSUGGESTIONBASE_H
#define _ATXCOMPOSITELAYOUTWIDGETSUGGESTIONBASE_H

@class NSString, ATXBlendingLayerHyperParameters, ATXProactiveSuggestion, ATXSuggestionLayout, NSMutableDictionary, ATXHomeScreenWidgetIdentifiable;
@protocol _ATXCompositeLayoutWidgetSuggesting, ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>

#import "_ATXHomeScreenStackState.h"

@interface _ATXCompositeLayoutWidgetSuggestionBase : NSObject <_ATXCompositeLayoutWidgetSuggesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXBlendingLayerHyperParameters *hyperParameters; // ivar: _hyperParameters
@property (readonly, nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (readonly, nonatomic) ATXProactiveSuggestion *mainSuggestionInLayout; // ivar: _mainSuggestionInLayout
@property (readonly, weak, nonatomic) _ATXHomeScreenStackState *stack; // ivar: _stack
@property (readonly, nonatomic) NSObject<ATXSuggestionDeduplicatorProtocol> *suggestionDeduplicator; // ivar: _suggestionDeduplicator
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout; // ivar: _suggestionLayout
@property (readonly, nonatomic) NSMutableDictionary *suggestionsBySuggestionLayoutTypes; // ivar: _suggestionsBySuggestionLayoutTypes
@property (readonly) Class superclass;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *widget; // ivar: _widget


-(BOOL)addSuggestion:(id)arg0 asMainSuggestion:(BOOL)arg1 ;
-(BOOL)addSuggestion:(id)arg0 asMainSuggestion:(BOOL)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)canAddSuggestion:(id)arg0 ;
-(BOOL)containsIdenticalContentOfSuggestion:(id)arg0 ;
-(BOOL)isLayoutComplete;
-(id)_existingSuggestionsInLayout;


@end


#endif