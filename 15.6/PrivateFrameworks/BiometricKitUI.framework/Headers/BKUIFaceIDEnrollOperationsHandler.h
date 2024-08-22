// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIFACEIDENROLLOPERATIONSHANDLER_H
#define BKUIFACEIDENROLLOPERATIONSHANDLER_H

@class SFClient, LAContext, NSDate, NSString, BKDevicePearl, BKEnrollPearlOperation, NSData, BKIdentity, NSMutableArray;
@protocol BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate, OS_dispatch_queue, BKUIPearlEnrollOperationsDelegate;

#import <Foundation/Foundation.h>

#import "BioStreamsEventHelper.h"
#import "BKUIMatchVerifyPearlOperation.h"

@interface BKUIFaceIDEnrollOperationsHandler : NSObject <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate>

 {
    SFClient *_sharingclient;
    LAContext *_authContext;
    BOOL _enrollOperationInProgress;
    NSObject<OS_dispatch_queue> *_enrollStartStopQueue;
    NSDate *_lastFaceFoundDate;
}


@property (nonatomic) CGFloat bioKitCompletionPercentage; // ivar: _bioKitCompletionPercentage
@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper; // ivar: _bioStreamEventHelper
@property (nonatomic) BOOL canStartEnrollmentOperation; // ivar: _canStartEnrollmentOperation
@property (nonatomic) BOOL centerBinComplete; // ivar: _centerBinComplete
@property (copy, nonatomic) NSString *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKDevicePearl *device; // ivar: _device
@property (retain, nonatomic) BKEnrollPearlOperation *enrollOperation; // ivar: _enrollOperation
@property (nonatomic) NSUInteger enrollmentConfiguration; // ivar: _enrollmentConfiguration
@property (nonatomic) NSInteger enrollmentType; // ivar: _enrollmentType
@property (retain, nonatomic) NSData *externalizedAuthContext; // ivar: _externalizedAuthContext
@property (nonatomic) BOOL glassesEnforcementError; // ivar: _glassesEnforcementError
@property (nonatomic) BOOL glassesFound; // ivar: _glassesFound
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKIdentity *identity; // ivar: _identity
@property (nonatomic) BOOL inbuddy; // ivar: _inbuddy
@property (retain, nonatomic) BKUIMatchVerifyPearlOperation *matchOperation; // ivar: _matchOperation
@property (copy, nonatomic) id *matchUserThenDoSingleEnrollmentCompletion; // ivar: _matchUserThenDoSingleEnrollmentCompletion
@property (weak, nonatomic) NSObject<BKUIPearlEnrollOperationsDelegate> *operationsDelegate; // ivar: _operationsDelegate
@property (retain, nonatomic) NSMutableArray *poseStatus; // ivar: _poseStatus
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsPeriocularEnrollment; // ivar: _supportsPeriocularEnrollment
@property (nonatomic, getter=isSuspended) BOOL suspend; // ivar: _suspend
@property (nonatomic) BOOL userSelectedUseAccessibilityEnrollment; // ivar: _userSelectedUseAccessibilityEnrollment


+(id)handlersForEnrollmentConfiguration:(NSUInteger)arg0 inBuddy:(BOOL)arg1 delegate:(id)arg2 credential:(id)arg3 externalizedAuthContext:(id)arg4 ;
-(BOOL)_completeOperationWithError:(*id)arg0 ;
-(BOOL)_matchOperationPreflightCheck:(*id)arg0 ;
-(BOOL)_startOperationWithError:(*id)arg0 ;
-(BOOL)_validateEnrolledPoses:(id)arg0 ;
-(BOOL)completeCurrentEnrollOperationWithError:(*id)arg0 ;
-(BOOL)hasPeriocularIdentityEnrolled;
-(BOOL)isActive;
-(BOOL)isEnrollmentAugmentationOnly;
-(BOOL)shouldShowRetryUI;
-(NSInteger)glassesRequirement;
-(id)bkIdentities;
-(id)getAuthContextForCredentialError:(*id)arg0 ;
-(id)getAuthContextForCredentialError:(*id)arg0 authContext:(*id)arg1 ;
-(id)init;
-(id)initWithBKPearlEnrollmentType:(NSInteger)arg0 ;
-(void)_cleanupEnroll;
-(void)_cleanupEnroll:(BOOL)arg0 ;
-(void)_removeIdentity;
-(void)advanceEnrollmentState;
-(void)cancelCurrentEnrollmentOperationIfUnfinished;
-(void)cancelEnroll;
-(void)cancelEnrollForRotation;
-(void)cleanupEnroll;
-(void)enrollOperation:(id)arg0 failedWithReason:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 finishedWithEnrollResult:(id)arg1 ;
-(void)enrollOperation:(id)arg0 percentCompleted:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 progressedWithInfo:(id)arg1 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)matchOperation:(id)arg0 failedToMatchWithUserPositionSubstate:(int)arg1 operationCompleteAction:(id)arg2 ;
-(void)matchUserForGlassesPhaseEnrollmentWithCompletionAction:(id)arg0 ;
-(void)matchUserForSecondPhaseEnrollmentWithCompletionAction:(id)arg0 ;
-(void)matchUserThenDoSingleEnrollmentWithExisitingEnrollmentConfigCompletionAction:(id)arg0 ;
-(void)operation:(id)arg0 faceDetectStateChanged:(id)arg1 ;
-(void)retryOperation;
-(void)retryPressed;
-(void)startEnroll;
-(void)startEnrollForEnrollmentType:(NSInteger)arg0 glassesRequirement:(NSInteger)arg1 identity:(id)arg2 operationStartedActionBlock:(id)arg3 ;


@end


#endif