// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAPPCONNECTIONLISTENER_H
#define LNAPPCONNECTIONLISTENER_H

@class NSHashTable, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, LNConnectionListener;

#import <Foundation/Foundation.h>

#import "LNAppContext.h"

@interface LNAppConnectionListener : NSObject <NSXPCListenerDelegate, LNConnectionListener>



@property (retain, nonatomic) LNAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSHashTable *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedListener;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)handleAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif