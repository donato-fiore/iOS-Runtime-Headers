// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUPNEXTSIRISERVER_H
#define REUPNEXTSIRISERVER_H

@class NSHashTable, NSMutableSet, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, REUpNextSiriServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface REUpNextSiriServer : NSObject <NSXPCListenerDelegate, REUpNextSiriServerInterface>

 {
    NSHashTable *_observers;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_accessObservers:(id)arg0 ;
-(void)_accessRemoteClients:(id)arg0 ;
-(void)_onqueue_async:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)completedRequestWithDomain:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif