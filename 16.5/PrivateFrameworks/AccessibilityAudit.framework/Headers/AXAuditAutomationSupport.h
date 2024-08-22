// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITAUTOMATIONSUPPORT_H
#define AXAUDITAUTOMATIONSUPPORT_H

@class NSString, NSArray;
@protocol AXAuditerDelegate, OS_dispatch_queue, AXAuditAutomationDelegate;

#import <Foundation/Foundation.h>

#import "AXAuditer.h"
#import "AXAuditThrottler.h"

@interface AXAuditAutomationSupport : NSObject <AXAuditerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_auditQueue; // ivar: __auditQueue
@property (copy) NSString *_auditTimestamp; // ivar: __auditTimestamp
@property (retain, nonatomic) AXAuditer *_auditor; // ivar: __auditor
@property (nonatomic) *__AXObserver _axEventObserver; // ivar: __axEventObserver
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_backgroudQueue; // ivar: __backgroudQueue
@property (copy, nonatomic) id *_completionBlock; // ivar: __completionBlock
@property (nonatomic) BOOL _registeredForNotifications; // ivar: __registeredForNotifications
@property (nonatomic) BOOL _runningContinuousAudit; // ivar: __runningContinuousAudit
@property (retain, nonatomic) AXAuditThrottler *_screenChangedThrottler; // ivar: __screenChangedThrottler
@property (nonatomic) NSInteger _singleAuditPendingCount; // ivar: __singleAuditPendingCount
@property (copy, nonatomic) NSArray *auditTypes; // ivar: _auditTypes
@property (retain, nonatomic) NSArray *auditWarningsToCapture; // ivar: _auditWarningsToCapture
@property (retain, nonatomic) NSArray *auditWarningsToIgnore; // ivar: _auditWarningsToIgnore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXAuditAutomationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *elementIdentifiersToIgnore; // ivar: _elementIdentifiersToIgnore
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL runContinuousAudit; // ivar: _runContinuousAudit
@property (readonly) Class superclass;
@property (nonatomic) int targetPid; // ivar: _targetPid


+(id)_currentTimestamp;
+(id)longDescriptionForAuditIssue:(id)arg0 ;
+(id)sharedManager;
+(id)shortDescriptionForAuditIssue:(id)arg0 ;
+(struct __AXUIElement *)createAXElementForAuditIssue:(id)arg0 ;
-(BOOL)_initializeAXObserverIfNeeded;
-(BOOL)runningContinuousAudit;
-(BOOL)runningSingleAudit;
-(id)_accessibilityNotificationsForContinuousAudit;
-(id)_setupWarningsFromAuditTypes;
-(id)fetchScreenshot;
-(id)init;
-(id)screenshotHighlightingIssue:(id)arg0 ;
-(void)_captureScreenshot;
-(void)_informDelegateOfResults:(id)arg0 error:(id)arg1 ;
-(void)_registerForAXNotifications:(BOOL)arg0 ;
-(void)_runAudit;
-(void)_runNextAuditIfNeeded;
-(void)_runNextContinuousAudit;
-(void)_screenChangedNotification;
-(void)_screenChangedThrottled;
-(void)_sendResultsToDelegate:(id)arg0 ;
-(void)_setupAudit;
-(void)_startContinuousAudit;
-(void)_stopContinuousAudit;
-(void)auditer:(id)arg0 didAppendLogWithMessage:(id)arg1 ;
-(void)auditer:(id)arg0 didCompleteWithResults:(id)arg1 ;
-(void)auditer:(id)arg0 didEncounterIssue:(id)arg1 ;
-(void)startAuditWithCompletionBlock:(id)arg0 ;
-(void)startContinuousAudit;
-(void)startSingleAudit;
-(void)stopContinuousAudit;


@end


#endif