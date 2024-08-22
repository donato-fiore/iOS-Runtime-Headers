// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLENROLLOPERATIONSHANDLER_H
#define BKUIPEARLENROLLOPERATIONSHANDLER_H

@class SFClient, LAContext, NSDate, NSString, BKDevicePearl, BKEnrollPearlOperation, NSData, BKIdentity, NSMutableArray;
@protocol BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate, OS_dispatch_queue, BKUIPearlEnrollOperationsDelegate;

#import <Foundation/Foundation.h>

#import "BioStreamsEventHelper.h"

@interface BKUIPearlEnrollOperationsHandler : NSObject <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate>

 {
    SFClient *_sharingclient;
    LAContext *_authContext;
    BOOL _enrollOperationInProgress;
    NSObject<OS_dispatch_queue> *_enrollStartStopQueue;
    NSDate *_lastFaceFoundDate;
    BOOL _userSelectedUseAccessibilityEnrollment;
}


@property (nonatomic) CGFloat bioKitCompletionPercentage; // ivar: _bioKitCompletionPercentage
@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper; // ivar: _bioStreamEventHelper
@property (nonatomic) BOOL canStartEnrollmentOperation; // ivar: _canStartEnrollmentOperation
@property (copy, nonatomic) NSString *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKDevicePearl *device; // ivar: _device
@property (retain, nonatomic) BKEnrollPearlOperation *enrollOperation; // ivar: _enrollOperation
@property (nonatomic) NSUInteger enrollmentConfiguration; // ivar: _enrollmentConfiguration
@property (retain, nonatomic) NSData *externalizedAuthContext; // ivar: _externalizedAuthContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKIdentity *identity; // ivar: _identity
@property (nonatomic) BOOL inbuddy; // ivar: _inbuddy
@property (weak, nonatomic) NSObject<BKUIPearlEnrollOperationsDelegate> *operationsDelegate; // ivar: _operationsDelegate
@property (retain, nonatomic) NSMutableArray *poseStatus; // ivar: _poseStatus
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspend; // ivar: _suspend


-(BOOL)_validateEnrolledPoses:(id)arg0 ;
-(BOOL)completeCurrentEnrollOperationWithError:(*id)arg0 ;
-(BOOL)isActive;
-(id)getAuthContextForCredentialError:(*id)arg0 ;
-(id)init;
-(void)_cleanupEnroll;
-(void)_cleanupEnroll:(BOOL)arg0 ;
-(void)_removeIdentity;
-(void)advanceEnrollmentState;
-(void)cancelCurrentEnrollmentOperationIfUnfinished;
-(void)cancelEnroll;
-(void)cancelEnrollForRotation;
-(void)cleanupEnroll;
-(void)enrollOperation:(id)arg0 failedWithReason:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 finishedWithIdentity:(id)arg1 ;
-(void)enrollOperation:(id)arg0 percentCompleted:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 progressedWithInfo:(id)arg1 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)matchUserForSecondPhaseEnrollmentWithCompletionAction:(id)arg0 ;
-(void)operation:(id)arg0 faceDetectStateChanged:(id)arg1 ;
-(void)startEnroll;
-(void)startEnrollForEnrollmentType:(NSInteger)arg0 identity:(id)arg1 operationStartedActionBlock:(id)arg2 ;


@end


#endif