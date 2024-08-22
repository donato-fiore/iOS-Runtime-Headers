// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMDEMBEDDEDDEVICESERVICE_H
#define HMDCAMDEMBEDDEDDEVICESERVICE_H

@class NSXPCConnection, NSString;
@protocol HMDCAMDEmbeddedDeviceServerProxy, HMDCAMDEmbeddedDeviceClientProxy, HMFLogging;


#import "HMDCAMDEmbeddedDevice.h"
#import "HMDCAMDBlockManager.h"

@interface HMDCAMDEmbeddedDeviceService : HMDCAMDEmbeddedDevice <HMDCAMDEmbeddedDeviceServerProxy, HMDCAMDEmbeddedDeviceClientProxy, HMFLogging>

 {
    NSXPCConnection *_connection;
    NSUInteger _backoffTimer;
}


@property (readonly) HMDCAMDBlockManager *blockInvoker; // ivar: _blockInvoker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL directInvocations; // ivar: _directInvocations
@property (readonly) NSUInteger hash;
@property (copy) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) BOOL isRoot; // ivar: _isRoot
@property (readonly) BOOL isValid; // ivar: _isValid
@property NSUInteger requestTimeout; // ivar: _requestTimeout
@property (readonly) Class superclass;


+(id)logCategory;
+(void)confirmSemaphoreAndSignal:(id)arg0 ;
-(BOOL)testCommunication;
-(id)_initAsRoot:(BOOL)arg0 ;
-(id)init;
-(id)initAsMobile;
-(id)initAsRoot;
-(id)logIdentifier;
-(id)performCommandFromClass:(id)arg0 method:(id)arg1 arguments:(id)arg2 error:(*id)arg3 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_fireActualBlockWithArguments:(id)arg0 forKey:(id)arg1 ;
-(void)_performCommandFromClass:(id)arg0 method:(id)arg1 arguments:(id)arg2 reply:(id)arg3 ;
-(void)_removeActualBlockForKey:(id)arg0 ;
-(void)_testCommunication:(id)arg0 ;
-(void)blockReleased:(id)arg0 ;
-(void)dealloc;
-(void)resetConnection;
-(void)start;


@end


#endif