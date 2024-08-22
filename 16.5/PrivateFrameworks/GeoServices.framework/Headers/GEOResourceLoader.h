// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESOURCELOADER_H
#define GEORESOURCELOADER_H

@class NSString, NSMutableArray, NSURL, NSArray, NSMapTable, NSProgress;
@protocol NSProgressReporting, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "GEOReportedProgress.h"
#import "GEOApplicationAuditToken.h"

@interface GEOResourceLoader : NSObject <NSProgressReporting>

 {
    NSString *_directory;
    NSString *_additionalDirectoryToConsider;
    NSMutableArray *_resourcesToLoad;
    id *_completionHandler;
    NSUInteger _numberOfDownloadsInProgress;
    NSInteger _numberOfCopiesInProgress;
    BOOL _canceled;
    NSURL *_baseURL;
    NSArray *_alternateURLs;
    NSURL *_proxyURL;
    BOOL _forceUpdateCheck;
    NSUInteger _maxConcurrentLoads;
    NSArray *_resourceInfos;
    NSMutableArray *_loadedResources;
    NSMapTable *_inProgressResourceDownloads;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURL *_authProxyURL;
    NSObject<OS_os_log> *_log;
    NSUInteger _signpostID;
}


@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preferDirectNetworking; // ivar: _preferDirectNetworking
@property (readonly) NSProgress *progress;
@property (nonatomic) BOOL requiresWiFi; // ivar: _requiresWiFi
@property (readonly) Class superclass;


+(Class)resourceLoadOperationClass;
-(BOOL)_copyResource:(id)arg0 fromPath:(id)arg1 allowCreatingHardLink:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_establishHardLinkIfPossibleForResource:(id)arg0 toResource:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithTargetDirectory:(id)arg0 baseURL:(id)arg1 alternateURLs:(id)arg2 proxyURL:(id)arg3 resources:(id)arg4 forceUpdateCheck:(BOOL)arg5 maximumConcurrentLoads:(NSUInteger)arg6 additionalDirectoryToConsider:(id)arg7 log:(id)arg8 signpostID:(NSUInteger)arg9 ;
-(void)_cleanup;
-(void)_loadNextResourceFromNetwork;
-(void)_loadResourcesFromDisk;
// -(void)_writeResourceToDisk:(id)arg0 withData:(id)arg1 orTempFile:(id)arg2 checksum:(id)arg3 eTag:(id)arg4 completionHandler:(id)arg5 callbackQueue:(unk)arg6  ;
-(void)cancel;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif