// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26AUTHENTICATIONSERVICESCORE11ASWEBSOCKET_H
#define _TTC26AUTHENTICATIONSERVICESCORE11ASWEBSOCKET_H

@protocol NSURLSessionWebSocketDelegate;

#import <Foundation/Foundation.h>


@interface _TtC26AuthenticationServicesCore11ASWebSocket : NSObject <NSURLSessionWebSocketDelegate>

 {
    ? delegate;
    ? isConnected;
    ? urlSession;
    ? webSocketTask;
    ? connectionCompletionHandler;
    ? testDelegate;
}




-(?)URLSession:(?)arg0 task:(?)arg1 didReceiveChallengecompletionHandler;
-(id)init;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 webSocketTask:(id)arg1 didOpenWithProtocol:(id)arg2 ;


@end


#endif