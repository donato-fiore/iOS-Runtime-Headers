// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSINCALLASSERTIONSERVICE_H
#define CRSINCALLASSERTIONSERVICE_H

@class NSHashTable, NSMutableDictionary, NSString, BSServiceConnectionListener, CARObserverHashTable;
@protocol BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface>



@property (retain, nonatomic) NSHashTable *activatedConnections; // ivar: _activatedConnections
@property (retain, nonatomic) NSHashTable *bannersAllowedConnections; // ivar: _bannersAllowedConnections
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSMutableDictionary *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 notifyIfNeeded:(BOOL)arg1 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)presentInCallService;
-(void)removeObserver:(id)arg0 ;
-(void)setAllowsBanners:(id)arg0 ;


@end


#endif