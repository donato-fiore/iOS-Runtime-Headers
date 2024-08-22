// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTASSETHTTPSERVER_H
#define DTASSETHTTPSERVER_H

@class NSSet, DTXChannel;
@protocol GCDAsyncSocketDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DT_GCDAsyncSocket.h"

@interface DTAssetHTTPServer : NSObject <GCDAsyncSocketDelegate>



@property (retain, nonatomic) NSSet *allowedResources; // ivar: _allowedResources
@property (retain) DTXChannel *channel; // ivar: _channel
@property (readonly) NSUInteger port;
@property (retain) _DT_GCDAsyncSocket *socket; // ivar: _socket
@property (retain) NSObject<OS_dispatch_queue> *socketDelegateQueue; // ivar: _socketDelegateQueue


-(BOOL)startListeningWithError:(*id)arg0 ;
-(void)socket:(id)arg0 didAcceptNewSocket:(id)arg1 ;
-(void)stopListening;


@end


#endif