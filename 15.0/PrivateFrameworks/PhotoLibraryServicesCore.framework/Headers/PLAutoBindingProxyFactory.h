// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAUTOBINDINGPROXYFACTORY_H
#define PLAUTOBINDINGPROXYFACTORY_H

@class NSString, NSURL;
@protocol PLXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "PLLazyObject.h"
#import "PLResult.h"

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating>

 {
    os_unfair_lock_s _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURL *photoLibraryURL; // ivar: _photoLibraryURL
@property (readonly) NSObject<PLXPCProxyCreating> *proxyFactory; // ivar: _proxyFactory
@property (readonly) Class superclass;


+(NSUInteger)maxBindAttemptCount;
+(id)clientToServiceSandboxExtensionForURL:(id)arg0 ;
-(BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id)arg0 ;
-(BOOL)_isResultAnInterruptionError:(id)arg0 ;
-(id)_attemptBindToPhotoLibrary;
-(id)_bindToPhotoLibrary;
-(id)_bindToPhotoLibraryAndCacheResult;
-(id)_bindToPhotoLibraryIfNecessary;
-(id)_blackholeProxyForProxy:(id)arg0 ;
-(id)_cachedBindResult;
-(id)_lazilyBindToPhotoLibrary;
-(id)_unboostingRemoteObjectProxy;
-(id)initWithProxyFactory:(id)arg0 photoLibraryURL:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_connectionInterrupted:(id)arg0 ;
-(void)_updateCachedBindResult:(id)arg0 ;
-(void)addBarrierBlock:(id)arg0 ;


@end


#endif