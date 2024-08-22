// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSDAEMONREMOTEVENDOR_H
#define PDSDAEMONREMOTEVENDOR_H

@class NSString;
@protocol PDSRemoteVendor, PDSDaemonListenerVendor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDSDaemonRemoteVendor : NSObject <PDSRemoteVendor>



@property (retain, nonatomic) NSObject<PDSDaemonListenerVendor> *daemonListenerVendor; // ivar: _daemonListenerVendor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)validateConnectionWithError:(*id)arg0 ;
-(id)_remoteForSync:(BOOL)arg0 ;
-(id)_remoteInternalForSync:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 daemonListenerVendor:(id)arg1 ;
-(id)internalRemoteObjectProxyWithError:(*id)arg0 ;
-(id)remoteObjectProxyWithError:(*id)arg0 ;
-(id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif