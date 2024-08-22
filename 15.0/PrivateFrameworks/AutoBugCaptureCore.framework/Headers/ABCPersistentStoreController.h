// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABCPERSISTENTSTORECONTROLLER_H
#define ABCPERSISTENTSTORECONTROLLER_H

@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

#import <Foundation/Foundation.h>

#import "AnalyticsWorkspace.h"

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}


@property (weak, nonatomic) NSObject<ABCPersistentStoreControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) AnalyticsWorkspace *workspace;


-(BOOL)prepareWorkspaceWithDirectoryPath:(id)arg0 ;
-(id)caseStorageAnalytics;
-(id)caseSummaryAnalytics;
-(id)caseUsageAnalytics;
-(id)init;
-(id)initWithDirectory:(id)arg0 ;
-(id)initWithName:(id)arg0 inDirectory:(id)arg1 ;
-(id)prepareDataDirectoryWithName:(id)arg0 containerPath:(id)arg1 ;
-(id)uploadRecordAnalytics;
-(void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)arg0 reply:(id)arg1 ;
-(void)caseAttachmentsForDiagnosticCaseIDs:(id)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)cleanupDiagnosticCaseStorage;
-(void)cleanupDiagnosticCaseSummary;
-(void)cleanupDiagnosticCaseUsage;
-(void)cleanupUploadRecord;
-(void)removeAllCaseStorages;
-(void)removeCaseStorageWithID:(id)arg0 ;
-(void)removeCaseStoragesWithCaseIDs:(id)arg0 ;
-(void)removeCaseStoragesWithUUIDs:(id)arg0 ;
-(void)save;
-(void)save:(BOOL)arg0 ;
-(void)shutdown;


@end


#endif