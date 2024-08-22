// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JXURLCONNECTIONOPERATION_H
#define JXURLCONNECTIONOPERATION_H

@class NSURLConnection, NSString, NSError, NSOutputStream, NSMutableURLRequest, NSURLResponse;
@protocol NSURLConnectionDelegate, NSURLConnectionDataDelegate;


#import "JXOperation.h"

@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate>



@property NSInteger bytesDownloaded; // ivar: _bytesDownloaded
@property NSInteger bytesUploaded; // ivar: _bytesUploaded
@property (retain) NSURLConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain) NSOutputStream *outputStream; // ivar: _outputStream
@property (retain) NSMutableURLRequest *request; // ivar: _request
@property (retain) NSURLResponse *response; // ivar: _response
@property (readonly) Class superclass;


+(id)networkThread;
+(void)runLoopForever;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)main;
-(void)startConnection;
-(void)stopConnection;
-(void)willFinish;


@end


#endif