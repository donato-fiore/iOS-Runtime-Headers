// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASACTIVITY_H
#define _DASACTIVITY_H

@class NSString, _DASAssertion, NSDate, NSArray, NSMutableDictionary, NSDictionary, NSUUID;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DASFileProtection.h"

@interface _DASActivity : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (nonatomic) BOOL afterUserIsInactive; // ivar: _afterUserIsInactive
@property (nonatomic) BOOL allowsCompanionExpensiveNetworking;
@property (retain, nonatomic) _DASAssertion *assertion; // ivar: _assertion
@property (nonatomic) BOOL beforeApplicationLaunch;
@property (nonatomic) BOOL beforeDaysFirstActivity; // ivar: _beforeDaysFirstActivity
@property (nonatomic) BOOL beforeUserIsActive; // ivar: _beforeUserIsActive
@property (nonatomic) BOOL budgeted; // ivar: _budgeted
@property (nonatomic) NSUInteger budgetingToken; // ivar: _budgetingToken
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL bypassesPredictions; // ivar: _bypassesPredictions
@property (nonatomic) BOOL cancelAfterDeadline; // ivar: _cancelAfterDeadline
@property (retain, nonatomic) NSString *clientDataBudgetName; // ivar: _clientDataBudgetName
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSString *clientProvidedIdentifier;
@property (retain, nonatomic) NSDate *clientProvidedStartDate;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger completionStatus; // ivar: _completionStatus
@property (nonatomic) BOOL cpuIntensive; // ivar: _cpuIntensive
@property (nonatomic) BOOL darkWakeEligible; // ivar: _darkWakeEligible
@property (nonatomic) BOOL dataBudgeted; // ivar: _dataBudgeted
@property (nonatomic) BOOL deferred; // ivar: _deferred
@property (nonatomic) BOOL delayedStart; // ivar: _delayedStart
@property (nonatomic) BOOL diskIntensive; // ivar: _diskIntensive
@property (nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (retain) NSDate *endTime; // ivar: _endTime
@property (copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) _DASFileProtection *fileProtection; // ivar: _fileProtection
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (nonatomic) BOOL hasMagneticSensitivity;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSArray *involvedProcesses; // ivar: _involvedProcesses
@property (nonatomic) BOOL isContactTracingBackgroundActivity;
@property (nonatomic) BOOL isMLBackgroundActivity; // ivar: _isMLBackgroundActivity
@property (nonatomic) BOOL isUpload; // ivar: _isUpload
@property (nonatomic) CGFloat lastComputedScore; // ivar: _lastComputedScore
@property NSUInteger lastDenialValue; // ivar: _lastDenialValue
@property (retain) NSDate *lastScored; // ivar: _lastScored
@property (copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (nonatomic) BOOL memoryIntensive; // ivar: _memoryIntensive
@property (nonatomic) NSInteger motionState; // ivar: _motionState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat percentCompleted; // ivar: _percentCompleted
@property (nonatomic) int pid; // ivar: _pid
@property (retain) NSMutableDictionary *policyReasons; // ivar: _policyReasons
@property (retain) NSMutableDictionary *policyScores; // ivar: _policyScores
@property (nonatomic) NSInteger preClearedMode; // ivar: _preClearedMode
@property (nonatomic) CGFloat predictedOptimalScore; // ivar: _predictedOptimalScore
@property (retain) NSDate *predictedOptimalStartDate; // ivar: _predictedOptimalStartDate
@property (nonatomic) BOOL preventDeviceSleep; // ivar: _preventDeviceSleep
@property (retain, nonatomic) NSArray *relatedApplications; // ivar: _relatedApplications
@property (nonatomic) NSInteger relevancy; // ivar: _relevancy
@property (nonatomic) BOOL requestsApplicationLaunch; // ivar: _requestsApplicationLaunch
@property (nonatomic) BOOL requestsExtensionLaunch; // ivar: _requestsExtensionLaunch
@property (nonatomic) BOOL requestsNewsstandLaunch;
@property (nonatomic) BOOL requiresBuddyComplete; // ivar: _requiresBuddyComplete
@property (nonatomic) BOOL requiresDeviceInactivity; // ivar: _requiresDeviceInactivity
@property (nonatomic) BOOL requiresInexpensiveNetworking; // ivar: _requiresInexpensiveNetworking
@property (nonatomic) BOOL requiresNetwork; // ivar: _requiresNetwork
@property (nonatomic) BOOL requiresPlugin; // ivar: _requiresPlugin
@property (nonatomic) BOOL requiresSignificantUserInactivity;
@property (nonatomic) BOOL requiresUnconstrainedNetworking; // ivar: _requiresUnconstrainedNetworking
@property (nonatomic) BOOL runOnAppForeground; // ivar: _runOnAppForeground
@property (retain, nonatomic) NSArray *schedulerRecommendedApplications; // ivar: _schedulerRecommendedApplications
@property (nonatomic) NSUInteger schedulingPriority; // ivar: _schedulingPriority
@property (nonatomic) BOOL shouldBePersisted; // ivar: _shouldBePersisted
@property (retain) NSDate *startAfter; // ivar: _startAfter
@property (retain) NSDate *startBefore; // ivar: _startBefore
@property (retain) NSDictionary *startConditions; // ivar: _startConditions
@property (retain) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) id *startHandler; // ivar: _startHandler
@property (retain, nonatomic) NSDate *submitDate; // ivar: _submitDate
@property (nonatomic) BOOL supportsAnyApplication; // ivar: _supportsAnyApplication
@property (copy, nonatomic) id *suspendHandler; // ivar: _suspendHandler
@property (nonatomic) BOOL suspendRequested; // ivar: _suspendRequested
@property (nonatomic) BOOL suspendable; // ivar: _suspendable
@property (nonatomic) NSInteger targetDevice; // ivar: _targetDevice
@property (nonatomic) NSUInteger transferSize;
@property (nonatomic) BOOL triggersRestart; // ivar: _triggersRestart
@property (nonatomic) NSUInteger uploadSize; // ivar: _uploadSize
@property (nonatomic) unsigned int userIdentifier; // ivar: _userIdentifier
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (nonatomic) BOOL userRequestedBackupTask;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) BOOL wasForceRun; // ivar: _wasForceRun
@property (retain, nonatomic) NSString *widgetBudgetID; // ivar: _widgetBudgetID


