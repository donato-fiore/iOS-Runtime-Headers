// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETACTIVITYPERFORMER_H
#define SHSHEETACTIVITYPERFORMER_H

@class NSOperationQueue, NSArray;
@protocol SHSheetActivityPerformerDelegate, SHSheetActivityPerformerPresentationInterface;

#import <Foundation/Foundation.h>

#import "UIActivity.h"
#import "UIActivityViewController.h"
#import "SHSheetActivityPerformerResult.h"
#import "SHSheetSession.h"

@interface SHSheetActivityPerformer : NSObject

@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // ivar: _activityItemProviderOperationQueue
@property (retain, nonatomic) NSArray *activityItemProviderOperations; // ivar: _activityItemProviderOperations
@property (weak, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) NSUInteger backgroundTaskIdentifier; // ivar: _backgroundTaskIdentifier
@property (nonatomic) NSUInteger beginPerformingActivityTimestamp; // ivar: _beginPerformingActivityTimestamp
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<SHSheetActivityPerformerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isRunning;
@property (weak, nonatomic) NSObject<SHSheetActivityPerformerPresentationInterface> *presentationController; // ivar: _presentationController
@property (retain, nonatomic) SHSheetActivityPerformerResult *result; // ivar: _result
@property (retain, nonatomic) UIActivityViewController *retainedActivityViewController; // ivar: _retainedActivityViewController
@property (readonly, weak, nonatomic) SHSheetSession *session; // ivar: _session
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)_enqueueBackgroundOperationsIfNeeded;
-(BOOL)_presentPopoverContentViewController;
-(BOOL)_shouldExecuteItemOperation:(id)arg0 ;
-(id)_resolvedActivityItems;
-(id)initWithActivity:(id)arg0 session:(id)arg1 ;
-(void)_completePerformingActivityWithState:(NSInteger)arg0 returnedItems:(id)arg1 error:(id)arg2 ;
-(void)_configureActivityAfterPreparation;
-(void)_configureActivityBeforePreparation;
-(void)_didFinishAllBackgroundOperations;
-(void)_executeActivity;
-(void)_finishWithState:(NSInteger)arg0 ;
-(void)_handlePresentationCompletion;
-(void)_performPresentationWithViewController:(id)arg0 ;
-(void)_prepareActivityPresentation;
-(void)_prepareActivityWithCompletion:(id)arg0 ;
-(void)_start;
-(void)cancel;
-(void)dealloc;
-(void)finishWithSuccess:(BOOL)arg0 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif