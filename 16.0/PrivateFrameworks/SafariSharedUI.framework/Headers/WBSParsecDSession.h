// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECDSESSION_H
#define WBSPARSECDSESSION_H

@class GEOUserSessionEntity, WBSCompletionQuery, NSString, PARSession;
@protocol PARSessionDelegate, WBSParsecSearchSession, OS_dispatch_queue, WBSParsecSearchSessionDelegate, WBSParsecFeedbackDispatcher;

#import <Foundation/Foundation.h>

#import "WBSParsecDFeedbackDispatcher.h"
#import "WBSParsecABGroupManager.h"

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession>

 {
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    GEOUserSessionEntity *_threadUnsafeGEOUserSessionEntity;
    os_unfair_lock_s _geoUserSessionLock;
    WBSCompletionQuery *_currentQuery;
    NSString *_rewrittenQueryStringFromParsec;
    id<WBSParsecSearchSessionDelegate> *_delegate;
}


@property (readonly, nonatomic) WBSParsecABGroupManager *abGroupManager; // ivar: _abGroupManager
@property (readonly, nonatomic, getter=isABTestingEnabled) BOOL abTestingEnabled; // ivar: _abTestingEnabled
@property NSUInteger currentQueryID; // ivar: _currentQueryID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PARSession *parsecdSession; // ivar: _parsecdSession
@property (readonly, copy, nonatomic) NSString *rewrittenQueryStringFromParsec;
@property (readonly, nonatomic) BOOL skipAutoFillDataUpdates; // ivar: _skipAutoFillDataUpdates
@property (readonly) Class superclass;
@property (nonatomic, setter=setUIScale:) CGFloat uiScale; // ivar: _uiScale


+(id)_sharedSessionConfiguration;
+(id)sharedCorrectionsProcessor;
+(id)sharedDomainPolicyProvider;
+(id)sharedPARSession;
+(void)_parsecEnabledDidChange:(id)arg0 ;
+(void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg0 completionHandler:(id)arg1 ;
+(void)_updateAutoFillTLDsIfNeededForSession:(id)arg0 completionHandler:(id)arg1 ;
+(void)_updateParsecAvailabilityInSessionConfiguration:(id)arg0 ;
-(id)initWithParsecdSession:(id)arg0 skipAutoFillDataUpdates:(BOOL)arg1 ;
-(void)_didReceiveResponse:(id)arg0 error:(id)arg1 forTask:(id)arg2 query:(id)arg3 ;
-(void)_setCurrentQuery:(id)arg0 withKeyboardInputType:(id)arg1 ;
-(void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg0 ;
-(void)session:(id)arg0 bag:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)setCurrentQuery:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif