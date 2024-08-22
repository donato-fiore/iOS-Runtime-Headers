// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFICLOUDFILEDOWNLOADOPERATION_H
#define WFICLOUDFILEDOWNLOADOPERATION_H

@class NSOperation, NSError, NSArray, NSFileCoordinator, NSURL, NSProgress;



@interface WFiCloudFileDownloadOperation : NSOperation

@property (readonly, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (readonly, nonatomic) NSArray *downloadedFiles; // ivar: _downloadedFiles
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (readonly, nonatomic) NSFileCoordinator *fileCoordinator; // ivar: _fileCoordinator
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) BOOL retrieveFolderContents; // ivar: _retrieveFolderContents


-(BOOL)isAsynchronous;
-(id)initWithFileURL:(id)arg0 retrieveFolderContents:(BOOL)arg1 progress:(id)arg2 ;
-(void)downloadDirectoryAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadItemAtFileURL:(id)arg0 ofSize:(id)arg1 fileIsUbiquitous:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)finishRunningWithFiles:(id)arg0 error:(id)arg1 ;
-(void)getFileInfoForURL:(id)arg0 fileIsUbiquitous:(*BOOL)arg1 fileIsDirectory:(*BOOL)arg2 fileSize:(*id)arg3 error:(*id)arg4 ;
-(void)start;


@end


#endif