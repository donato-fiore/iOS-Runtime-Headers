// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXIPCSERVER_H
#define AXIPCSERVER_H

@class NSMutableSet, NSMutableDictionary, NSString, NSMutableArray;
@protocol AXIPCServerClientRegistrationDelegate;

#import <Foundation/Foundation.h>


@interface AXIPCServer : NSObject <AXIPCServerClientRegistrationDelegate>

 {
    id *_defaultHandler;
    *__CFRunLoopSource _serverRunLoopSource;
    NSMutableSet *_connectedClients;
    id *_clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    NSMutableDictionary *_validSecurityTokens;
    unsigned int _assignedServerPort;
    unsigned int _customQueueSize;
}


@property (copy, nonatomic) id *clientInvalidationCallback;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *defaultHandler;
@property (retain, nonatomic) NSMutableArray *delayedMessages; // ivar: _delayedMessages
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int machPort; // ivar: _serverPort
@property (nonatomic) BOOL perPidService; // ivar: _perPidService
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)__slowpath__clientWithAuditToken:(struct ? )arg0 hasRequiredEntitlementFromSet:(id)arg1 ;
-(BOOL)_clientHasEntitlementWithPort:(unsigned int)arg0 auditToken:(struct ? )arg1 message:(id)arg2 completion:(id)arg3 ;
-(BOOL)_handleErrorWithMessage:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_hasEntitlement:(id)arg0 entitlements:(id)arg1 clientPort:(unsigned int)arg2 auditToken:(struct ? )arg3 message:(id)arg4 completion:(id)arg5 ;
-(BOOL)startServerWithError:(*id)arg0 ;
-(BOOL)stopServerWithError:(*id)arg0 ;
-(id)_clientIdentificationForAuditToken:(struct ? )arg0 ;
-(id)initWithPort:(unsigned int)arg0 serviceRunLoopSource:(struct __CFRunLoopSource *)arg1 ;
-(id)initWithServiceName:(id)arg0 perPidService:(BOOL)arg1 ;
-(void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg0 first:(id)arg1 vothers:(char *)arg2 ;
-(void)_applyCustomQueueSize;
-(void)_handleClientInvalidation:(unsigned int)arg0 ;
-(void)_handleClientRegistration:(id)arg0 ;
-(void)_handleIncomingMessage:(id)arg0 securityToken:(struct ? )arg1 auditToken:(struct ? )arg2 clientPort:(unsigned int)arg3 completion:(id)arg4 ;
-(void)_processValidatedMessage:(id)arg0 completion:(id)arg1 ;
-(void)_registerContext:(id)arg0 forKey:(int)arg1 ;
-(void)_startServerThread;
-(void)addPossibleRequiredEntitlement:(id)arg0 forMessageWithKey:(int)arg1 ;
-(void)dealloc;
-(void)removeAllHandlersForTarget:(id)arg0 ;
-(void)removeHandlerForKey:(int)arg0 ;
-(void)removePossibleRequiredEntitlement:(id)arg0 forMessageWithKey:(int)arg1 ;
-(void)serverClientRegistrationInvalidated:(id)arg0 ;
// -(void)setHandler:(id)arg0 forKey:(unk)arg1  ;
-(void)setHandlerWithTarget:(id)arg0 selector:(SEL)arg1 async:(BOOL)arg2 forKey:(int)arg3 ;
-(void)setHandlerWithTarget:(id)arg0 selector:(SEL)arg1 async:(BOOL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4 ;
-(void)setHandlerWithTarget:(id)arg0 selector:(SEL)arg1 forKey:(int)arg2 ;
-(void)setHandlerWithTarget:(id)arg0 selector:(SEL)arg1 forKey:(int)arg2 possibleRequiredEntitlements:(id)arg3 ;
-(void)setQueueSize:(unsigned int)arg0 ;
-(void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg0 ;


@end


#endif