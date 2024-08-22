// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDFILETRANSFERCENTER_H
#define IMDFILETRANSFERCENTER_H

@class NSMutableDictionary, NSMutableSet, NSTimer, NSMutableArray, NSString;
@protocol IMFileCopierDelegate;

#import <Foundation/Foundation.h>


@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate>

 {
    NSMutableDictionary *_guidToCopierMap;
    NSMutableDictionary *_guidToSimpleCopierMap;
    NSMutableDictionary *_guidToTransferMap;
    NSMutableSet *_activeTransfers;
    NSTimer *_transferTimer;
    NSMutableArray *_transferringTransfers;
    NSMutableSet *_activeExplicitlyRequestedTransfers;
}


@property (retain, nonatomic) NSString *contextStamp; // ivar: _contextStamp
@property (readonly, nonatomic) BOOL hasActiveFileTransfers;


+(id)fileTransferErrorWithReason:(NSInteger)arg0 description:(id)arg1 ;
+(id)localFileURLRetrievalErrorWithReason:(NSInteger)arg0 description:(id)arg1 ;
+(id)localFileURLRetrievalErrorWithReason:(NSInteger)arg0 underlyingReason:(NSInteger)arg1 description:(id)arg2 ;
+(id)sharedInstance;
-(BOOL)__im_ff_isBlastDoorAttachmentPreviewEnabled;
-(BOOL)_shouldDownloadAssetForTransfer:(id)arg0 forMessageItem:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStats:(id)arg0 originalSyncState:(NSInteger)arg1 ;
-(BOOL)_transferRequiresPreviewSizing:(id)arg0 ;
-(BOOL)hasActiveExplicitlyRequestedFileTransfers;
-(BOOL)initiateExplicitDownloadWithGUID:(id)arg0 ;
-(BOOL)initiateHighQualityDownload:(id)arg0 ;
-(BOOL)isSafeToDeleteTransferAttachmentPath:(id)arg0 ;
-(BOOL)markAttachment:(id)arg0 sender:(id)arg1 recipients:(id)arg2 isIncoming:(BOOL)arg3 ;
-(BOOL)populateLocalURLsForTransfer:(id)arg0 fromCKRecord:(id)arg1 ;
-(BOOL)registerGUID:(id)arg0 forNewOutgoingTransferWithLocalURL:(id)arg1 ;
-(id)_allFileTransfers;
-(id)_attachmentStoreSharedInstance;
-(id)_createWrapperForTransfer:(id)arg0 ;
-(id)_dictionaryRepresentationsForFileTransfers:(id)arg0 toSave:(BOOL)arg1 ;
-(id)_getNewFileTransferForStoredAttachmentPayloadDataWithTransferGUID:(id)arg0 messageGUID:(id)arg1 ;
-(id)_messageStoreSharedInstance;
-(id)_progressForTransferGUID:(id)arg0 allowCreate:(BOOL)arg1 path:(id)arg2 ;
-(id)_removeWrapperForTransfer:(id)arg0 ;
-(id)_statsCollector;
-(id)_transcodeControllerSharedInstance;
-(id)guidForNewIncomingTransferWithFilename:(id)arg0 isDirectory:(BOOL)arg1 totalBytes:(NSUInteger)arg2 hfsType:(unsigned int)arg3 hfsCreator:(unsigned int)arg4 hfsFlags:(unsigned short)arg5 ;
-(id)guidForNewOutgoingTransferWithFilename:(id)arg0 isDirectory:(BOOL)arg1 totalBytes:(NSUInteger)arg2 hfsType:(unsigned int)arg3 hfsCreator:(unsigned int)arg4 hfsFlags:(unsigned short)arg5 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg0 ;
-(id)guidsForStoredAttachmentPayloadData:(id)arg0 messageGUID:(id)arg1 ;
-(id)guidsForStoredAttachmentPayloadDataURLs:(id)arg0 messageGUID:(id)arg1 ;
-(id)init;
-(id)transferForGUID:(id)arg0 ;
-(id)updateTransfersWithCKRecord:(id)arg0 recordWasFetched:(BOOL)arg1 downloadAsset:(*BOOL)arg2 ;
-(struct IMPreviewConstraints )_clientPreviewConstraints;
-(void)_addActiveExplicitlyRequestedTransfer:(id)arg0 ;
-(void)_addActiveTransfer:(id)arg0 ;
-(void)_addGatekeeperProperties:(id)arg0 toDirectory:(id)arg1 ;
-(void)_addGatekeeperProperties:(id)arg0 toFileAtPath:(id)arg1 ;
-(void)_addSpotlightPropertiesFromFileTransfer:(id)arg0 toDirectory:(id)arg1 ;
-(void)_addTransfer:(id)arg0 forGUID:(id)arg1 shouldNotify:(BOOL)arg2 ;
-(void)_addTransfer:(id)arg0 forGUID:(id)arg1 shouldNotify:(BOOL)arg2 forceNotify:(BOOL)arg3 ;
-(void)_addTransferringTransfer:(id)arg0 ;
-(void)_archiveFileTransfer:(id)arg0 ;
-(void)_clearProgressForTransferGUID:(id)arg0 ;
-(void)_completeExplicitDownloadForTransfer:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_completeProgressForTransferGUID:(id)arg0 ;
-(void)_handleFileTransfer:(id)arg0 acceptedWithPath:(id)arg1 autoRename:(BOOL)arg2 overwrite:(BOOL)arg3 options:(NSInteger)arg4 postNotification:(BOOL)arg5 ;
-(void)_handleFileTransfer:(id)arg0 createdWithProperties:(id)arg1 withAuditToken:(struct ? )arg2 ;
-(void)_handleFileTransfer:(id)arg0 updatedWithProperties:(id)arg1 ;
-(void)_handleFileTransferRemoved:(id)arg0 ;
-(void)_handleFileTransferStopped:(id)arg0 ;
-(void)_handleFileTransfers:(id)arg0 autoRename:(BOOL)arg1 overwrite:(BOOL)arg2 options:(NSInteger)arg3 postNotification:(BOOL)arg4 ;
-(void)_handleSendFileTransfer:(id)arg0 ;
-(void)_postUpdated:(id)arg0 ;
-(void)_postUpdated:(id)arg0 forceNotify:(BOOL)arg1 ;
-(void)_removeActiveExplicitlyRequestedTransfer:(id)arg0 ;
-(void)_removeActiveTransfer:(id)arg0 ;
-(void)_removeTransferringTransfer:(id)arg0 ;
-(void)_reset;
-(void)_transferTimerTick:(id)arg0 ;
-(void)_updateContextStamp;
-(void)_updateSyncStatsForAttachments:(id)arg0 incrementTotalAttachmentCount:(NSUInteger)arg1 ;
-(void)_updateTransferGUID:(id)arg0 toGUID:(id)arg1 ;
-(void)acceptTransfer:(id)arg0 path:(id)arg1 ;
-(void)addDefaultGatekeeperPropertiesToDirectory:(id)arg0 ;
-(void)addTransfer:(id)arg0 forGUID:(id)arg1 ;
-(void)addTransfer:(id)arg0 forGUID:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)archiveFileTransfer:(id)arg0 ;
-(void)assignTransfer:(id)arg0 toAccount:(id)arg1 otherPerson:(id)arg2 ;
-(void)broadcastTransfersWithGUIDs:(id)arg0 atLocalPaths:(id)arg1 ;
-(void)checkAndCompleteExplicitDownloadForTransfer:(id)arg0 ;
-(void)dealloc;
-(void)endTransfer:(id)arg0 ;
-(void)endTransfer:(id)arg0 overrideFinalFileName:(id)arg1 ;
-(void)failTransfer:(id)arg0 error:(id)arg1 ;
-(void)failTransfer:(id)arg0 reason:(NSInteger)arg1 ;
-(void)failTransferPreviewGeneration:(id)arg0 ;
-(void)fileCopierDidFinish:(id)arg0 ;
-(void)fileCopierDidStart:(id)arg0 ;
-(void)makeNewIncomingTransferWithGUID:(id)arg0 filename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(NSUInteger)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6 ;
-(void)makeNewOutgoingTransferWithGUID:(id)arg0 filename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(NSUInteger)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6 ;
-(void)markTransferAsNotSuccessfullyDownloadedFromCloud:(id)arg0 ;
-(void)markTransferAsNotSyncedSuccessfully:(id)arg0 ;
-(void)removeTransferForGUID:(id)arg0 ;
-(void)removeUnassignedTransfers;
-(void)resetSyncStateForRecord:(id)arg0 toState:(NSInteger)arg1 ;
-(void)resetTransfer:(id)arg0 andPostReason:(NSInteger)arg1 ;
-(void)resetTransferAndPostError:(id)arg0 error:(id)arg1 ;
-(void)setRecoverableErrorForTransfer:(id)arg0 error:(NSInteger)arg1 ;
-(void)sizePreviewsForTransferGUIDs:(id)arg0 ;
-(void)startFinalizingTransfer:(id)arg0 ;
-(void)startTransfer:(id)arg0 ;
-(void)updateTransfer:(id)arg0 ;
-(void)updateTransfer:(id)arg0 currentBytes:(NSUInteger)arg1 totalBytes:(NSUInteger)arg2 ;
-(void)updateTransfer:(id)arg0 withPreviewSize:(id)arg1 forConstraints:(struct IMPreviewConstraints )arg2 ;
-(void)updateTransferAsWaitingForAccept:(id)arg0 ;
-(void)updateTransferGUID:(id)arg0 toGUID:(id)arg1 ;


@end


#endif