+(BOOL)supportsSecureCoding;
+(NSUInteger)cleanDuration:(NSUInteger)arg0 ;
+(NSUInteger)cleanSchedulingPriority:(NSUInteger)arg0 ;
+(NSUInteger)cleanTransferSize:(NSUInteger)arg0 ;
+(id)activityWithName:(id)arg0 priority:(NSUInteger)arg1 duration:(NSUInteger)arg2 startingAfter:(id)arg3 startingBefore:(id)arg4 ;
+(id)anyApplicationActivityWithName:(id)arg0 priority:(NSUInteger)arg1 duration:(NSUInteger)arg2 startingAfter:(id)arg3 startingBefore:(id)arg4 limitedToApplications:(id)arg5 ;
+(id)applicationLaunchActivityWithName:(id)arg0 priority:(NSUInteger)arg1 forApplication:(id)arg2 withReason:(id)arg3 duration:(NSUInteger)arg4 startingAfter:(id)arg5 startingBefore:(id)arg6 ;
+(id)extensionLaunchActivityWithName:(id)arg0 priority:(NSUInteger)arg1 forApplication:(id)arg2 forExtensionIdentifier:(id)arg3 withReason:(id)arg4 duration:(NSUInteger)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)extensionLaunchActivityWithName:(id)arg0 priority:(NSUInteger)arg1 forApplication:(id)arg2 withReason:(id)arg3 duration:(NSUInteger)arg4 startingAfter:(id)arg5 startingBefore:(id)arg6 ;
+(id)extensionLaunchActivityWithName:(id)arg0 priority:(NSUInteger)arg1 forExtensionIdentifier:(id)arg2 withReason:(id)arg3 duration:(NSUInteger)arg4 startingAfter:(id)arg5 startingBefore:(id)arg6 ;
+(id)launchForRemoteNotificationWithTopic:(id)arg0 withPayload:(id)arg1 highPriority:(BOOL)arg2 ;
+(id)launchWithTopic:(id)arg0 forReason:(id)arg1 withPayload:(id)arg2 highPriority:(BOOL)arg3 ;
+(id)networkingActivityWithName:(id)arg0 priority:(NSUInteger)arg1 downloadSize:(NSUInteger)arg2 uploadSize:(NSUInteger)arg3 expensiveNetworkingAllowed:(BOOL)arg4 startingAfter:(id)arg5 startingBefore:(id)arg6 ;
+(id)networkingActivityWithName:(id)arg0 priority:(NSUInteger)arg1 transferSize:(NSUInteger)arg2 isUpload:(BOOL)arg3 expensiveNetworkingAllowed:(BOOL)arg4 startingAfter:(id)arg5 startingBefore:(id)arg6 ;
+(id)prettySchedulingPriorityDescription:(NSUInteger)arg0 ;
+(id)sharedDateFormatter;
+(id)validClassesForUserInfoSerialization;
+(id)validateBGTaskRequestWithActivity:(id)arg0 ;
-(BOOL)dataBudgetingEnabled;
-(BOOL)hasManyConstraints;
-(BOOL)isBackgroundTaskActivity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdenticalLaunchTo:(id)arg0 ;
-(BOOL)isIntensive;
-(BOOL)isSilentPush;
-(BOOL)keepsPrevious;
-(BOOL)noTransferSizeSpecified;
-(BOOL)overdueAtDate:(id)arg0 ;
-(BOOL)overwritesPrevious;
-(BOOL)shouldReplaceActivity:(id)arg0 andKeepsSubmitted:(*BOOL)arg1 ;
-(BOOL)significantlyOverdueAtDate:(id)arg0 ;
-(BOOL)timewiseEligibleAtDate:(id)arg0 ;
-(CGFloat)compatibilityWith:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 priority:(NSUInteger)arg1 duration:(NSUInteger)arg2 startingAfter:(id)arg3 startingBefore:(id)arg4 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reconcileWithActivity:(id)arg0 ;
-(void)setConstraintsWithXPCDictionary:(id)arg0 ;
-(void)setObject:(id)arg0 forUserInfoKey:(id)arg1 ;
-(void)updateGroupIfNecessary;


@end


#endif