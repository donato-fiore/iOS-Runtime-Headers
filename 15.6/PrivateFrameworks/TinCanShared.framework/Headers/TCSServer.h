// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCSSERVER_H
#define TCSSERVER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol TCSServerXPC, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface TCSServer : NSObject <TCSServerXPC, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    os_unfair_lock_s _connectionsLock;
    NSMutableArray *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TCSServerXPC> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasValidConnection;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_enumerateConnectionsWithBlock:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)callConnected:(id)arg0 ;
-(void)callStatusChanged:(id)arg0 ;
-(void)disconnectCall:(id)arg0 ;
-(void)ensureUplinkMuted;
-(void)getCall:(id)arg0 ;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)queryIsTinCannable:(id)arg0 ;
-(void)remoteUplinkMuteChanged:(id)arg0 ;
-(void)sessionViewControllerViewDidAppear;
-(void)setUplinkMuted:(BOOL)arg0 for:(id)arg1 completion:(id)arg2 ;


@end


#endif