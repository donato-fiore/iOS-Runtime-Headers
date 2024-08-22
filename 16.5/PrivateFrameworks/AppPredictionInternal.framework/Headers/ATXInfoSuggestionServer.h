// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFOSUGGESTIONSERVER_H
#define ATXINFOSUGGESTIONSERVER_H

@class NSXPCListener, ATXInformationHeuristics, NSString;
@protocol NSXPCListenerDelegate, ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate;

#import <Foundation/Foundation.h>

#import "ATXInformationEngine.h"
#import "ATXRSWidgetSuggestionProducer.h"
#import "ATXInfoSuggestionCriterionRegistry.h"

@interface ATXInfoSuggestionServer : NSObject <NSXPCListenerDelegate, ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate>

 {
    NSXPCListener *_xpcListener;
    ATXInformationEngine *_engine;
    ATXRSWidgetSuggestionProducer *_relevantShortcutSuggestionProducer;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXInformationHeuristics *_informationHeuristics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXInformationEngine *infoEngine;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_processIncomingSuggestion:(id)arg0 sourceIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_processIncomingSuggestions:(id)arg0 sourceIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithInfoEngine:(id)arg0 rsSuggestionProducer:(id)arg1 infoHeuristics:(id)arg2 criterionRegistry:(id)arg3 xpcListener:(id)arg4 ;
-(void)_addSuggestions:(id)arg0 forSourceIdentifier:(id)arg1 needReset:(BOOL)arg2 errorHandler:(id)arg3 ;
-(void)clearSuggestionsForInfoSourceIdentifier:(id)arg0 errorHandler:(id)arg1 ;
-(void)dealloc;
-(void)getSuggestionsForInfoSourceIdentifier:(id)arg0 withReply:(id)arg1 ;
-(void)informationHeuristics:(id)arg0 didUpdateSuggestions:(id)arg1 forHeuristic:(id)arg2 ;
-(void)insertSuggesions:(id)arg0 forInfoSourceIdentifier:(id)arg1 errorHandler:(id)arg2 ;
-(void)overwriteSuggestionsWithProactiveSuggestions:(id)arg0 forClientModelIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)refreshInfoSuggestionsWithCompletionHandler:(id)arg0 ;
-(void)resetSuggestionsTo:(id)arg0 forInfoSourceIdentifier:(id)arg1 errorHandler:(id)arg2 ;
-(void)retrieveAvailableCriterionIdentifiersForSourceIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)stackDidRotateProactivelyForInfoSuggestion:(id)arg0 isStalenessRotation:(BOOL)arg1 ;
-(void)timelineDidReloadForWidget:(id)arg0 parentApp:(id)arg1 withEntries:(id)arg2 completion:(id)arg3 ;
-(void)userDidDismissSuggestion:(id)arg0 isDismissalLongTerm:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif