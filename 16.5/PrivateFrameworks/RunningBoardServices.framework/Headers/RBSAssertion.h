// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSASSERTION_H
#define RBSASSERTION_H

@class NSHashTable, NSArray, NSString;
@protocol RBSServiceLocalProtocol;

#import <Foundation/Foundation.h>

#import "RBSAssertionDescriptor.h"
#import "RBSAssertionIdentifier.h"
#import "RBSTarget.h"

@interface RBSAssertion : NSObject {
    NSHashTable *_observers;
    id *_invalidationHandler;
    id *_warningHandler;
    RBSAssertionDescriptor *_descriptor;
    id<RBSServiceLocalProtocol> *_service;
    NSUInteger _state;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _dataLock;
}


@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly, nonatomic) RBSTarget *target;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)acquireWithError:(*id)arg0 ;
-(BOOL)invalidateSyncWithError:(*id)arg0 ;
-(BOOL)invalidateWithError:(*id)arg0 ;
-(id)_initWithDescriptor:(id)arg0 service:(id)arg1 ;
-(id)_initWithServerValidatedDescriptor:(id)arg0 ;
-(id)_initWithServerValidatedDescriptor:(id)arg0 service:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithExplanation:(id)arg0 target:(id)arg1 attributes:(id)arg2 ;
-(void)_serverInvalidateWithError:(id)arg0 ;
-(void)acquireWithInvalidationHandler:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)setExpirationWarningHandler:(id)arg0 ;
-(void)setInvalidationHandler:(id)arg0 ;


@end


#endif