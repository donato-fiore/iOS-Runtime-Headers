// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIAGNOSTICSTORAGEMANAGER_H
#define DIAGNOSTICSTORAGEMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SymptomsFileCleanerDelegate, DiagnosticCaseManagerStorageDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ABCPersistentStoreController.h"
#import "ABCFileCleaner.h"

@interface DiagnosticStorageManager : NSObject <SymptomsFileCleanerDelegate, DiagnosticCaseManagerStorageDelegate>

 {
    NSUInteger _lastCalculatedDiskUsageSize;
    NSMutableArray *_casesSortedByDate;
    NSMutableDictionary *_payloadsByCaseID;
    NSObject<OS_dispatch_queue> *_queue;
    ABCPersistentStoreController *_storeController;
    NSString *_logArchivePath;
}


@property (retain, nonatomic) ABCFileCleaner *abcCleaner; // ivar: _abcCleaner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)allowableDiskUsageSize;
-(NSUInteger)deleteAttachmentFiles:(id)arg0 ;
-(NSUInteger)performPeriodicPurge;
-(NSUInteger)performPurgeToMeetDiskUsageLimit:(NSUInteger)arg0 calculateOnly:(BOOL)arg1 ;
-(id)initWithPersistentStoreController:(id)arg0 logArchiveDirectory:(id)arg1 ;
-(void)_autoBugCaptureDiskUsageSize:(id)arg0 ;
-(void)_calculatePurgableSizeForRequestedPurgeSize:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)_inspectAutoBugCaptureDiskUsage:(id)arg0 ;
-(void)_performSizedPurge:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)_purgeCasesWithCaseIDs:(id)arg0 ;
-(void)_sortedAutoBugCaptureDiskUsageByCase:(id)arg0 ;
-(void)cleanupCasesAfterACentralizedCacheDeletePurgeEvent:(id)arg0 ;
-(void)deleteAttachmentsAtPaths:(id)arg0 ;
-(void)deleteAttachmentsForCases:(id)arg0 ;
-(void)didSaveDiagnosticCases;
-(void)fileCleanupComplete;
-(void)invalidateDiskUsageStatistics;
-(void)purgeAttachmentsAtPaths:(id)arg0 ;
-(void)purgeAttachmentsForAllCases;
-(void)purgeDEPayloadForCase:(id)arg0 ;
-(void)removeCaseStorageAndAttachmentsForCasesWithUUIDs:(id)arg0 ;


@end


#endif