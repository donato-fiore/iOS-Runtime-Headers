// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXPROMISEMANAGER_H
#define _EXPROMISEMANAGER_H

@class NSString, NSXPCListenerEndpoint, NSXPCListener, NSMapTable;
@protocol _EXPromiseManagerXPCProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _EXPromiseManager : NSObject <_EXPromiseManagerXPCProtocol, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) NSMapTable *promises; // ivar: _promises
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)resolveObjectOfClasses:(id)arg0 forIdentifier:(id)arg1 endpoint:(id)arg2 error:(*id)arg3 ;
-(void)registerPromise:(id)arg0 ;
-(void)resolveObjectOfClasses:(id)arg0 forIdentifier:(id)arg1 endpoint:(id)arg2 completion:(id)arg3 ;
-(void)resolvePromiseWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)unregisterPromise:(id)arg0 ;


@end


#endif