// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFDOWNLOADMANAGER_H
#define _SFDOWNLOADMANAGER_H

@class NSMutableArray, NSURL, WBSCoalescedAsynchronousWriter, NSMapTable, NSTimer, NSDate, NSString, NSArray;
@protocol _SFDownloadDelegate;

#import <Foundation/Foundation.h>

#import "_SFDownloadIconCache.h"

@interface _SFDownloadManager : NSObject <_SFDownloadDelegate>

 {
    NSMutableArray *_downloads;
    NSURL *_downloadHistoryURL;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    BOOL _loadedDownloadHistory;
    id *_blockToExecuteWhenDownloadHistoryIsLoaded;
    NSMapTable *_downloadsToDeferAdding;
    NSTimer *_removeDownloadsTimer;
    NSTimer *_updateTotalProgressTimer;
    NSInteger _viewingDownloadsCount;
}


@property (retain, nonatomic, setter=_setLastUnviewedDownloadDate:) NSDate *_lastUnviewedDownloadDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) NSURL *downloadsRootURL; // ivar: _downloadsRootURL
@property (weak, nonatomic) NSObject<_SFDownloadDelegate> *extraDownloadDelegate; // ivar: _extraDownloadDelegate
@property (readonly, nonatomic) BOOL hasUnviewedDownloads;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFDownloadIconCache *iconCache; // ivar: _iconCache
@property (readonly, nonatomic) NSUInteger runningDownloadsCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat totalProgress; // ivar: _totalProgress


+(id)defaultDownloadsHistoryURL;
+(id)downloadRepresentationsAtURL:(id)arg0 ;
+(id)sharedManager;
-(BOOL)_canExpireDownloadOnCompletion:(id)arg0 ;
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg0 ;
-(BOOL)shouldExcludeDownloadFromFileSystem:(id)arg0 ;
-(BOOL)shouldExcludeDownloadFromList:(id)arg0 ;
-(CGFloat)_calculateTotalProgress;
-(id)_busyDownloads;
-(id)_containerDirectoryForDownload:(id)arg0 ;
-(id)_dataForPersistingToHistory;
-(id)initAsReadonly:(BOOL)arg0 ;
-(void)_addDownload:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_loadDownloadHistory;
-(void)_loadDownloadHistoryAsynchronous:(BOOL)arg0 ;
-(void)_noteDownloadsChanged;
-(void)_removeDeletedDownloads;
-(void)_removeOldDownloadsAndUpdateTimerIfNeeded;
-(void)_startUpdateTotalProgressTimerIfNeeded;
-(void)_updateTotalProgress:(id)arg0 ;
-(void)createDirectoryForDownload:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deferAddingDownloadWhenStarted:(id)arg0 ;
-(void)didBeginViewingDownloads;
-(void)didEndViewingDownloads;
-(void)downloadContentsDidChange:(id)arg0 ;
-(void)downloadDidFail:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)downloadDidImportFileToDownloadsFolder:(id)arg0 ;
-(void)downloadDidReceiveResponse:(id)arg0 ;
-(void)downloadDidResume:(id)arg0 ;
-(void)downloadDidStart:(id)arg0 ;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg0 decisionHandler:(id)arg1 ;
-(void)downloadWillBeDeleted:(id)arg0 ;
-(void)getDownloadsWithCompletionHandler:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadDownloadsSynchronously;
-(void)removeDownloads:(id)arg0 ;
-(void)removeDownloadsStartedAfterDate:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;


@end


#endif