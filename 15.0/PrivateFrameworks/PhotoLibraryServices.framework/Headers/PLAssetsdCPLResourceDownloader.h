// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDCPLRESOURCEDOWNLOADER_H
#define PLASSETSDCPLRESOURCEDOWNLOADER_H

@class NSString, NSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLAssetsdCPLResourceDownloader : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}




-(id)initWithPhotoLibrary:(id)arg0 trustedCallerBundleID:(id)arg1 clientConnection:(id)arg2 ;
-(id)startCPLDownloadForAsset:(id)arg0 resourceType:(NSUInteger)arg1 masterResourceOnly:(BOOL)arg2 highPriority:(BOOL)arg3 track:(BOOL)arg4 notify:(BOOL)arg5 transient:(BOOL)arg6 proposedTaskIdentifier:(id)arg7 doneToken:(id)arg8 error:(*id)arg9 ;
-(void)_handleInvalidation;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelCPLDownloadTasks:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleInvalidation;
-(void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg0 downloadContext:(id)arg1 ;


@end


#endif