// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADMANAGERAPPSHIM_H
#define SSDOWNLOADMANAGERAPPSHIM_H

@class ASDJobManager, NSString;
@protocol ASDJobManagerObserver;


#import "SSDownloadManager.h"

@interface SSDownloadManagerAppShim : SSDownloadManager <ASDJobManagerObserver>

 {
    ASDJobManager *_jobManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)__app_convertOptions:(id)arg0 ;
-(id)__app_downloadsForJobs:(id)arg0 ;
-(id)__app_extractJobIDsFromSoftwareDownloads:(id)arg0 ;
-(id)__app_getAllDownloads;
-(id)__app_newActivityWithDownload:(id)arg0 ;
-(id)__app_newAssetWithDownloadAsset:(id)arg0 assetType:(id)arg1 ;
-(id)__app_newManifestWithType:(NSInteger)arg0 ;
-(id)_copyDownloadsForMessage:(NSInteger)arg0 downloadIDs:(id)arg1 ;
-(id)initWithManagerOptions:(id)arg0 ;
-(void)__app_cancelDownloads:(id)arg0 completionBlock:(id)arg1 ;
// -(void)__app_dispatchBlock:(id)arg0 withError:(unk)arg1  ;
-(void)__app_filterDownloads:(id)arg0 withResult:(id)arg1 ;
-(void)__app_finishDownloads:(id)arg0 ;
-(void)__app_insertDownloads:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id)arg3 ;
-(void)__app_installManifest:(id)arg0 completionBlock:(id)arg1 ;
-(void)__app_pauseDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)__app_resumeDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)__app_sendDownloadsChanged:(id)arg0 filterSoftware:(BOOL)arg1 ;
-(void)__app_setPropertiesForActivity:(id)arg0 withDownload:(id)arg1 ;
-(void)_insertDownloads:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id)arg3 ;
-(void)_pauseDownloads:(id)arg0 forced:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_sendDownloadsChanged:(id)arg0 ;
-(void)cancelAllDownloadsWithCompletionBlock:(id)arg0 ;
-(void)cancelDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)finishDownloads:(id)arg0 ;
-(void)jobManager:(id)arg0 changedJobs:(id)arg1 ;
-(void)jobManager:(id)arg0 updatedProgressOfJobs:(id)arg1 ;
-(void)jobManager:(id)arg0 updatedStateOfJobs:(id)arg1 ;
-(void)moveDownload:(id)arg0 afterDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)moveDownload:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)restartDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)resumeDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)setDownloads:(id)arg0 forKinds:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif