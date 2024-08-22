// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSREMOTETRANSCEIVERPROXY_H
#define STSREMOTETRANSCEIVERPROXY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STSRemoteTransceiverProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *xpc; // ivar: _xpc


-(id)asynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)transceive:(id)arg0 outError:(*id)arg1 ;
-(void)dealloc;


@end


#endif