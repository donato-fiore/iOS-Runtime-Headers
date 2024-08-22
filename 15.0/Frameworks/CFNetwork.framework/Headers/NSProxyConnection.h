// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPROXYCONNECTION_H
#define NSPROXYCONNECTION_H

@protocol OS_tcp_connection, NSProxyConnectionDelegate;

#import <Foundation/Foundation.h>


@interface NSProxyConnection : NSObject {
    BOOL _doCleanupWhenWritesCompleted;
    NSObject<OS_tcp_connection> *_connection;
    id<NSProxyConnectionDelegate> *_delegate;
    NSInteger _pendingWrites;
}




-(id)initWithHost:(id)arg0 port:(unsigned short)arg1 queue:(id)arg2 configuration:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)read:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)write:(id)arg0 handler:(id)arg1 ;


@end


#endif