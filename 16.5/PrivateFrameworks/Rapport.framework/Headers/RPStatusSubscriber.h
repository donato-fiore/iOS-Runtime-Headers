// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPSTATUSSUBSCRIBER_H
#define RPSTATUSSUBSCRIBER_H

@class NSXPCConnection, NSString, NSMutableDictionary;
@protocol NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableSubscriber, RPSignedInUserProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPStatusSubscriber : NSObject <NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableSubscriber>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> *_userProvider;
    NSXPCConnection *_xpcCnx;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *devices; // ivar: _devices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSMutableDictionary *statusConfigurations; // ivar: _statusConfigurations
@property (readonly) Class superclass;
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession


+(BOOL)supportsSecureCoding;
-(BOOL)wantStatus:(id)arg0 FromDevice:(id)arg1 ;
// -(id)_connectionWithClient:(id)arg0 queue:(id)arg1 userProvider:(id)arg2 interruptionHandler:(id)arg3 invalidationHandler:(unk)arg4  ;
-(id)_ensureXPCStarted;
-(id)identifierFromDevice:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
// -(void)subscribeToStatusUpdate:(id)arg0 leeway:(CGFloat)arg1 configurationFlags:(NSUInteger)arg2 statusUpdateHandler:(id)arg3 completion:(unk)arg4  ;
-(void)unsubscribeToStatusUpdate:(id)arg0 completion:(id)arg1 ;
-(void)xpcStatusUpdatableGiveStatusUpdate:(id)arg0 peerDevice:(id)arg1 currentState:(int)arg2 statusInfo:(id)arg3 ;


@end


#endif