// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDESCROWRECORDCONTROLLER_H
#define CDPDESCROWRECORDCONTROLLER_H

@class CDPContext, AAFKeychainManager;
@protocol CDPDCircleDelegate, CDPDSecureBackupDelegate, CDPDCircleProxy, CDPDOctagonTrustProxy, CDPDSecureBackupProxy;

#import <Foundation/Foundation.h>

#import "CDPDCircleController.h"
#import "CDPDSecureBackupController.h"

@interface CDPDEscrowRecordController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>



@property (readonly, nonatomic) CDPDCircleController *circleController; // ivar: _circleController
@property (readonly, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (readonly, nonatomic) CDPContext *context; // ivar: _context
@property (readonly, nonatomic) AAFKeychainManager *keychainManager; // ivar: _keychainManager
@property (readonly, nonatomic) NSObject<CDPDOctagonTrustProxy> *octagonTrustProxy; // ivar: _octagonTrustProxy
@property (readonly, nonatomic) CDPDSecureBackupController *secureBackupController; // ivar: _secureBackupController
@property (readonly, nonatomic) NSObject<CDPDSecureBackupProxy> *secureBackupProxy; // ivar: _secureBackupProxy


-(BOOL)_clearLastEscrowRepairAttemptDate:(*id)arg0 ;
-(BOOL)_isEligibleForEscrowRecordOperationsWithError:(*id)arg0 ;
-(BOOL)_isEscrowRecordRepairPermitted;
-(BOOL)_setLastEscrowRepairAttemptDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldPerformSilentRepairForEscrowRecordState:(NSUInteger)arg0 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg0 ;
-(BOOL)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_combinedCircleStatusUsingCache:(BOOL)arg0 error:(*id)arg1 ;
-(id)_lastEscrowRepairAttemptDate:(*id)arg0 ;
-(id)_lastEscrowRepairAttemptDateDescriptor;
-(id)_predicateForRecordWithPeerID:(id)arg0 ;
-(id)_reporterWithContext:(NSUInteger)arg0 state:(NSUInteger)arg1 usingCache:(BOOL)arg2 error:(id)arg3 ;
-(id)_usableRecordsForCurrentPeer:(id)arg0 fromRecords:(id)arg1 ;
-(id)circlePeerIDForSecureBackupController:(id)arg0 ;
-(id)contextForController:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 circleProxy:(id)arg1 octagonTrustProxy:(id)arg2 secureBackupProxy:(id)arg3 ;
-(id)secureChannelContextForController:(id)arg0 ;
-(void)_beginSilentEscrowRecordRepairWithState:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_checkAllRecordsForCurrentDeviceUsingCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)_checkAllRecordsForDeviceMatchingPredicate:(id)arg0 source:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_continueSilentEscrowRecordRepairWithState:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_determineEligibilityForSilentRepairWithCompletion:(id)arg0 ;
-(void)_deviceEscrowRecordStateUsingCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)_escrowRecordStateForDevice:(id)arg0 usingCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)_fetchAllEscrowRecordsFromSource:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_performSilentEscrowRecordRepairWithCompletion:(id)arg0 ;
-(void)_shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)_tlkRecoveryViewsForRecord:(id)arg0 usingCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)circleController:(id)arg0 secureBackupRecordsArePresentWithCompletion:(id)arg1 ;
-(void)generateEscrowRecordStatusReportForLocalDeviceUsingCache:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)generateEscrowRecordStatusReportForLocalDeviceUsingFetchSource:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)performSilentEscrowRecordRepairWithCompletion:(id)arg0 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(id)arg0 ;
-(void)promptForLocalSecretWithCompletion:(id)arg0 ;
-(void)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif