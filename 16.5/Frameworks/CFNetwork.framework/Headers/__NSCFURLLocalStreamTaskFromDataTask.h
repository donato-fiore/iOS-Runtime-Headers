// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFURLLOCALSTREAMTASKFROMDATATASK_H
#define __NSCFURLLOCALSTREAMTASKFROMDATATASK_H

@class NSCFURLLocalStreamTask, NSMutableArray, NSString;
@protocol __NSCFURLSessionConnectionDelegate;



@interface __NSCFURLLocalStreamTaskFromDataTask : NSCFURLLocalStreamTask <__NSCFURLSessionConnectionDelegate>

 {
    *__CFReadStream _myReadToHisWrite;
    BOOL _myReadToHisWriteEOF;
    BOOL _myReadToHisWriteSignaled;
    ? _myReadToHisWriteError;
    *__CFWriteStream _myWriteToHisRead;
    BOOL _myWriteToHisReadEOF;
    BOOL _myWriteToHisReadSignaled;
    ? _myWriteToHisReadError;
    NSMutableArray *_myWriteToHisReadWork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTask:(id)arg0 disavow:(id)arg1 ;
-(id)initWithTask:(id)arg0 inputStream:(id)arg1 ouptutStream:(id)arg2 disavow:(id)arg3 ;
-(id)initWithTask:(id)arg0 remainingInputStream:(id)arg1 remainingOutputStream:(id)arg2 disavow:(id)arg3 ;
-(void)connection:(id)arg0 _conditionalRequirementsChanged:(BOOL)arg1 ;
-(void)connection:(id)arg0 _willSendRequestForEstablishedConnection:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 alternatePathAvailable:(int)arg1 ;
-(void)connection:(id)arg0 challenged:(id)arg1 authCallback:(id)arg2 ;
-(void)connection:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveSocketInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> )arg1 extraBytes:(id)arg2 ;
-(void)connection:(id)arg0 request:(id)arg1 needsNewBodyStreamCallback:(id)arg2 ;
-(void)connection:(id)arg0 sentBodyBytes:(id)arg1 totalBytes:(id)arg2 expectedBytes:(id)arg3 ;
-(void)connection:(id)arg0 waitingWithReason:(NSInteger)arg1 ;
-(void)connection:(id)arg0 wasRedirected:(id)arg1 newRequest:(id)arg2 responseCallback:(id)arg3 ;
-(void)connection:(id)arg0 willCacheResponse:(id)arg1 responseCallback:(id)arg2 ;
-(void)connectionWillFinishLoading:(id)arg0 ;
-(void)dealloc;


@end


#endif