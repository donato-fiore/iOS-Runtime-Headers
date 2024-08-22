// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKSESSION_H
#define TFFEEDBACKSESSION_H

@class NSString, NSURL, ASDBetaAppLaunchInfo;
@protocol TFDataAggregatorDelegate, TFFeedbackSessionDelegate, TFFeedbackSubmissionService;

#import <Foundation/Foundation.h>

#import "TFFeedbackFormViewController.h"
#import "TFDataAggregator.h"
#import "TFFeedbackDataContainer.h"

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate>



@property (weak, nonatomic) TFFeedbackFormViewController *activeFormViewController; // ivar: _activeFormViewController
@property (readonly, nonatomic) TFDataAggregator *aggregator; // ivar: _aggregator
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (nonatomic) NSUInteger currentPhase; // ivar: _currentPhase
@property (readonly, nonatomic) TFFeedbackDataContainer *dataContainer; // ivar: _dataContainer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TFFeedbackSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSnapshot; // ivar: _didSnapshot
@property (nonatomic) BOOL forcePrefilledEmailViewVariant; // ivar: _forcePrefilledEmailViewVariant
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) ASDBetaAppLaunchInfo *launchInfo; // ivar: _launchInfo
@property (readonly, copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, nonatomic) NSObject<TFFeedbackSubmissionService> *submissionService; // ivar: _submissionService
@property (readonly) Class superclass;
@property (nonatomic, getter=isWaitingOnAggregatorForSubmission) BOOL waitingOnAggregatorForSubmission; // ivar: _waitingOnAggregatorForSubmission


-(id)_associatePrefilledEmailIfNeeded;
-(id)_currentContextStringDescription;
-(id)_displayableErrorMessageFromService:(id)arg0 submissionError:(id)arg1 ;
-(id)_generateFormForCurrentState;
-(id)createFeedbackViewControllerForCurrentState;
-(id)initForContext:(NSUInteger)arg0 betaApplicationBundleURL:(id)arg1 ;
-(id)initForContext:(NSUInteger)arg0 betaApplicationIdentifier:(id)arg1 ;
-(id)initForContext:(NSUInteger)arg0 betaApplicationLoadableBundleURL:(id)arg1 ;
-(id)initForContext:(NSUInteger)arg0 withTestingWithLaunchInfo:(id)arg1 ;
-(id)initWithBetaApplicationIdentifier:(id)arg0 ;
-(void)_abortFeedbackSubmissionForViewController:(id)arg0 withError:(id)arg1 ;
-(void)_beginFeedbackSubmisionForViewController:(id)arg0 ;
-(void)_finishFeedbackSubmissionForViewController:(id)arg0 ;
-(void)associateComments:(id)arg0 ;
-(void)associateEmail:(id)arg0 ;
-(void)associateIncidentId:(id)arg0 ;
-(void)associateScreenshotImages:(id)arg0 ;
-(void)cancelFeedbackForActiveFormViewController;
-(void)commonInitWithContext:(NSUInteger)arg0 ;
-(void)dataAggregator:(id)arg0 didCompleteTasks:(id)arg1 ;
-(void)initiateFeedbackSnapshot;
-(void)submitCrashFeedback;
-(void)submitFeedbackForActiveFormViewController;


@end


#endif