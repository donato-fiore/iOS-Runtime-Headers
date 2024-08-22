// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADMANAGER_H
#define SSDOWNLOADMANAGER_H

@class NSArray, NSHashTable, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSDownloadManagerOptions.h"

@interface SSDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    BOOL _activeDownloadsChanged;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    SSXPCConnection *_connection;
    NSArray *_downloads;
    BOOL _downloadsChanged;
    BOOL _isUsingNetwork;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    SSDownloadManagerOptions *_options;
    NSMutableSet *_removedDownloads;
    int _launchNotificationToken;
}


@property (readonly) NSArray *activeDownloads;
@property (readonly) NSArray *downloads;
@property (readonly) SSDownloadManagerOptions *managerOptions;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;


+(id)EBookDownloadKinds;
+(id)EBookDownloadManager;
+(id)IPodDownloadKinds;
+(id)IPodDownloadManager;
+(id)ITunesDownloadKinds;
+(id)allStoreDownloadKinds;
+(id)softwareDownloadKinds;
+(id)softwareDownloadManager;
+(void)_sendGlobalHandler:(id)arg0 ;
+(void)_triggerDownloads;
+(void)reconnectToLSApplicationWorkspace;
+(void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg0 ;
+(void)removePersistenceIdentifier:(id)arg0 ;
+(void)retryAllRestoreDownloads;
+(void)setDownloadHandler:(id)arg0 ;
-(BOOL)_supportsSoftwareKind;
-(BOOL)canCancelDownload:(id)arg0 ;
-(id)_XPCConnection;
-(id)_copyDownloadKindsUsingNetwork;
-(id)_copyDownloads;
-(id)_copyDownloadsForMessage:(NSInteger)arg0 downloadIDs:(id)arg1 ;
-(id)_initSSDownloadManagerWithOptions:(id)arg0 ;
-(id)_newOptionsDictionary;
-(id)initWithDownloadKinds:(id)arg0 ;
-(id)initWithManagerOptions:(id)arg0 ;
-(void)_connectAfterDaemonLaunch;
-(void)_connectAsObserver;
-(void)_finishDownloads:(id)arg0 ;
-(void)_handleDownloadKindsUsingNetworkChanged:(id)arg0 ;
-(void)_handleDownloadStatesChanged:(id)arg0 ;
-(void)_handleDownloadsChanged:(id)arg0 ;
-(void)_handleDownloadsRemoved:(id)arg0 ;
-(void)_handleMessage:(id)arg0 fromServerConnection:(id)arg1 ;
-(void)_handleReply:(id)arg0 forDownloads:(id)arg1 message:(id)arg2 isRetry:(BOOL)arg3 block:(id)arg4 ;
-(void)_insertDownloads:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id)arg3 ;
-(void)_loadDownloadKindsUsingNetwork;
-(void)_moveDownload:(id)arg0 before:(id)arg1 after:(id)arg2 completionBlock:(id)arg3 ;
-(void)_pauseDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)_pauseDownloads:(id)arg0 forced:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg0 ;
-(void)_resetAllDownloads;
-(void)_sendDownloadsChanged:(id)arg0 ;
-(void)_sendMessage:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_sendMessageToObservers:(SEL)arg0 ;
-(void)_sendObserverConnection;
-(void)_willFinishDownloads:(id)arg0 ;
-(void)addDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelAllDownloadsWithCompletionBlock:(id)arg0 ;
-(void)cancelDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)finishDownloads:(id)arg0 ;
-(void)getDownloadsUsingBlock:(id)arg0 ;
-(void)insertDownloads:(id)arg0 afterDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)insertDownloads:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)moveDownload:(id)arg0 afterDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)moveDownload:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)pauseDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)reloadFromServer;
-(void)removeObserver:(id)arg0 ;
-(void)restartDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)resumeDownloads:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif