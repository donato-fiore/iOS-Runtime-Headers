// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMEDIALIBRARYSERVICE_H
#define MLMEDIALIBRARYSERVICE_H

@class NSXPCConnection, NSMutableDictionary, NSString;
@protocol MLMediaLibraryServiceClientProtocol, OS_dispatch_queue, MLMediaLibraryServiceProtocol;

#import <Foundation/Foundation.h>


@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_serviceConnection;
    id<MLMediaLibraryServiceProtocol> *_serviceProxy;
    NSMutableDictionary *_progressBlocksByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMediaLibraryService;
+(void)_setDaemonProcessInfo:(id)arg0 ;
-(BOOL)validateDatabaseAtPath:(id)arg0 error:(*id)arg1 ;
-(id)_serviceConnection;
-(id)clientImportServiceListenerEndpointWithError:(*id)arg0 ;
-(id)init;
-(id)mediaLibraryResourcesServiceListenerEndpointWithError:(*id)arg0 ;
-(void)attemptDatabaseFileRecoveryAtPath:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg0 withPriorityLevel:(NSUInteger)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)beginTransactionForDatabaseWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelImportOperation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)checkIntegrityOfDatabaseAtPath:(id)arg0 repairFaults:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)endTransaction:(id)arg0 shouldCommit:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)executeQuery:(id)arg0 withParameters:(id)arg1 options:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id)arg4 ;
-(void)executeUpdate:(id)arg0 withParameters:(id)arg1 onTransaction:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)getLanguageResourcesWithCompletion:(id)arg0 ;
-(void)importOperationWithIdentifier:(id)arg0 didUpdateWithProgress:(float)arg1 ;
-(void)lockDatabaseForReason:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)performDatabaseOperation:(NSUInteger)arg0 withAttributes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)performDiagnosticWithCompletionHandler:(id)arg0 ;
// -(void)performImport:(id)arg0 fromSource:(NSUInteger)arg1 withProgressBlock:(id)arg2 completionHandler:(unk)arg3  ;
-(void)performMaintenanceTasksForDatabaseAtPath:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)recreateDatabaseAtPath:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)serviceTerminatedTransactionWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)setOptions:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)unlockDatabaseWithCompletion:(id)arg0 ;
-(void)updateSpotlightIndexForBundleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif