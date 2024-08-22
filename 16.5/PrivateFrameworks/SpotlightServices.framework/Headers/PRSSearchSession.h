// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSSEARCHSESSION_H
#define PRSSEARCHSESSION_H

@class NSMutableArray, NSString, NSDictionary, NSSet, PARSession, NSArray;
@protocol PARSessionDelegate, PRSSessionController, OS_dispatch_queue, SFFeedbackListener, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PRSFeedbackProxy.h"
#import "SSPlistDataReader.h"

@interface PRSSearchSession : NSObject <PARSessionDelegate>

 {
    NSMutableArray *_feedback;
    id<PRSSessionController> *_client;
    CGFloat _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    BOOL _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
}


@property (readonly, nonatomic) NSSet *appBlocklist;
@property (readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
@property (readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property BOOL configuredSession; // ivar: _configuredSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSString *experimentNamespaceId; // ivar: _experimentNamespaceId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClientOnlyExperiment; // ivar: _isClientOnlyExperiment
@property (readonly, nonatomic) BOOL isInReservedAllocationForExperiment; // ivar: _isInReservedAllocationForExperiment
@property (readonly, nonatomic) NSObject<SFFeedbackListener> *listener;
@property (readonly, nonatomic) NSString *modelL2Version; // ivar: _modelL2Version
@property (retain) NSObject<OS_dispatch_source> *quiescenceTimer; // ivar: _quiescenceTimer
@property CGFloat retryAfter; // ivar: _retryAfter
@property (readonly, nonatomic) CGFloat searchRenderTimeout;
@property (retain) PARSession *session; // ivar: _session
@property (nonatomic) CGFloat sessionStartTime; // ivar: _sessionStartTime
@property (readonly, nonatomic) CGFloat suggestionsRenderTimeout;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedServices; // ivar: _supportedServices
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain) NSString *userAgent; // ivar: _userAgent


-(id)feedbackListener;
-(id)getQueryTaskForHandler:(id)arg0 scaleFactor:(CGFloat)arg1 whyQuery:(NSUInteger)arg2 ;
-(id)initWithClient:(id)arg0 clientQueue:(id)arg1 ;
-(id)initWithClient:(id)arg0 clientQueue:(id)arg1 config:(id)arg2 session:(id)arg3 ;
-(id)queryTaskWithEngagedSuggestion:(id)arg0 externalId:(unsigned int)arg1 handler:(id)arg2 queryContext:(id)arg3 queryIdent:(NSUInteger)arg4 ;
-(id)queryTaskWithString:(id)arg0 externalId:(unsigned int)arg1 handler:(id)arg2 queryContext:(id)arg3 queryIdent:(NSUInteger)arg4 ;
-(void)activate;
-(void)deactivate;
-(void)getCachedQueries:(*id)arg0 results:(*id)arg1 webSearch:(BOOL)arg2 ;
-(void)getFTEStringsWithReply:(id)arg0 ;
-(void)queryCompleted:(id)arg0 ;
-(void)session:(id)arg0 bag:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)setFeedbackStartTime;
-(void)setParsecFeedbackAllowed:(BOOL)arg0 ;
-(void)setQueryLanguage:(id)arg0 ;
-(void)shrinkCaches;
-(void)warmup;


@end


#endif