// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTEXTUALACTIONSUGGESTER_H
#define WFCONTEXTUALACTIONSUGGESTER_H

@class NSUUID, CAXSuggestionProvider;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFContextualActionSuggester : NSObject

@property (readonly, nonatomic) NSUUID *lastSuggestionSessionUUID; // ivar: _lastSuggestionSessionUUID
@property (readonly, nonatomic) CAXSuggestionProvider *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)shouldShowInitialSuggestionsForContext:(id)arg0 ;
-(id)init;
-(id)initialSuggestionsForContextIfApplicable:(id)arg0 numSuggestions:(NSUInteger)arg1 ;
-(void)reportEvent:(NSUInteger)arg0 inContext:(id)arg1 involvingActions:(id)arg2 ;
-(void)suggestActionsForContext:(id)arg0 numSuggestions:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif