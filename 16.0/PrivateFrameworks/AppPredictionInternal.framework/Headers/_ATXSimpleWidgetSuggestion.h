// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXSIMPLEWIDGETSUGGESTION_H
#define _ATXSIMPLEWIDGETSUGGESTION_H

@class ATXProactiveSuggestion, NSString, ATXSuggestionLayout, ATXHomeScreenWidgetIdentifiable;
@protocol _ATXWidgetSuggesting, ATXSuggestionDeduplicatorProtocol;

#import <Foundation/Foundation.h>

#import "_ATXHomeScreenStackState.h"

@interface _ATXSimpleWidgetSuggestion : NSObject <_ATXWidgetSuggesting>

 {
    id<ATXSuggestionDeduplicatorProtocol> *_suggestionDeduplicator;
    ATXProactiveSuggestion *_suggestion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXProactiveSuggestion *mainSuggestionInLayout; // ivar: _mainSuggestionInLayout
@property (readonly, weak, nonatomic) _ATXHomeScreenStackState *stack; // ivar: _stack
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout; // ivar: _suggestionLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) ATXHomeScreenWidgetIdentifiable *widget; // ivar: _widget


+(BOOL)_isSuggestion:(id)arg0 compatibleWithStack:(id)arg1 ;
-(BOOL)containsIdenticalContentOfSuggestion:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 stack:(id)arg1 suggestionDeduplicator:(id)arg2 ;
-(id)initWithWidget:(id)arg0 suggestion:(id)arg1 stack:(id)arg2 suggestionDeduplicator:(id)arg3 ;
-(void)_setSuggestion:(id)arg0 ;


@end


#endif