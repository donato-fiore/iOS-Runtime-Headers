// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDMOMENTSHAREMANAGER_H
#define IMDMOMENTSHAREMANAGER_H

@class NSMutableDictionary, NSString;
@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) NSMutableDictionary *assetUUIDToTransfersPendingAssetResults; // ivar: _assetUUIDToTransfersPendingAssetResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *messageGUIDtoMessage; // ivar: _messageGUIDtoMessage
@property (retain, nonatomic) NSMutableDictionary *messageGUIDtoTransferMap; // ivar: _messageGUIDtoTransferMap
@property (retain, nonatomic) NSMutableDictionary *outstandingFetchResults; // ivar: _outstandingFetchResults
@property (readonly) Class superclass;


+(id)_copiedFileURLFromAssetExportFileURLs:(id)arg0 transferGUID:(id)arg1 error:(*id)arg2 ;
+(id)_copyItemAtURL:(id)arg0 toTemporaryDirectoryWithName:(id)arg1 isDirectory:(BOOL)arg2 error:(*id)arg3 ;
+(id)_fetchResultForCuratedOrFirstForMomentShare:(id)arg0 ;
+(id)_fileTransferForAssetUUID:(id)arg0 forMessage:(id)arg1 momentShare:(id)arg2 atIndex:(NSUInteger)arg3 ;
+(id)_generateTransfersForAssetUUIDs:(id)arg0 forMessage:(id)arg1 inChat:(id)arg2 momentShare:(id)arg3 ;
+(id)_loadCMMTransfersForMessage:(id)arg0 ;
+(id)sharedInstance;
+(void)_clearCMMTransfersForCMMMessage:(id)arg0 ;
+(void)_requestResourceFileURLsForAsset:(id)arg0 fileTransfer:(id)arg1 completionHandler:(id)arg2 ;
+(void)fetchMomentShareFromShareURL:(id)arg0 forMessage:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)messageHasUnfinishedTransfers:(id)arg0 ;
-(id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)arg0 ;
-(id)init;
-(void)_persistAttachmentAtfileURL:(id)arg0 forFileTransfer:(id)arg1 ;
-(void)_processAcceptedCMMMessage:(id)arg0 inChat:(id)arg1 momentShare:(id)arg2 ;
-(void)_processAssetsFromFetchResult:(id)arg0 message:(id)arg1 ;
-(void)_processGeneratedCMMMessage:(id)arg0 inChat:(id)arg1 momentShare:(id)arg2 ;
-(void)_processRegisteredCMMMessage:(id)arg0 inChat:(id)arg1 momentShare:(id)arg2 isRetry:(BOOL)arg3 ;
-(void)_requestAssetsForFileTransfers:(id)arg0 withAssetFetch:(id)arg1 forMessage:(id)arg2 momentShare:(id)arg3 ;
-(void)generateTransfersFromFetchResult:(id)arg0 withContect:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)regenerateTransfersForMessage:(id)arg0 inChat:(id)arg1 addingAssetWithUUID:(id)arg2 ;
-(void)registerAndAcceptMomentShareForMessage:(id)arg0 inChat:(id)arg1 resetAssetTransfers:(BOOL)arg2 ;
-(void)startMonitoringFetchResult:(id)arg0 withContext:(id)arg1 ;


@end


#endif