// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCE2C2CSO16C2REQUESTMANAGERP33_84EE1E58F246DCD3EE191A742089E5F125C2ASYNCDATASTREAMDELEGATE_H
#define _TTCE2C2CSO16C2REQUESTMANAGERP33_84EE1E58F246DCD3EE191A742089E5F125C2ASYNCDATASTREAMDELEGATE_H

@protocol C2RequestDelegate;

#import <Foundation/Foundation.h>


@interface _TtCE2C2CSo16C2RequestManagerP33_84EE1E58F246DCD3EE191A742089E5F125C2AsyncDataStreamDelegate : NSObject <C2RequestDelegate>

 {
    ? responseConitnuation;
    ? bytesStreamContinuation;
}




-(?)URLSession:(?)arg0 dataTask:(?)arg1 didReceiveResponsecompletionHandler;
-(?)URLSession:(?)arg0 task:(?)arg1 _willSendRequestForEstablishedConnectioncompletionHandler;
-(?)URLSession:(?)arg0 task:(?)arg1 willPerformHTTPRedirection:(?)arg2 newRequestcompletionHandler;
-(?)URLSession:(?)arg0 taskneedNewBodyStream;
-(id)init;
-(void)URLSession:(id)arg0 _taskIsWaitingForConnection:(id)arg1 ;
-(void)URLSession:(id)arg0 _willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;


@end


#endif