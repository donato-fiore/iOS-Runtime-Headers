// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLANHANDOFFAGENT_H
#define MFLANHANDOFFAGENT_H


#import <Foundation/Foundation.h>

#import "MFLANHandoffContext.h"

@interface MFLANHandoffAgent : NSObject {
    *__CFSocket _socket;
    *__CFRunLoopSource _serverRunLoopSource;
    id *_connectCallbackBlock;
}


@property (readonly, nonatomic) MFLANHandoffContext *handoffContext; // ivar: _handoffContext
@property (readonly, nonatomic) BOOL serverRunning; // ivar: _serverRunning


-(id)_getDeviceHostname;
-(id)init;
-(id)startServerWithCompletion:(id)arg0 ;
-(void)_cleanupRunLoopSource;
-(void)_cleanupSocket;
-(void)_socketListenerRunLoop;
-(void)connectToServerWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)stopServer;


@end


#endif