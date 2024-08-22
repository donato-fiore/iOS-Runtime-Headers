// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFLOCALDOWNLOADTASK_H
#define __NSCFLOCALDOWNLOADTASK_H

@class NSCFLocalSessionTask, NSDictionary, NSString;
@protocol NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener, OS_dispatch_data;


#import "__NSCFLocalDownloadFile.h"

@interface __NSCFLocalDownloadTask : NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>

 {
    id *_fileCompletion;
    NSObject<OS_dispatch_data> *_writeBuffer;
    NSUInteger _ioSuspend;
    NSInteger _totalWrote;
    id *_resumeCallback;
    NSInteger _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    NSUInteger _transientWriteProgress;
    id *_afterDidReportProgressOnQueue;
    id *_dataAckCompletion;
    int _seqNo;
    BOOL _canWrite;
    BOOL _suppressProgress;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) __NSCFLocalDownloadFile *downloadFile; // ivar: _downloadFile
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_expandResumeData:(id)arg0 ;
-(BOOL)_keepDownloadTaskFile;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)createResumeInformation:(id)arg0 ;
-(int)openItemForPath:(id)arg0 mode:(int)arg1 ;
-(struct __CFDictionary *)_copySocketStreamProperties;
-(void)_onqueue_cancelByProducingResumeData:(id)arg0 ;
-(void)_onqueue_completeInitialization;
-(void)_onqueue_didReceiveResponse:(id)arg0 completion:(id)arg1 ;
-(void)_onqueue_willCacheResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelByProducingResumeData:(id)arg0 ;
-(void)dealloc;
-(void)set_keepDownloadTaskFile:(BOOL)arg0 ;
-(void)terminateExtractorWithError:(id)arg0 completion:(id)arg1 ;


@end


#endif