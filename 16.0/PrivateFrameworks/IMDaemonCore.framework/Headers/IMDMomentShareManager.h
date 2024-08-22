// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMOMENTSHAREMANAGER_H
#define IMDMOMENTSHAREMANAGER_H

@class NSString, NSMutableDictionary;
@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *shareURLsToContexts; // ivar: _shareURLsToContexts
@property (readonly) Class superclass;


+(NSInteger)_targetCountForContext:(id)arg0 ;
+(id)_copiedFileURLFromAssetExportFileURLs:(id)arg0 transferGUID:(id)arg1 error:(*id)arg2 ;
+(id)_copyItemAtURL:(id)arg0 toTemporaryDirectoryWithName:(id)arg1 isDirectory:(BOOL)arg2 error:(*id)arg3 ;
+(id)_fetchResultForCuratedOrFirstForMomentShare:(id)arg0 outFetchType:(*NSInteger)arg1 ;
+(id)_fileTransferForAssetUUID:(id)arg0 forMessage:(id)arg1 momentShare:(id)arg2 atIndex:(NSUInteger)arg3 ofTotal:(NSUInteger)arg4 ;
+(id)_generateTransfersForAssetUUIDs:(id)arg0 forMessage:(id)arg1 inChat:(id)arg2 momentShare:(id)arg3 ;
+(id)_loadCMMTransfersForMessage:(id)arg0 ;
+(id)sharedInstance;
+(void)_acceptMomentShare:(id)arg0 completionHandler:(id)arg1 ;
+(void)_clearCMMTransfersForCMMMessage:(id)arg0 ;
+(void)_requestResourceFileURLsForAsset:(id)arg0 fileTransfer:(id)arg1 completionHandler:(id)arg2 ;
+(void)fetchMomentShareFromShareURL:(id)arg0 forMessage:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)messageHasUnfinishedTransfers:(id)arg0 ;
-(id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)arg0 ;
-(id)_contextForMomentShareURL:(id)arg0 forMessage:(id)arg1 inChat:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)init;
-(void)_acceptMomentShareIfNecessaryForContext:(id)arg0 isRetry:(BOOL)arg1 ;
-(void)_fetchAssetsForAcceptedMomentShareWithContext:(id)arg0 ;
-(void)_generateTransfersForContext:(id)arg0 ;
-(void)_handleIngestionFailureForContext:(id)arg0 ;
-(void)_handleMomentShareFetchForContext:(id)arg0 momentShare:(id)arg1 error:(id)arg2 ;
-(void)_handleResourceRequestForContext:(id)arg0 asset:(id)arg1 transfer:(id)arg2 didCompleteWithFileURL:(id)arg3 error:(id)arg4 ;
-(void)_persistAttachmentAtFileURL:(id)arg0 forFileTransfer:(id)arg1 ;
-(void)_removeFinishedIngestionContext:(id)arg0 ;
-(void)_startAssetExportForContext:(id)arg0 ;
-(void)_transitionToCompletedStateForContext:(id)arg0 ;
-(void)_transitionToFetchingMomentShareForContext:(id)arg0 ;
-(void)_transitionToGenerateTransfersStateForContextIfNecessary:(id)arg0 ;
-(void)_transitionToWaitingForAssetsForContext:(id)arg0 ;
-(void)_updateContext:(id)arg0 withChange:(id)arg1 ;
-(void)_updatePendingTransferMapForContext:(id)arg0 completedTransfer:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)regenerateTransfersForMessage:(id)arg0 inChat:(id)arg1 addingAssetWithUUID:(id)arg2 ;
-(void)registerAndAcceptMomentShareForMessage:(id)arg0 inChat:(id)arg1 resetAssetTransfers:(BOOL)arg2 ;


@end


#endif