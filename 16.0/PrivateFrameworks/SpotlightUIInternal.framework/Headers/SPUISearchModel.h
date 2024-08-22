// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUISEARCHMODEL_H
#define SPUISEARCHMODEL_H

@class NSString, SPQueryResponse, SPQueryTask, SFResultSection, NSArray;
@protocol SPQueryTaskDelegate, SPSearchAgentDelegate;

#import <Foundation/Foundation.h>


@interface SPUISearchModel : NSObject <SPQueryTaskDelegate>

 {
    NSInteger _updatesDisabled;
    NSString *_lastQueryString;
}


@property (weak) NSObject<SPSearchAgentDelegate> *delegate; // ivar: _delegate
@property BOOL forceStableResults; // ivar: _forceStableResults
@property BOOL infinitePatience; // ivar: _infinitePatience
@property (retain) SPQueryResponse *lastResponse; // ivar: _lastResponse
@property NSInteger maxUISuggestions;
@property BOOL queryComplete; // ivar: _queryComplete
@property BOOL queryPartiallyComplete; // ivar: _queryPartiallyComplete
@property (retain) SPQueryTask *queryTask; // ivar: _queryTask
@property (readonly) SFResultSection *searchThroughSection; // ivar: _searchThroughSection
@property (readonly) NSArray *sections;
@property BOOL springBoardIsActive; // ivar: _springBoardIsActive
@property (readonly) BOOL wantsCompletions;


+(id)sharedFullZWKInstance;
+(id)sharedGeneralInstance;
+(id)sharedInstance;
+(void)preheat;
+(void)retrieveFirstTimeExperienceTextWithReply:(id)arg0 ;
-(BOOL)_suggestionsReadyForDisplay;
-(BOOL)queryInProgress;
-(void)activate;
-(void)clear;
-(void)deactivate;
-(void)didReceiveResponse:(id)arg0 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)invalidate;
-(void)invalidateCurrentQuery;
-(void)invalidateQuery:(id)arg0 ;
-(void)resultsDidBecomeInvalid:(id)arg0 ;
-(void)updateWithQueryContext:(id)arg0 ;
-(void)updateWithResponse:(id)arg0 ;
-(void)updatesDisabled;
-(void)updatesEnabled;


@end


#endif