// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCLIENT_H
#define RPCLIENT_H

@class NSMutableSet, NSXPCConnection;
@protocol RPSignedInUserProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPClient : NSObject {
    NSMutableSet *_assertions;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> *_userProvider;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (nonatomic) unsigned int type; // ivar: _type


+(void)primaryAccountSignedIn;
+(void)primaryAccountSignedOut;
-(id)_XPCConnectionWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_ensureXPCStarted;
-(id)init;
-(id)initWithUserProvider:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateAssertionWithIdentifier:(id)arg0 ;
-(void)addOrUpdateIdentity:(id)arg0 completion:(id)arg1 ;
-(void)clientCreateDeviceMappingInternal:(int)arg0 applicationService:(id)arg1 deviceID:(id)arg2 endpointID:(id)arg3 completion:(id)arg4 ;
-(void)createDeviceToListenerMapping:(id)arg0 deviceID:(id)arg1 completion:(id)arg2 ;
-(void)createEndpointToDeviceMapping:(id)arg0 deviceID:(id)arg1 endpointID:(id)arg2 completion:(id)arg3 ;
-(void)diagnosticCommand:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)diagnosticLogControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticShow:(id)arg0 level:(int)arg1 completion:(id)arg2 ;
-(void)getIdentitiesWithCompletion:(id)arg0 ;
-(void)getIdentitiesWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)primaryAccountSignedInWithCompletion:(id)arg0 ;
-(void)primaryAccountSignedOutWithCompletion:(id)arg0 ;
-(void)queryDeviceToListenerMapping:(id)arg0 deviceID:(id)arg1 completion:(id)arg2 ;
-(void)setAutoMapping:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif