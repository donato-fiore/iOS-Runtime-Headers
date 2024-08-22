// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSSRXPCCLIENT_H
#define CSSSRXPCCLIENT_H

@class NSXPCConnection;
@protocol CSSSRXPCServiceDelegate, CSSSRXPCClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>



@property (weak, nonatomic) NSObject<CSSSRXPCClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) id *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain, nonatomic) NSXPCConnection *ssrConnection; // ivar: _ssrConnection


-(id)_getRemoteServiceProxyObject;
-(id)init;
-(void)_createClientConnection;
-(void)dealloc;
-(void)didFinishSpeakerRecognition:(id)arg0 ;
-(void)didReceiveSpeakerRecognitionScoreCard:(id)arg0 ;
-(void)invalidate;
-(void)startXPCConnection;


@end


#endif