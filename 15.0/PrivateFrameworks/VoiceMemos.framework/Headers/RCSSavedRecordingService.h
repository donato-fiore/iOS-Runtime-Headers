// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCSSAVEDRECORDINGSERVICE_H
#define RCSSAVEDRECORDINGSERVICE_H

@class NSHashTable, NSMutableDictionary, NSSet, NSString, NSXPCConnection;
@protocol RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _compositionAVURLsBeingExportedDistributedNotificationToken;
    int _compositionAVURLsBeingModifiedDistributedNotificationToken;
    id<RCSSavedRecordingServiceProtocol> *_serviceProxy;
    id<RCSSavedRecordingServiceProtocol> *_synchronousServiceProxy;
    NSHashTable *_interruptionObservers;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSMutableDictionary *_pendingSynchronousServiceCompletionHandlers;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSSet *compositionAVURLsBeingExported; // ivar: _compositionAVURLsBeingExported
@property (retain, nonatomic) NSSet *compositionAVURLsBeingModified; // ivar: _compositionAVURLsBeingModified
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDatabaseAvailable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)isRunningInSavedRecordingDaemon;
+(id)changeToken;
+(id)sharedService;
+(void)setChangeToken:(id)arg0 ;
-(BOOL)closeAudioFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)endAccessSessionWithToken:(id)arg0 error:(*id)arg1 ;
-(id)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id)arg0 ;
-(id)init;
-(id)openAudioFile:(id)arg0 settings:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)prepareToCaptureToCompositionAVURL:(id)arg0 error:(*id)arg1 ;
-(id)prepareToExportCompositionAVURL:(id)arg0 cacheWaveform:(BOOL)arg1 error:(*id)arg2 ;
-(id)prepareToPreviewCompositionAVURL:(id)arg0 error:(*id)arg1 ;
-(id)prepareToTrimCompositionAVURL:(id)arg0 error:(*id)arg1 ;
-(id)serviceProxy;
-(id)synchronousServiceProxy;
-(void)__fetchAllAccessTokens:(id)arg0 ;
-(void)_fetchAllAccessTokens:(id)arg0 ;
-(void)_handleCompositionAVURLsBeingExportedDidChange;
-(void)_handleCompositionAVURLsBeingModifiedDidChange;
-(void)_invalidatePendingSynchronousCompletionHandlersWithError:(id)arg0 ;
-(void)_onQueueCloseServiceConnection;
-(void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg0 withError:(id)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg0 ;
-(void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(id)arg0 ;
// -(void)_sendServiceMessage:(SEL)arg0 accessRequestReplyBlock:(id)arg1 messagingBlock:(unk)arg2  ;
// -(void)_sendServiceMessage:(SEL)arg0 connectionFailureReplyInfo:(id)arg1 infoAndErrorReplyHandler:(id)arg2 messagingBlock:(unk)arg3  ;
// -(void)_sendServiceMessage:(SEL)arg0 connectionFailureReplyInfo:(id)arg1 infoAndErrorReplyHandler:(id)arg2 withServiceProxy:(unk)arg3 messagingBlock:(id)arg4  ;
// -(void)_sendServiceMessage:(SEL)arg0 importRequestReplyBlock:(id)arg1 messagingBlock:(unk)arg2  ;
// -(void)_sendServiceMessage:(SEL)arg0 withBasicReplyBlock:(id)arg1 messagingBlock:(unk)arg2  ;
// -(void)_sendServiceMessage:(SEL)arg0 withBasicReplyBlock:(id)arg1 withServiceProxy:(unk)arg2 messagingBlock:(id)arg3  ;
// -(void)_sendSynchronousServiceMessage:(SEL)arg0 accessRequestReplyBlock:(id)arg1 messagingBlock:(unk)arg2  ;
// -(void)_sendSynchronousServiceMessage:(SEL)arg0 connectionFailureReplyInfo:(id)arg1 infoAndErrorReplyHandler:(id)arg2 messagingBlock:(unk)arg3  ;
// -(void)_sendSynchronousServiceMessage:(SEL)arg0 withBasicReplyBlock:(id)arg1 messagingBlock:(unk)arg2  ;
-(void)addInterruptionObserver:(id)arg0 ;
-(void)checkRecordingAvailability:(id)arg0 ;
-(void)clearAndReloadSearchMetadataWithCompletionBlock:(id)arg0 ;
-(void)closeAudioFile:(id)arg0 completionBlock:(id)arg1 ;
-(void)closeServiceConnection;
-(void)dealloc;
-(void)disableCloudRecordingsSaveLocalCopies:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)disableOrphanHandlingWithCompletionBlock:(id)arg0 ;
-(void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)enableCloudRecordingsWithCompletionBlock:(id)arg0 ;
-(void)enableOrphanHandlingWithCompletionBlock:(id)arg0 ;
-(void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg0 ;
-(void)endAccessSessionWithToken:(id)arg0 completionBlock:(id)arg1 ;
-(void)exportRecordingsToCloud:(id)arg0 ;
-(void)expungeRecordingsFromCloud:(id)arg0 ;
-(void)fetchCompositionAVURLsBeingExported:(id)arg0 ;
-(void)fetchCompositionAVURLsBeingModified:(id)arg0 ;
-(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 userInfo:(id)arg3 importCompletionBlock:(id)arg4 ;
-(void)importRecordingsFromCloud:(id)arg0 ;
-(void)openAudioFile:(id)arg0 settings:(id)arg1 metadata:(id)arg2 accessRequestHandler:(id)arg3 ;
-(void)openServiceConnection;
-(void)performDatabaseMigrationWithCompletionBlock:(id)arg0 ;
-(void)prepareToCaptureToCompositionAVURL:(id)arg0 accessRequestHandler:(id)arg1 ;
-(void)prepareToExportCompositionAVURL:(id)arg0 cacheWaveform:(BOOL)arg1 accessRequestHandler:(id)arg2 ;
-(void)prepareToPreviewCompositionAVURL:(id)arg0 accessRequestHandler:(id)arg1 ;
-(void)prepareToTrimCompositionAVURL:(id)arg0 accessRequestHandler:(id)arg1 ;
-(void)reloadExistingSearchMetadataWithCompletionBlock:(id)arg0 ;
-(void)removeAllUserDataWithCompletion:(id)arg0 ;
-(void)removeInterruptionObserver:(id)arg0 ;
-(void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg0 recordingURIsToUpdate:(id)arg1 recordingURIsToDelete:(id)arg2 completionBlock:(id)arg3 ;
-(void)writeAudioFile:(id)arg0 buffer:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif