// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRDOWNLOADANDUPLOADALLFILESFORLOGOUTOPERATION_H
#define BRDOWNLOADANDUPLOADALLFILESFORLOGOUTOPERATION_H

@class NSMutableArray, NSOperationQueue, NSString;
@protocol NSProgressReporting;


#import "BROperation.h"
#import "BRUploadAllFilesForLogOutOperation.h"
#import "BRGlobalProgressProxy.h"

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>

 {
    NSMutableArray *_fileCoordinators;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *downloadAllFilesCompletionBlock; // ivar: _downloadAllFilesCompletionBlock
@property (readonly) NSUInteger hash;
@property (retain) BRGlobalProgressProxy *progress; // ivar: _progress
@property (readonly) Class superclass;


-(id)init;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif