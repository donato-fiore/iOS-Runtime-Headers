// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPQUERYTASK_H
#define SPQUERYTASK_H

@class NSArray, NSString;
@protocol OS_dispatch_queue, SPQueryTaskDelegate;

#import <Foundation/Foundation.h>

#import "SPQueryResponse.h"

@interface SPQueryTask : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SPQueryResponse *_delayedResponse;
    NSArray *_supportedAppScopes;
    BOOL _sentSuggestions;
    uint8_t _updatesDisabled;
    uint8_t _deferredUpdate;
}


@property (weak, nonatomic) NSObject<SPQueryTaskDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL forceStableResults; // ivar: _forceStableResults
@property (nonatomic) BOOL live; // ivar: _live
@property (nonatomic) NSUInteger maxTopHitAppResults; // ivar: _maxTopHitAppResults
@property NSInteger maxUISuggestions; // ivar: _maxUISuggestions
@property (nonatomic) NSUInteger queryKind; // ivar: _queryKind
@property (readonly) NSObject<OS_dispatch_queue> *queryProcessor; // ivar: _queryProcessor
@property (retain, nonatomic) NSString *rankingDebugLog; // ivar: _rankingDebugLog
@property (readonly) NSString *searchString;
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *sessionEntityString; // ivar: _sessionEntityString
@property (retain) NSArray *showMoreInAppInfo; // ivar: _showMoreInAppInfo
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) int unsafeState; // ivar: _unsafeState
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
-(void)updateResultsThroughDelegate:(BOOL)arg0 state:(int)arg1 sections:(id)arg2 ;
-(void)updateResultsThroughDelegate:(BOOL)arg0 state:(int)arg1 unchanged:(BOOL)arg2 sections:(id)arg3 ;


@end


#endif