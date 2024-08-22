// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMFILETRANSFERCENTER_H
#define IMFILETRANSFERCENTER_H

@class NSMutableDictionary, NSArray, NSMutableSet, NSString, NSMutableArray, NSDictionary;
@protocol IMFileTransferCenter;

#import <Foundation/Foundation.h>


@interface IMFileTransferCenter : NSObject <IMFileTransferCenter>



@property (retain, nonatomic) NSMutableDictionary *accountIDToTransferGUIDsMap; // ivar: _accountIDToTransferGUIDsMap
@property (readonly, nonatomic) NSArray *activeTransferGUIDs;
@property (retain, nonatomic) NSMutableSet *activeTransfers; // ivar: _activeTransfers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disconnectionListenerSetUp; // ivar: _disconnectionListenerSetUp
@property (retain, nonatomic) NSMutableDictionary *fetchHighQualityVariantCompletionHandlers; // ivar: _fetchHighQualityVariantCompletionHandlers
@property (retain, nonatomic) NSMutableDictionary *guidToRemovedTransferMap; // ivar: _guidToRemovedTransferMap
@property (retain, nonatomic) NSMutableDictionary *guidToTransferMap; // ivar: _guidToTransferMap
@property (readonly, nonatomic) BOOL hasActiveFileTransfers;
@property (readonly, nonatomic) BOOL hasPendingFileTransfers;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=shouldIssueSandboxEstensionsForTransfers) BOOL issueSandboxEstensionsForTransfers; // ivar: _issueSandboxEstensionsForTransfers
@property (retain, nonatomic) NSMutableDictionary *localFileURLRetrievalCompletionHandlers; // ivar: _localFileURLRetrievalCompletionHandlers
@property (retain, nonatomic) NSMutableDictionary *localFileURLRetrievalWithGuidCompletionHandlers; // ivar: _localFileURLRetrievalWithGuidCompletionHandlers
@property (readonly, weak, nonatomic) NSArray *orderedTransfers;
@property (readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property (retain, nonatomic) NSMutableSet *pendingTransfers; // ivar: _pendingTransfers
@property (retain, nonatomic) NSMutableArray *preauthorizedGUIDs; // ivar: _preauthorizedGUIDs
@property (retain, nonatomic) NSMutableArray *preauthorizedInfos; // ivar: _preauthorizedInfos
@property (retain, nonatomic) NSMutableDictionary *redownloadlocalFilesWithURLCompletionHandlers; // ivar: _redownloadlocalFilesWithURLCompletionHandlers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *transfers;


+(Class)fileTransferClass;
+(Class)transferCenterClass;
+(id)sharedInstance;
+(void)setTransferCenterClass:(Class)arg0 ;
-(BOOL)doesLocalURLRequireArchiving:(id)arg0 toHandle:(id)arg1 ;
-(BOOL)isFileTransfer:(id)arg0 preauthorizedWithDictionary:(id)arg1 ;
-(BOOL)registerGUID:(id)arg0 forNewOutgoingTransferWithLocalURL:(id)arg1 ;
-(BOOL)wasFileTransferPreauthorized:(id)arg0 ;
-(id)chatForTransfer:(id)arg0 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg0 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg0 useLegacyGuid:(BOOL)arg1 ;
-(id)guidsForStoredAttachmentPayloadData:(id)arg0 messageGUID:(id)arg1 ;
-(id)transferForGUID:(id)arg0 ;
-(id)transferForGUID:(id)arg0 includeRemoved:(BOOL)arg1 ;
-(id)transfersForAccount:(id)arg0 ;
-(void)_addActiveTransfer:(id)arg0 ;
-(void)_addPendingTransfer:(id)arg0 ;
-(void)_addSpotlightProperties:(id)arg0 sender:(id)arg1 recipients:(id)arg2 incoming:(BOOL)arg3 ;
-(void)_addTransfer:(id)arg0 ;
-(void)_addTransfer:(id)arg0 toAccount:(id)arg1 ;
-(void)_clearTransfers;
-(void)_daemonDisconnected:(id)arg0 ;
-(void)_daemonRestarted:(id)arg0 ;
-(void)_fetchHighQualityVariantForTransferGUID:(id)arg0 completion:(id)arg1 ;
-(void)_handleAllFileTransfers:(id)arg0 ;
-(void)_handleFileTransfer:(id)arg0 createdWithProperties:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg0 explicitDownloadSucceededWithPath:(id)arg1 livePhotoBundlePath:(id)arg2 ;
-(void)_handleFileTransfer:(id)arg0 highQualityDownloadSucceededWithPath:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg0 updatedWithCurrentBytes:(NSUInteger)arg1 totalBytes:(NSUInteger)arg2 averageTransferRate:(NSUInteger)arg3 ;
-(void)_handleFileTransfer:(id)arg0 updatedWithProperties:(id)arg1 ;
-(void)_handleFileTransferDownloadFailedWithLocalURL:(id)arg0 error:(id)arg1 ;
-(void)_handleFileTransferDownloadSucceededWithLocalURL:(id)arg0 ;
-(void)_handleFileTransferExplicitDownloadFailed:(id)arg0 suggestedRetryGUID:(id)arg1 error:(id)arg2 ;
-(void)_handleFileTransferHighQualityDownloadFailed:(id)arg0 ;
-(void)_handleFileTransfers:(id)arg0 createdWithLocalPaths:(id)arg1 ;
-(void)_handleSerializedFileTransfers:(id)arg0 ;
-(void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg0 ;
-(void)_initiateLocalFileURLRetrievalInDaemonForGUID:(id)arg0 options:(NSInteger)arg1 ;
-(void)_initiateLocalFileURLRetrievalInDaemonForGUIDs:(id)arg0 options:(NSInteger)arg1 ;
-(void)_registerDaemonListenerIfNecessary;
-(void)_removeActiveTransfer:(id)arg0 ;
-(void)_removeAllActiveTransfers;
-(void)_removePendingTransfer:(id)arg0 ;
-(void)acceptFileTransferIfPreauthorzed:(id)arg0 ;
-(void)acceptTransfer:(id)arg0 ;
-(void)acceptTransfer:(id)arg0 withPath:(id)arg1 autoRename:(BOOL)arg2 overwrite:(BOOL)arg3 ;
-(void)acknowledgeAllPendingTransfers;
-(void)acknowledgePendingTransfer:(id)arg0 ;
-(void)assignTransfer:(id)arg0 toHandle:(id)arg1 ;
-(void)assignTransfer:(id)arg0 toMessage:(id)arg1 account:(id)arg2 ;
-(void)clearFinishedTransfers;
-(void)createItemForPHAssetWithUUID:(id)arg0 parentChatItemGUID:(id)arg1 chatGUID:(id)arg2 ;
-(void)dealloc;
-(void)deleteTransfer:(id)arg0 ;
-(void)downloadFileTransferWithLocalURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchHighQualityVariantForTransfer:(id)arg0 completion:(id)arg1 ;
-(void)preWarmConnection;
-(void)preauthorizeFileTransferFromOtherPerson:(id)arg0 account:(id)arg1 filename:(id)arg2 saveToPath:(id)arg3 ;
-(void)registerTransferWithDaemon:(id)arg0 ;
-(void)removeTransfer:(id)arg0 ;
-(void)retargetTransfer:(id)arg0 toPath:(id)arg1 ;
-(void)retrieveLocalFileURLForFileTransferWithGUID:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)retrieveLocalFileURLForFileTransferWithGUIDs:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setAuxImageForTransfer:(id)arg0 value:(BOOL)arg1 ;
-(void)setAuxVideoForTransfer:(id)arg0 value:(BOOL)arg1 ;
-(void)setCommSafetySensitiveForTransfer:(id)arg0 value:(NSInteger)arg1 ;
-(void)stopTransfer:(id)arg0 ;


@end


#endif