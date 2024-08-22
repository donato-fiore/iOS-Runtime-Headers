// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNIVERSALSEARCHCOMPLETIONPROVIDER_H
#define UNIVERSALSEARCHCOMPLETIONPROVIDER_H

@class NSTimer, NSString, WBSCompletionQuery, NSNumber;
@protocol WBSParsecSearchSessionDelegate;


#import "CompletionProvider.h"
#import "UniversalSearchSession.h"

@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate>

 {
    NSTimer *_timeoutTimer;
    NSString *_queryString;
    NSString *_currentQueryString;
    WBSCompletionQuery *_currentQuery;
    NSString *_keyboardInputMode;
    BOOL _enabledByBag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *minRenderTimeout; // ivar: _minRenderTimeout
@property (readonly, nonatomic) NSNumber *otherRenderTimeout; // ivar: _otherRenderTimeout
@property (retain, nonatomic) UniversalSearchSession *parsecSearchSession; // ivar: _parsecSearchSession
@property (retain, nonatomic) NSNumber *searchRenderTimeout; // ivar: _searchRenderTimeout
@property (readonly) Class superclass;


-(BOOL)shouldHideParsecResult:(id)arg0 basedOnHideRankGivenTopHit:(id)arg1 indexOfTopHitInFrequentlyVisitedSites:(*NSUInteger)arg2 ;
-(NSUInteger)maximumCachedCompletionCount;
-(id)completionsForQuery:(id)arg0 ;
-(id)currentInputTypeForSession:(id)arg0 ;
-(id)init;
-(void)_parsecBagDidLoad:(id)arg0 ;
-(void)_updateInputMode:(id)arg0 ;
-(void)_updateStateFromBag:(id)arg0 ;
-(void)currentKeyboardIdentifierWithLayoutsForSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)session:(id)arg0 didReceiveResults:(id)arg1 forQuery:(id)arg2 ;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif