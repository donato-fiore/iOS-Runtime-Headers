// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDATAPROVIDERCONNECTIONRESOLVER_H
#define BBDATAPROVIDERCONNECTIONRESOLVER_H

@class NSXPCListener, NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BBDataProviderConnection.h"

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>

 {
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
}


@property (weak, nonatomic) BBDataProviderConnection *dataProviderConnection; // ivar: _dataProviderConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)resolverForConnection:(id)arg0 ;
+(id)xpcInterface;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_invalidate;
-(void)_queue_registerWithServer:(id)arg0 ;
-(void)_registerForPublicationNotification;
-(void)dealloc;
-(void)invalidate;
-(void)ping:(id)arg0 ;


@end


#endif