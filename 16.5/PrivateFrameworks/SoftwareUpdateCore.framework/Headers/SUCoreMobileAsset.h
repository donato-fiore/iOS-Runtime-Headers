// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREMOBILEASSET_H
#define SUCOREMOBILEASSET_H

@class MAAsset, MADownloadConfig, NSString, MADownloadOptions;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreMobileAsset : NSObject

@property (copy, nonatomic) id *alterDownloadCompletion; // ivar: _alterDownloadCompletion
@property (retain, nonatomic) NSObject<OS_os_transaction> *alterDownloadTransaction; // ivar: _alterDownloadTransaction
@property (retain, nonatomic) MAAsset *asset; // ivar: _asset
@property (nonatomic) BOOL assetDownloaded; // ivar: _assetDownloaded
@property (nonatomic) BOOL assetRemoved; // ivar: _assetRemoved
@property (nonatomic) BOOL checkedDownloadState; // ivar: _checkedDownloadState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue; // ivar: _clientCompletionQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue; // ivar: _clientDelegateCallbackQueue
@property (retain, nonatomic) MADownloadConfig *currentDownloadConfig; // ivar: _currentDownloadConfig
@property (retain, nonatomic) MADownloadConfig *desiredDownloadConfig; // ivar: _desiredDownloadConfig
@property (retain, nonatomic) NSString *documentationStashBuild; // ivar: _documentationStashBuild
@property (retain, nonatomic) NSObject<OS_os_transaction> *downloadAssetTransaction; // ivar: _downloadAssetTransaction
@property (copy, nonatomic) id *downloadCompletion; // ivar: _downloadCompletion
@property (retain, nonatomic) MADownloadOptions *downloadOptions; // ivar: _downloadOptions
@property (nonatomic) BOOL downloadingAsset; // ivar: _downloadingAsset
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *maControlQueue; // ivar: _maControlQueue
@property (readonly, weak, nonatomic) id *maDelegate; // ivar: _maDelegate
@property (retain, nonatomic) NSString *operationName; // ivar: _operationName
@property (retain, nonatomic) NSObject<OS_os_transaction> *removeAssetTransaction; // ivar: _removeAssetTransaction
@property (copy, nonatomic) id *removeCompletion; // ivar: _removeCompletion
@property (nonatomic) BOOL removingAsset; // ivar: _removingAsset
@property (retain, nonatomic) MADownloadConfig *requestedDownloadConfig; // ivar: _requestedDownloadConfig
@property (retain, nonatomic) NSString *updateUUID; // ivar: _updateUUID


+(BOOL)downloadConfig:(id)arg0 isEqualToConfig:(id)arg1 ;
+(id)downloadConfigCopy:(id)arg0 ;
+(id)downloadConfigSummary:(id)arg0 ;
+(id)downloadOptionsDescription:(id)arg0 ;
// +(void)_callReloadCompletion:(id)arg0 withDescriptor:(unk)arg1 suError:(id)arg2 docError:(id)arg3  ;
+(void)mapMobileAssetErrorIndications;
+(void)reloadDescriptor:(id)arg0 allowingDifferences:(id)arg1 forceReload:(BOOL)arg2 completion:(id)arg3 ;
+(void)reloadDescriptor:(id)arg0 allowingDifferences:(id)arg1 forceReload:(BOOL)arg2 defaultValues:(id)arg3 completion:(id)arg4 ;
+(void)reloadDescriptor:(id)arg0 allowingDifferences:(id)arg1 forceReload:(BOOL)arg2 skipMSU:(BOOL)arg3 defaultValues:(id)arg4 completion:(id)arg5 ;
+(void)reloadDescriptor:(id)arg0 completion:(id)arg1 ;
-(id)_updateAssetTypeName;
-(id)description;
-(id)initWithDelegate:(id)arg0 forAsset:(id)arg1 updateUUID:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 forAsset:(id)arg1 updateUUID:(id)arg2 withCallbackQueue:(id)arg3 withCompletionQueue:(id)arg4 ;
-(void)_cancelDownloadAndPurge;
-(void)_downloadAssetWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)_downloadAssetWithOptions:(id)arg0 stashingDocumentationForBuild:(id)arg1 completion:(id)arg2 ;
-(void)_issueAlterDownloadCompletion:(NSInteger)arg0 forReason:(id)arg1 ;
-(void)_registerProgressAndStartDownload;
-(void)_reportAnomaly:(id)arg0 ;
-(void)_reportAnomaly:(id)arg0 issuingCompletion:(id)arg1 ;
-(void)_reportAssetRemoveFailed:(id)arg0 ;
-(void)_reportAssetRemoved;
-(void)_reportDownloadFailed:(id)arg0 ;
-(void)_reportDownloadProgress:(id)arg0 ;
-(void)_reportDownloaded:(id)arg0 ;
-(void)_requestChangeConfigDownload:(id)arg0 ;
-(void)_trackMAAnomaly:(id)arg0 result:(NSInteger)arg1 description:(id)arg2 ;
-(void)_trackMobileAssetBegin:(id)arg0 ;
-(void)_trackMobileAssetBegin:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_trackMobileAssetEnd:(id)arg0 withIdentifier:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
-(void)_trackMobileAssetEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
-(void)alterDownloadOptions:(id)arg0 ;
-(void)alterDownloadOptions:(id)arg0 completion:(id)arg1 ;
-(void)downloadConfigStatus:(id)arg0 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg0 withUUID:(id)arg1 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg0 withUUID:(id)arg1 completion:(id)arg2 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg0 withUUID:(id)arg1 stashingDocumentationForBuild:(id)arg2 completion:(id)arg3 ;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg0 withUUID:(id)arg1 ;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg0 withUUID:(id)arg1 completion:(id)arg2 ;
-(void)removeAsset;
-(void)removeAsset:(id)arg0 ;


@end


#endif