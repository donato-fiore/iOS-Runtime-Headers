// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REHTTPSERVER_H
#define REHTTPSERVER_H

@class NSMutableArray;
@protocol REHTTPConnectionDelegate, OS_dispatch_queue, REHTTPServerDelegate;

#import <Foundation/Foundation.h>


@interface REHTTPServer : NSObject <REHTTPConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *_CFHTTPServer _server;
    NSMutableArray *_connections;
}


@property (readonly, nonatomic) NSObject<REHTTPServerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) unsigned short port; // ivar: _port


-(BOOL)_valid;
-(id)initWithPort:(unsigned short)arg0 delegate:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveRequest:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)didCloseConnection:(struct _CFHTTPServerConnection *)arg0 ;
-(void)didOpenConnection:(struct _CFHTTPServerConnection *)arg0 ;
-(void)didRecievedError:(id)arg0 ;
-(void)invalidate;
-(void)invalidated;


@end


#endif