// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSREMOTEPLISTCONTROLLER_H
#define WBSREMOTEPLISTCONTROLLER_H

@class NSURL, NSString, NSTimer;
@protocol OS_dispatch_queue, WBSRemotePlistSnapshot, WBSRemotePlistControllerDelegate;

#import <Foundation/Foundation.h>

#import "WBSConfigurationDownloader.h"

@interface WBSRemotePlistController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    id *_builtInListDataProvider;
    NSURL *_downloadsDirectoryURL;
    NSString *_resourceName;
    NSString *_resourceVersion;
    NSString *_updateDateDefaultsKey;
    Class _snapshotClass;
    Class _snapshotTransformerClass;
    CGFloat _updateInterval;
    id<WBSRemotePlistSnapshot> *_currentSnapshot;
    WBSConfigurationDownloader *_configurationDownloader;
    NSTimer *_updateTimer;
}


@property (weak, nonatomic) NSObject<WBSRemotePlistControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration; // ivar: _shouldAttemptToDownloadConfiguration
@property (nonatomic) BOOL shouldAttemptToUpdateConfiguration; // ivar: _shouldAttemptToUpdateConfiguration


+(id)new;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg0 ;
-(id)_downloadedListResourceName;
-(id)_lastConfigurationUpdateAttemptDate;
-(id)_urlOfDownloadedList;
-(id)init;
-(id)initWithBuiltInListURL:(id)arg0 downloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(CGFloat)arg5 snapshotClass:(Class)arg6 snapshotTransformerClass:(Class)arg7 ;
-(id)initWithDownloadsDirectoryURL:(id)arg0 resourceName:(id)arg1 resourceVersion:(id)arg2 updateDateDefaultsKey:(id)arg3 updateInterval:(CGFloat)arg4 snapshotClass:(Class)arg5 snapshotTransformerClass:(Class)arg6 builtInListDataProvider:(id)arg7 ;
-(void)_didLoadSnapshot:(id)arg0 ;
-(void)_loadBuiltInSnapshotIfNeeded;
-(void)_loadDownloadedSnapshotIfNeeded;
-(void)_resetUpdateTimer;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
-(void)_updateDownloadedPlistIfNecessary;
-(void)_writeConfigurationData:(id)arg0 ;
-(void)accessCurrentSnapshot:(id)arg0 ;
-(void)accessSnapshotLoadingItIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)prepareForTermination;


@end


#endif