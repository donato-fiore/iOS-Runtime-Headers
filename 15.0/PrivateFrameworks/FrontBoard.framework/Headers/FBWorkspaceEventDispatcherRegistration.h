// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBWORKSPACEEVENTDISPATCHERREGISTRATION_H
#define FBWORKSPACEEVENTDISPATCHERREGISTRATION_H

@class BSSimpleAssertion, NSSet, NSString, RBSProcessHandle;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "FBWorkspaceIdentity.h"

@interface FBWorkspaceEventDispatcherRegistration : NSObject <BSInvalidatable>

 {
    BSSimpleAssertion *_underlyingAssertion;
    os_unfair_lock_s _lock;
    NSSet *_lock_remnants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBWorkspaceIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) RBSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly) Class superclass;


-(id)_initWithIdentity:(id)arg0 processHandle:(id)arg1 underlyingAssertion:(id)arg2 ;
-(id)consumeRemnantsPassingTest:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)noteHandshakeWithRemnants:(id)arg0 ;


@end


#endif