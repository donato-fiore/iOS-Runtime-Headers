// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCORESCAN_H
#define SUCORESCAN_H

@class NSString, MAAsset, SUCoreFSM;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SUCoreDescriptor.h"
#import "SUCoreMobileAsset.h"
#import "SUCorePolicy.h"

@interface SUCoreScan : NSObject

@property (retain, nonatomic) SUCoreDescriptor *activeDescriptor; // ivar: _activeDescriptor
@property (retain, nonatomic) NSString *alternateAssetAudienceUUID; // ivar: _alternateAssetAudienceUUID
@property (copy, nonatomic) id *cancelCompletion; // ivar: _cancelCompletion
@property (nonatomic) BOOL cancelingOperation; // ivar: _cancelingOperation
@property (copy, nonatomic) id *checkCompletion; // ivar: _checkCompletion
@property (copy, nonatomic) id *checkMajorMinorCompletion; // ivar: _checkMajorMinorCompletion
@property (copy, nonatomic) id *checkSlowReleaseCompletion; // ivar: _checkSlowReleaseCompletion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue; // ivar: _clientCompletionQueue
@property (copy, nonatomic) id *collectCompletion; // ivar: _collectCompletion
@property (nonatomic) BOOL downloadDocumentation; // ivar: _downloadDocumentation
@property (copy, nonatomic) id *locateCompletion; // ivar: _locateCompletion
@property (retain, nonatomic) SUCoreMobileAsset *maDocumentationControl; // ivar: _maDocumentationControl
@property (nonatomic) int operation; // ivar: _operation
@property (nonatomic) int operationSPIType; // ivar: _operationSPIType
@property (nonatomic) int pendingMobileAssetRequests; // ivar: _pendingMobileAssetRequests
@property (retain, nonatomic) MAAsset *primaryUpdateAsset; // ivar: _primaryUpdateAsset
@property (retain, nonatomic) NSObject<OS_os_transaction> *scanCancelTransaction; // ivar: _scanCancelTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *scanCheckTransaction; // ivar: _scanCheckTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *scanCollectTransaction; // ivar: _scanCollectTransaction
@property (readonly, nonatomic) SUCoreFSM *scanFSM; // ivar: _scanFSM
@property (retain, nonatomic) NSObject<OS_os_transaction> *scanLocateTransaction; // ivar: _scanLocateTransaction
@property (retain, nonatomic) SUCorePolicy *scanPolicy; // ivar: _scanPolicy
@property (readonly, nonatomic) NSString *scanUUID; // ivar: _scanUUID
@property (retain, nonatomic) NSObject<OS_os_transaction> *scanVerifyTransaction; // ivar: _scanVerifyTransaction
@property (retain, nonatomic) MAAsset *secondaryUpdateAsset; // ivar: _secondaryUpdateAsset
@property (retain, nonatomic) SUCoreDescriptor *slowReleasePrimaryDescriptor; // ivar: _slowReleasePrimaryDescriptor
@property (nonatomic) BOOL slowReleaseScanPerformed; // ivar: _slowReleaseScanPerformed
@property (retain, nonatomic) SUCoreDescriptor *slowReleaseSecondaryDescriptor; // ivar: _slowReleaseSecondaryDescriptor
@property (copy, nonatomic) id *verifyCompletion; // ivar: _verifyCompletion


