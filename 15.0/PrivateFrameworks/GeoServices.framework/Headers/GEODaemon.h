// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODAEMON_H
#define GEODAEMON_H

@class NSMutableDictionary, NSMutableArray, NSSet;
@protocol OS_dispatch_source, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GEODaemon : NSObject {
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_xpc_object> *_listener;
}


@property (readonly, nonatomic) NSSet *peers; // ivar: _peers


+(id)createXPCListenerBlock:(SEL)arg0 ;
+(void)setCreateXPCListenerBlock:(id)arg0 ;
-(id)_createListenerWithQueue:(id)arg0 onPort:(char *)arg1 ;
-(id)_createPeerForConnection:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPort:(char *)arg0 ;
-(id)startServerClassIfNecessary:(Class)arg0 ;
-(void)_handleNewConnection:(id)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_shutdown:(BOOL)arg0 ;
-(void)addServerClass:(Class)arg0 ;
-(void)dealloc;
-(void)handleIncomingMessage:(id)arg0 fromPeer:(id)arg1 ;
-(void)peerDidConnect:(id)arg0 ;
-(void)peerDidDisconnect:(id)arg0 ;
-(void)shutdown:(BOOL)arg0 ;
-(void)start;


@end


#endif