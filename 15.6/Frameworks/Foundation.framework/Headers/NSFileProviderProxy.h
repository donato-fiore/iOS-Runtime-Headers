// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPROVIDERPROXY_H
#define NSFILEPROVIDERPROXY_H

@protocol NSFileProviderXPCInterface><NSXPCProxyCreating;


#import "NSFileReactorProxy.h"
#import "NSFileProviderXPCMessenger.h"
#import "NSString.h"
#import "NSUUID.h"

@interface NSFileProviderProxy : NSFileReactorProxy {
    NSFileProviderXPCMessenger *_forwardedMessenger;
}


@property (readonly) NSObject<NSFileProviderXPCInterface><NSXPCProxyCreating> *remoteProvider; // ivar: _remoteProvider
@property (readonly) NSString *secureID; // ivar: _secureID
@property (readonly) NSUUID *uniqueID; // ivar: _uniqueID
@property BOOL wantsWriteNotifications; // ivar: _wantsWriteNotifications


-(BOOL)allowedForURL:(id)arg0 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg0 remoteProvider:(id)arg1 reactorID:(id)arg2 secureID:(id)arg3 uniqueID:(id)arg4 ;
-(id)provideItemAtURL:(SEL)arg0 withOptions:(id)arg1 forAccessClaim:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(id)provideItemForKernelRequestWithInfo:(SEL)arg0 atURL:(id)arg1 forProcess:(id)arg2 withOptions:(int)arg3 completionHandler:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)forwardUsingProxy:(id)arg0 ;
-(void)invalidate;
-(void)movingItemAtLocation:(id)arg0 requiresProvidingWithDestinationLocation:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeEndOfWriteAtLocation:(id)arg0 forAccessClaim:(id)arg1 ;
-(void)observePresentationChangeOfKind:(id)arg0 withPresenter:(id)arg1 url:(id)arg2 newURL:(id)arg3 ;
-(void)provideLogicalURLForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)providePhysicalURLForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)setItemLocation:(id)arg0 ;


@end


#endif