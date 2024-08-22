// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPQUERYTASK_H
#define SPQUERYTASK_H

@class NSMutableArray, SPSearchQueryContext, SPSearchQuery, NSString, NSArray, SPDaemonQueryToken;
@protocol SPQueryTaskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPQueryTask : NSObject {
    uint8_t _updatesDisabled;
    uint8_t _deferredUpdate;
}


@property (weak, nonatomic) NSObject<SPQueryTaskDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property BOOL forceStableResults; // ivar: _forceStableResults
@property (nonatomic) BOOL live; // ivar: _live
@property (nonatomic) NSUInteger maxTopHitAppResults; // ivar: _maxTopHitAppResults
@property NSInteger maxUISuggestions; // ivar: _maxUISuggestions
@property (retain) NSMutableArray *mutableSections; // ivar: _mutableSections
@property (retain, nonatomic) SPSearchQueryContext *previousQueryContext; // ivar: _previousQueryContext
@property (retain, nonatomic) SPSearchQuery *query; // ivar: _query
@property (nonatomic) NSUInteger queryKind; // ivar: _queryKind
@property (retain) NSObject<OS_dispatch_queue> *queryProcessor; // ivar: _queryProcessor
@property (retain, nonatomic) NSString *rankingDebugLog; // ivar: _rankingDebugLog
@property (readonly) NSString *searchString;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *sessionEntityString; // ivar: _sessionEntityString
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) SPDaemonQueryToken *token; // ivar: _token
@property (readonly, nonatomic) NSArray *unsafeCombinedSuggestions; // ivar: _unsafeCombinedSuggestions
@property (readonly, nonatomic) NSArray *unsafeParsecSuggestions; // ivar: _unsafeParsecSuggestions
@property (readonly, nonatomic) NSArray *unsafeSections; // ivar: _unsafeSections
@property (readonly, nonatomic) NSString *unsafeSessionEntityString; // ivar: _unsafeSessionEntityString
@property (nonatomic) NSUInteger unsafeState; // ivar: _unsafeState
@property (nonatomic) NSUInteger whyQuery; // ivar: _whyQuery


+(void)initialize;
-(BOOL)readyToUpdate;
-(id)init;
-(void)cancel;
-(void)clear;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)postSearchAgentUpdatedResultsToDelegate:(id)arg0 ;
-(void)pushAndPostUpdates;
-(void)start;
-(void)updateResultsThroughDelegate:(BOOL)arg0 state:(NSUInteger)arg1 sections:(id)arg2 ;
-(void)updateResultsThroughDelegate:(BOOL)arg0 state:(NSUInteger)arg1 unchanged:(BOOL)arg2 sections:(id)arg3 ;


@end


#endif