+(id)_generateStateTable;
-(BOOL)_decideAndProcessSlowReleaseUpdateFoundPrimary:(id)arg0 foundSecondary:(id)arg1 error:(id)arg2 ;
-(BOOL)_shouldPerformAlternateScanFromFoundDescriptor:(id)arg0 policy:(id)arg1 ;
-(NSInteger)_decrementMobileAssetPending:(id)arg0 ;
-(NSInteger)_downloadCatalog:(id)arg0 withIdentifier:(id)arg1 ;
-(NSInteger)a_SimCatalogDownloadSuccess:(*id)arg0 ;
-(NSInteger)a_SimQueryMetadataUpdateAvailable:(*id)arg0 ;
-(NSInteger)actionAfterAvailCancelSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAfterFailCancelSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAfterFailCheckCancelDone:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAlterDocDownloadConfig:(*id)arg0 ;
-(NSInteger)actionCancelDocCatalogDownload:(*id)arg0 ;
-(NSInteger)actionCancelDone:(*id)arg0 ;
-(NSInteger)actionCancelRemoveFailed:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionCancelSUCatalogDownload:(*id)arg0 ;
-(NSInteger)actionCancelSuccess:(*id)arg0 ;
-(NSInteger)actionCheckCancelDone:(*id)arg0 ;
-(NSInteger)actionDownloadDocAsset:(*id)arg0 ;
-(NSInteger)actionDownloadDocCatalog:(*id)arg0 ;
-(NSInteger)actionDownloadSUCatalog:(*id)arg0 ;
-(NSInteger)actionQueryDocMetadata:(*id)arg0 ;
-(NSInteger)actionQuerySUMetadata:(*id)arg0 ;
-(NSInteger)actionRemoveDocAsset:(*id)arg0 ;
-(NSInteger)actionScanCompleteNoUpdate:(*id)arg0 ;
-(NSInteger)actionScanFailed:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionScanSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionUnknownAction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)performAction:(id)arg0 onEvent:(id)arg1 inState:(id)arg2 withInfo:(id)arg3 nextState:(id)arg4 error:(*id)arg5 ;
-(id)_simDescriptorAttributes;
-(id)description;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 withCompletionQueue:(id)arg1 ;
-(void)_cancelCompleteWithError:(id)arg0 ;
// -(void)_cancelEndComplete:(id)arg0 error:(unk)arg1 clearingTransaction:(id)arg2  ;
// -(void)_checkEndComplete:(id)arg0 scanPolicy:(unk)arg1 primary:(id)arg2 secondary:(id)arg3 error:(id)arg4 clearingTransaction:(id)arg5  ;
// -(void)_checkMajorMinorEndComplete:(id)arg0 scanPolicy:(unk)arg1 majorPrimary:(id)arg2 majorSecondary:(id)arg3 minorPrimary:(id)arg4 minorSecondary:(id)arg5 error:(id)arg6 clearingTransaction:(id)arg7  ;
// -(void)_checkSlowReleaseEndComplete:(id)arg0 scanPolicy:(unk)arg1 primary:(id)arg2 secondary:(id)arg3 error:(id)arg4 clearingTransaction:(id)arg5  ;
-(void)_clearCurrentOperation;
// -(void)_collectEndComplete:(id)arg0 scanPolicy:(unk)arg1 active:(id)arg2 error:(id)arg3 clearingTransaction:(id)arg4  ;
-(void)_filterDocQueryResults:(id)arg0 ;
-(void)_filterSUQueryResults:(id)arg0 ;
-(void)_filterSUQueryResultsForSPITypeMajorMinorFromQuery:(id)arg0 ;
-(void)_filterSUQueryResultsForSPITypeSingleFromQuery:(id)arg0 ;
-(void)_incrementMobileAssetPending:(id)arg0 ;
-(void)_invalidOperation:(id)arg0 ;
// -(void)_locateEndComplete:(id)arg0 scanPolicy:(unk)arg1 primary:(id)arg2 secondary:(id)arg3 error:(id)arg4 clearingTransaction:(id)arg5  ;
-(void)_operationCompleting:(id)arg0 error:(id)arg1 clearingTransaction:(BOOL)arg2 ;
-(void)_scanCompleteFoundPrimary:(id)arg0 foundSecondary:(id)arg1 majorPrimary:(id)arg2 majorSecondary:(id)arg3 minorPrimary:(id)arg4 minorSecondary:(id)arg5 clearingOperation:(BOOL)arg6 error:(id)arg7 ;
-(void)_trackScanBegin:(id)arg0 ;
-(void)_trackScanBegin:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_trackScanEnd:(id)arg0 withIdentifier:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)_trackScanEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
// -(void)_verifyEndComplete:(id)arg0 scanPolicy:(unk)arg1 active:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(id)arg6  ;
-(void)alterCurrentPolicy:(id)arg0 ;
-(void)cancelCurrentScan:(id)arg0 ;
-(void)checkForAvailableMajorMinorUpdatesWithPolicy:(id)arg0 completion:(id)arg1 ;
-(void)checkForAvailableSlowReleaseUpdatesWithPolicy:(id)arg0 completion:(id)arg1 ;
-(void)checkForAvailableUpdateWithPolicy:(id)arg0 completion:(id)arg1 ;
-(void)collectDocumentationMetadataWithPolicy:(id)arg0 descriptor:(id)arg1 downloadDocumentation:(BOOL)arg2 completion:(id)arg3 ;
-(void)locateAvailableUpdateWithPolicy:(id)arg0 completion:(id)arg1 ;
-(void)verifyLatestAvailableWithPolicy:(id)arg0 descriptor:(id)arg1 completion:(id)arg2 ;


@end


#endif