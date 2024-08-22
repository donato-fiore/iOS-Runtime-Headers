// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBWORKSPACEEVENTDISPATCHERSOURCE_H
#define FBWORKSPACEEVENTDISPATCHERSOURCE_H

@class BSSimpleAssertion, NSSet, NSString, RBSProcessHandle;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface FBWorkspaceEventDispatcherSource : NSObject <BSInvalidatable>

 {
    BSSimpleAssertion *_underlyingAssertion;
    os_unfair_lock_s _lock;
    NSSet *_lock_remnants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly) Class superclass;


-(id)_initWithProcessHandle:(id)arg0 underlyingAssertion:(id)arg1 ;
-(id)consumeRemnantsPassingTest:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)noteHandshakeWithRemnants:(id)arg0 ;


@end


#endif