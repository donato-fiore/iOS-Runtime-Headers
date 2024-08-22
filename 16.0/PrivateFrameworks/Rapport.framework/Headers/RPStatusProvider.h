// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPSTATUSPROVIDER_H
#define RPSTATUSPROVIDER_H

@class NSXPCConnection, NSMutableDictionary, NSString;
@protocol NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableProvider, RPSignedInUserProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPStatusProvider : NSObject <NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableProvider>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id<RPSignedInUserProvider> *_userProvider;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSMutableDictionary *currentlyProviding; // ivar: _currentlyProviding
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) Class superclass;
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession


+(BOOL)supportsSecureCoding;
// -(id)_connectionWithClient:(id)arg0 queue:(id)arg1 userProvider:(id)arg2 interruptionHandler:(id)arg3 invalidationHandler:(unk)arg4  ;
-(id)_ensureXPCStarted;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_interrupted;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cancelStatusUpdate:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)provideStatusUpdate:(id)arg0 statusInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif