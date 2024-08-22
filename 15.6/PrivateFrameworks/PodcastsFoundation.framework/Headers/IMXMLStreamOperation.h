// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMXMLSTREAMOPERATION_H
#define IMXMLSTREAMOPERATION_H

@class NSOperation, NSThread, NSInputStream, NSOutputStream, NSMutableData, NSURL, NSURLConnection, NSString;
@protocol NSStreamDelegate, NSURLConnectionDelegate, NSXMLParserDelegate;



@interface IMXMLStreamOperation : NSOperation <NSStreamDelegate, NSURLConnectionDelegate>

 {
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCancelled;
    NSThread *_runloopThread;
    NSInputStream *_readStream;
    NSOutputStream *_writeStream;
    NSMutableData *_dataBuffer;
    BOOL _finishedDownloadingData;
    NSURL *_url;
    NSURLConnection *_urlConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<NSXMLParserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)operationWithURL:(id)arg0 parseDelegate:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)connection:(id)arg0 willCacheResponse:(id)arg1 ;
-(id)initWithURL:(id)arg0 parseDelegate:(id)arg1 ;
-(void)_startRunLoop;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)writeToStream;


@end


#endif