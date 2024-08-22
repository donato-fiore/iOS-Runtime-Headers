// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDOWNLOADURLTASK_H
#define WFDOWNLOADURLTASK_H

@class NSString, NSURLRequest;
@protocol NSURLSessionDownloadDelegate;

#import <Foundation/Foundation.h>


@interface WFDownloadURLTask : NSObject <NSURLSessionDownloadDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *expectedByteCountHandler; // ivar: _expectedByteCountHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly) Class superclass;
@property (copy, nonatomic) id *writtenByteCountHandler; // ivar: _writtenByteCountHandler


-(id)initWithRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)start;


@end


#endif