// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIMATCHVERIFYPEARLOPERATION_H
#define BKUIMATCHVERIFYPEARLOPERATION_H

@class NSData, NSString, BKDevicePearl, BKIdentity, BKMatchPearlOperation;
@protocol BKMatchPearlOperationDelegate, BKUIPearlEnrollOperationsDelegate;

#import <Foundation/Foundation.h>

#import "BKUIFaceIDEnrollOperationsHandler.h"

@interface BKUIMatchVerifyPearlOperation : NSObject <BKMatchPearlOperationDelegate>



@property (retain, nonatomic) NSData *credentialSet; // ivar: _credentialSet
@property (nonatomic) int currentUIDelegateDisplaySubState; // ivar: _currentUIDelegateDisplaySubState
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateUIAtNeedsPosition; // ivar: _delegateUIAtNeedsPosition
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKDevicePearl *device; // ivar: _device
@property (nonatomic) NSUInteger enrollmentConfiguration; // ivar: _enrollmentConfiguration
@property (nonatomic) BOOL faceDetected; // ivar: _faceDetected
@property (nonatomic) NSInteger failReason; // ivar: _failReason
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKIdentity *identity; // ivar: _identity
@property (nonatomic) int lastErrorousSubState; // ivar: _lastErrorousSubState
@property (nonatomic) BOOL matchFailed; // ivar: _matchFailed
@property (retain, nonatomic) BKMatchPearlOperation *matchOperation; // ivar: _matchOperation
@property (copy, nonatomic) id *matchOperationDidMatch; // ivar: _matchOperationDidMatch
@property (retain, nonatomic) BKIdentity *matchedIdentity; // ivar: _matchedIdentity
@property (weak, nonatomic) NSObject<BKUIPearlEnrollOperationsDelegate> *operationsDelegate; // ivar: _operationsDelegate
@property (nonatomic) int substate; // ivar: _substate
@property (readonly) Class superclass;
@property (weak, nonatomic) BKUIFaceIDEnrollOperationsHandler *weakHandler; // ivar: _weakHandler


-(id)init;
-(int)substateForFaceDetectionFeedBack:(NSInteger)arg0 ;
-(void)cancelMatchOperation;
-(void)matchOperation:(id)arg0 failedWithReason:(NSInteger)arg1 ;
-(void)matchOperation:(id)arg0 matchedWithResult:(id)arg1 ;
-(void)matchOperation:(id)arg0 presenceDetectedInLockout:(NSInteger)arg1 ;
-(void)matchOperation:(id)arg0 providedFeedback:(NSInteger)arg1 ;
-(void)moveEnrollStateToNeedsPositioning:(int)arg0 ;
-(void)operation:(id)arg0 faceDetectStateChanged:(id)arg1 ;
-(void)operation:(id)arg0 stateChanged:(NSInteger)arg1 ;
-(void)retryMatchOperation;
-(void)startMatchOperationWithDevice:(id)arg0 identity:(id)arg1 credential:(id)arg2 withConfiguration:(NSUInteger)arg3 matchOperationActionBlock:(id)arg4 ;


@end


#endif