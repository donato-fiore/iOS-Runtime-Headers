// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDKITUPLOADCONTROLLER_H
#define CLOUDKITUPLOADCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AnalyticsWorkspace.h"
#import "DiagnosticCaseStorageAnalytics.h"
#import "DiagnosticCaseSummaryAnalytics.h"
#import "UploadRecordAnalytics.h"

@interface CloudKitUploadController : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseStorageAnalytics *_caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics *_caseSummaryAnalytics;
    UploadRecordAnalytics *_uploadRecordAnalytics;
    NSUInteger _outstandingOperationCount;
    BOOL _aggregateOperationResult;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(void)unregisterCloudKitUploadActivities;
-(BOOL)logUploadRequiresConsent:(id)arg0 ;
-(BOOL)shouldDeferFromCloudKitError:(id)arg0 ;
-(BOOL)validateCaseAttachmentsForDiagnosticCaseStorage:(id)arg0 record:(id)arg1 ;
-(id)_fetchCasesInternal:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_fetchRecentPendingCaseSummariesInternal:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)currentCloudKitContainerForEnvironment:(NSInteger)arg0 ;
-(id)fetchCaseSummariesWithIdentifiers:(id)arg0 ;
-(id)fetchCasesWithIdentifiers:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)fetchRecentCasesPendingUpload:(NSUInteger)arg0 ;
-(id)fetchRecentPendingCaseSummaries:(NSUInteger)arg0 ;
-(id)initWithWorkspace:(id)arg0 ;
-(id)locallyFilterCases:(id)arg0 ;
-(id)processCloudkitDecisionServiceResponse:(id)arg0 ;
-(id)randomlySelectCasesFrom:(id)arg0 maximum:(NSUInteger)arg1 ;
-(id)uploadOperationWithRecordsToSave:(id)arg0 recordIDsToDelete:(id)arg1 allowCellular:(BOOL)arg2 activity:(id)arg3 ;
-(void)_save;
-(void)ckcodeDecisionService:(id)arg0 response:(id)arg1 ;
-(void)configureCaseSummaryDiscretionaryActivityCriteria:(id)arg0 ;
-(void)configureLogUploadDiscretionaryActivityCriteria:(id)arg0 ;
-(void)configureWorkspace:(id)arg0 ;
-(void)deferXPCActivity:(id)arg0 ;
-(void)filterCasesPendingUpload:(id)arg0 activity:(id)arg1 reply:(id)arg2 ;
-(void)filterCasesViaCloudkitDecisionService:(id)arg0 activity:(id)arg1 response:(id)arg2 ;
-(void)finishXPCActivity:(id)arg0 ;
-(void)operationCompletedWithID:(id)arg0 savedRecords:(id)arg1 deletedRecords:(id)arg2 error:(id)arg3 activity:(id)arg4 ;
-(void)performSubmissionOfCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)performSubmissionOfRecentCaseSummaries:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)performUploadDecisionForCaseIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)performUploadForCaseIdentifiers:(id)arg0 ;
-(void)performUploadForRecentCases:(NSUInteger)arg0 ;
-(void)recordOperationCompleteForOperationID:(id)arg0 completionTime:(id)arg1 success:(BOOL)arg2 ;
-(void)registerCaseSummaryActivities;
-(void)registerCloudKitUploadActivities;
-(void)registerLogUploadActivities;
-(void)save;
-(void)startPeriodicSummaryTask:(id)arg0 ;
-(void)startPeriodicUploadTask:(id)arg0 ;
-(void)submitCaseSummaries:(id)arg0 activity:(id)arg1 ;
-(void)submitCaseSummariesWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)submitRecentCaseSummaries:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)uploadCasesWithIdentifiers:(id)arg0 ;
-(void)uploadDecisionWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)uploadDiagnosticCases:(id)arg0 activity:(id)arg1 ;
-(void)uploadMostRecentCases:(NSUInteger)arg0 ;
-(void)uploadToCloudKitContainer:(id)arg0 withRecords:(id)arg1 activity:(id)arg2 ;


@end


#endif