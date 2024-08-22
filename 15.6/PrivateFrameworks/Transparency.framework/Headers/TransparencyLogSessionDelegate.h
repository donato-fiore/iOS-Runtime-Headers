// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYLOGSESSIONDELEGATE_H
#define TRANSPARENCYLOGSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "KTContextStore.h"
#import "TransparencyManagedDataStore.h"
#import "KTLogClient.h"

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate>



@property (retain) KTContextStore *contextStore; // ivar: _contextStore
@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) KTLogClient *logClient; // ivar: _logClient
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)initWithDataStore:(id)arg0 workloop:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)handleDownloadRecord:(id)arg0 downloadData:(id)arg1 downloadMetadata:(id)arg2 ;
-(void)handleDownloadRecordFailure:(id)arg0 task:(id)arg1 downloadMetadata:(id)arg2 error:(id)arg3 ;


@end


#endif