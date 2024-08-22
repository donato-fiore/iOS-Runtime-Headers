// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADMANAGERBOOKSHIM_H
#define SSDOWNLOADMANAGERBOOKSHIM_H

@protocol SSBookDownloadQueue;


#import "SSDownloadManagerAppShim.h"

@interface SSDownloadManagerBookShim : SSDownloadManagerAppShim {
    id<SSBookDownloadQueue> *_downloadQueue;
}




-(id)__book_downloadsForStati:(id)arg0 overrideFinished:(BOOL)arg1 overrideFailed:(BOOL)arg2 ;
-(id)__book_getAllDownloads;
-(id)_copyDownloadsForMessage:(NSInteger)arg0 downloadIDs:(id)arg1 ;
-(id)bookDownloads;
-(id)initWithManagerOptions:(id)arg0 ;
-(void)__book_cancelDownloads:(id)arg0 completionBlock:(id)arg1 ;
// -(void)__book_dispatchBlock:(id)arg0 withError:(unk)arg1  ;
-(void)__book_filterDownloads:(id)arg0 withResult:(id)arg1 ;
-(void)__book_pauseDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)__book_resumeDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)__book_sendDownloadsChanged:(id)arg0 filterBooks:(BOOL)arg1 ;
-(void)_pauseDownloads:(id)arg0 forced:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)_sendDownloadsChanged:(id)arg0 ;
-(void)cancelDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)downloadQueue:(id)arg0 downloadStates:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)downloadQueue:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)moveDownload:(id)arg0 afterDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)moveDownload:(id)arg0 beforeDownload:(id)arg1 completionBlock:(id)arg2 ;
-(void)restartDownloads:(id)arg0 completionBlock:(id)arg1 ;
-(void)resumeDownloads:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif