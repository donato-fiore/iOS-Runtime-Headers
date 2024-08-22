// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATLOCKDOWNSOCKET_H
#define ATLOCKDOWNSOCKET_H

@class ATSocket;
@protocol OS_dispatch_source, OS_dispatch_queue;



@interface ATLockdownSocket : ATSocket {
    *void _lockdownInfo;
    *_lockdown_connection _connection;
    NSObject<OS_dispatch_source> *_recvSource;
    BOOL _isWifiConnection;
    NSObject<OS_dispatch_queue> *_socketRWQueue;
    char _readBuffer;
}


@property (readonly, nonatomic) BOOL isWifi;


-(BOOL)isOpen;
-(BOOL)open;
-(id)initWithLockdownInfo:(*void)arg0 ;
-(int)recv:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(int)send:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(void)_readLength:(NSUInteger)arg0 ;
-(void)close;
-(void)writeData:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif