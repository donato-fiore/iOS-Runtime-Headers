// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKASSERTIONCOORDINATOR_H
#define PKASSERTIONCOORDINATOR_H

@class NSHashTable, NSString;
@protocol PKXPCServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate>

 {
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_existingRemoteObjectProxy;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg0 ;
-(id)initSharedInstance;
-(void)_removeAssertionWithIdentifier:(id)arg0 ;
-(void)acquireAssertionOfType:(NSUInteger)arg0 withReason:(id)arg1 completion:(id)arg2 ;
-(void)assertion:(id)arg0 shouldInvalidateWhenBackgrounded:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidateAssertion:(id)arg0 completion:(id)arg1 ;
-(void)isAssertionValid:(id)arg0 completion:(id)arg1 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)remoteServiceDidSuspend:(id)arg0 ;


@end


#endif