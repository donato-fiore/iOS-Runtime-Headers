// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSEARCHFEEDBACKLISTENER_H
#define ATXSEARCHFEEDBACKLISTENER_H

@class PETGoalConversionEventTracker, NSString, NSMutableSet, NSMutableArray;
@protocol SFFeedbackListener, ATXSearchFeedbackListenerTarget, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXEngagementRecordManager.h"
#import "ATXActionPredictionClient.h"
#import "ATXActionSearchResult.h"

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener>

 {
    NSObject<ATXSearchFeedbackListenerTarget> *_target;
    PETGoalConversionEventTracker *_apAppPredictionsShownTracker;
    ? _debounce;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXActionPredictionClient *_actionPredictionClient;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSString *_currentQuery;
    BOOL _didSearchDuringSession;
    NSMutableSet *_visibleActionUUIDs;
    NSMutableSet *_visibleAppUUIDs;
    NSMutableSet *_visibleAppBundleIds;
    ATXActionSearchResult *_currentResultCard;
    NSString *_appBlendingCacheId;
    NSString *_actionBlendingCacheId;
    BOOL _hasSeenSearchViewDidAppear;
    NSMutableArray *_queuedEvents;
    BOOL _currentSessionHasEngagement;
    BOOL _previousSessionHadEngagement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldDebounce; // ivar: _shouldDebounce
@property (readonly) Class superclass;


-(BOOL)_isDuplicateEventWithState:(struct ? *)arg0 timestamp:(NSUInteger)arg1 method:(SEL)arg2 ;
-(id)init;
-(id)initWithTarget:(id)arg0 engagementRecordManager:(id)arg1 actionClient:(id)arg2 tracker:(id)arg3 ;
-(void)_logAppPredictionsShown;
-(void)_resetState;
-(void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didStartSearch:(id)arg0 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)searchViewDidAppear:(id)arg0 ;
-(void)searchViewDidDisappear:(id)arg0 ;
-(void)sendUpdateNotification;
-(void)writeSpotlightEvent:(id)arg0 isViewAppearEvent:(BOOL)arg1 ;


@end


#endif