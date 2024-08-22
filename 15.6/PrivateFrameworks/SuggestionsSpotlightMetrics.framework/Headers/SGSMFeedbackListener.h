// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSMFEEDBACKLISTENER_H
#define SGSMFEEDBACKLISTENER_H

@class NSCache, NSString;
@protocol SFFeedbackListener, SGSuggestionsServiceEventsProtocol;

#import <Foundation/Foundation.h>

#import "SGSMMutableSearchState.h"

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener>

 {
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id<SGSuggestionsServiceEventsProtocol> *_suggestionsService;
    NSCache *_eventLastInteractionTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_eventIdentifierFromSearchResult:(id)arg0 ;
-(id)init;
-(void)_resetState;
-(void)_restoreStateIfUnset;
-(void)_saveAndUnsetState;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didEngageSuggestion:(id)arg0 ;
-(void)didRankSections:(id)arg0 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)searchViewDidDisappear:(id)arg0 ;


@end


#endif