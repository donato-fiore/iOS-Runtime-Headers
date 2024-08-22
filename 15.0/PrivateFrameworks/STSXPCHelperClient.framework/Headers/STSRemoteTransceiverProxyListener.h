// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSREMOTETRANSCEIVERPROXYLISTENER_H
#define STSREMOTETRANSCEIVERPROXYLISTENER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, STSRemoteTransceiverProxyListenerProtocol, STSRemoteTransceiverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STSRemoteTransceiverProxyListener : NSObject <NSXPCListenerDelegate, STSRemoteTransceiverProxyListenerProtocol>

 {
    NSObject<STSRemoteTransceiverProtocol> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCListener *_xpcListener;
    NSMutableArray *_xpcConnections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)dealloc;
-(void)transceive:(id)arg0 completion:(id)arg1 ;


@end


#endif