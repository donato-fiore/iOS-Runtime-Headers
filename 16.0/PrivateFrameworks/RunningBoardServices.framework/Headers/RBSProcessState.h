// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPROCESSSTATE_H
#define RBSPROCESSSTATE_H

@class NSMutableDictionary, NSSet, NSString;
@protocol RBSXPCSecureCoding, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "RBSProcessHandle.h"

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying>

 {
    NSUInteger _codedValues;
    NSMutableDictionary *_codedStateCache;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSSet *assertions;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *codedState; // ivar: _codedState
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned char debugState; // ivar: _debugState
@property (readonly, nonatomic, getter=isDebugging) BOOL debugging;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmptyState) BOOL emptyState;
@property (copy, nonatomic) NSSet *endowmentNamespaces; // ivar: _endowmentNamespaces
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *legacyAssertions; // ivar: _legacyAssertions
@property (readonly, nonatomic, getter=isPreventedFromLaunching) BOOL preventedFromLaunching; // ivar: _preventedFromLaunching
@property (copy, nonatomic) NSSet *primitiveAssertions; // ivar: _primitiveAssertions
@property (readonly, nonatomic) RBSProcessHandle *process; // ivar: _process
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *tags; // ivar: _tags
@property (nonatomic) unsigned char taskState; // ivar: _taskState
@property (nonatomic) unsigned char terminationResistance; // ivar: _terminationResistance


+(BOOL)supportsRBSXPCSecureCoding;
+(id)stateWithProcess:(id)arg0 ;
+(id)statesForPredicate:(id)arg0 withDescriptor:(id)arg1 error:(*id)arg2 ;
+(id)statesForPredicate:(id)arg0 withDescriptor:(id)arg1 service:(id)arg2 error:(*id)arg3 ;
+(id)untrackedRunningStateforProcess:(id)arg0 ;
+(void)setActiveStateDescriptor:(id)arg0 ;
-(BOOL)isDifferentFromState:(id)arg0 significantly:(*BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithPreviousState:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif