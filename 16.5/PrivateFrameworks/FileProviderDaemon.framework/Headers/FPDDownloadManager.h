// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDDOWNLOADMANAGER_H
#define FPDDOWNLOADMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPDDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}




+(id)acquireDownloadSlotForItem:(id)arg0 ;
+(id)sharedInstance;
+(void)initialize;
+(void)releaseDownloadSlot:(id)arg0 ;
-(id)init;
-(void)_downloadItem:(id)arg0 downloader:(id)arg1 request:(id)arg2 withCompletion:(id)arg3 ;
-(void)_downloadItemAtLocator:(id)arg0 downloader:(id)arg1 request:(id)arg2 completion:(id)arg3 ;
// -(void)_recursivelyDownloadItem:(id)arg0 forceDiskIteration:(BOOL)arg1 skipAlreadyDownloadedItems:(BOOL)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id)arg5 completion:(unk)arg6  ;
// -(void)downloadItem:(id)arg0 recursively:(NSUInteger)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(id)arg4 withCompletion:(unk)arg5  ;
// -(void)downloadItems:(id)arg0 recursively:(NSUInteger)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(id)arg4 withCompletion:(unk)arg5  ;
// -(void)progressComputationPreflightForRecursiveRoot:(id)arg0 downloader:(id)arg1 itemProgressNeedsSetup:(id)arg2 itemProgressSetup:(unk)arg3 completion:(id)arg4  ;
-(void)retrieveFPItemForURL:(id)arg0 domain:(id)arg1 request:(id)arg2 completion:(id)arg3 ;
-(void)verifyIfSubtreeIsFullyMaterializedBelowItem:(id)arg0 recursively:(NSUInteger)arg1 downloader:(id)arg2 completion:(id)arg3 ;


@end


#endif