// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSESSIONXPCSERVER_H
#define AVAUDIOSESSIONXPCSERVER_H

@class NSMutableArray, NSXPCInterface, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, AVAudioSessionServerDelegate;

#import <Foundation/Foundation.h>


@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate>

 {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> _clientDeathPromise;
    unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> _deallocPromise;
    BOOL _needsDefaultWorldInit;
    World _world;
    id<AVAudioSessionServerDelegate> *_serverDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)init2;
-(void)removeConnection:(id)arg0 ;
-(void)start;


@end


#endif