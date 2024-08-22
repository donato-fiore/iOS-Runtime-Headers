// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBASSERTION_H
#define RBASSERTION_H

@class NSSet, NSDictionary, RBSProcessAssertionInfo, NSArray, NSString, RBSAssertionIdentifier;
@protocol RBStateCapturing, RBConcreteTargeting;

#import <Foundation/Foundation.h>

#import "RBProcess.h"
#import "RBAssertionTransientState.h"
#import "RBInheritanceCollection.h"
#import "RBAssertionIntransientState.h"
#import "RBProcessState.h"

@interface RBAssertion : NSObject <RBStateCapturing>

 {
    RBProcess *_targetProcessForAbstract;
    id *_targetState;
    RBAssertionTransientState *_transientState;
    NSSet *_originatorInheritances;
    NSDictionary *_lastConditions;
    RBSProcessAssertionInfo *_assertionInfo;
    os_unfair_lock_s _lock;
    unsigned char _invalidationReason;
    BOOL _suspended;
    BOOL _active;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL definesRelativeStartTime;
@property (readonly, copy) NSString *description; // ivar: _description
@property (readonly, nonatomic) NSUInteger endPolicy;
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly, nonatomic) BOOL hasDomainAttribute;
@property (readonly, nonatomic) BOOL hasHereditaryGrant;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, copy, nonatomic) RBAssertionIntransientState *intransientState; // ivar: _intransientState
@property (readonly, nonatomic, getter=isValid) BOOL invalid;
@property (readonly, nonatomic) BOOL invalidatesSynchronously;
@property (readonly, nonatomic) CGFloat invalidationDuration;
@property (nonatomic) unsigned char invalidationReason;
@property (readonly, nonatomic) NSUInteger legacyReason;
@property (readonly, nonatomic) RBProcess *originator; // ivar: _originator
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent; // ivar: _persistent
@property (retain, nonatomic) id *plugInHoldToken; // ivar: _plugInHoldToken
@property (readonly, copy, nonatomic) RBProcessState *processState;
@property (readonly, nonatomic) NSUInteger runningReason;
@property (readonly, nonatomic) NSSet *sourceEnvironments;
@property (readonly, nonatomic) NSUInteger startPolicy;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) BOOL suspendsOnOriginatorSuspension;
@property (readonly, copy, nonatomic) NSObject<RBConcreteTargeting> *target; // ivar: _target
@property (readonly, nonatomic) BOOL terminateTargetOnOriginatorExit;
@property (readonly, nonatomic) CGFloat warningDuration;


+(id)assertionWithDescriptor:(id)arg0 target:(id)arg1 originator:(id)arg2 context:(id)arg3 ;
+(id)assertionWithDescriptor:(id)arg0 target:(id)arg1 originator:(id)arg2 context:(id)arg3 creationTime:(CGFloat)arg4 ;
+(id)assertionWithIdentifier:(id)arg0 target:(id)arg1 explanation:(id)arg2 attributes:(id)arg3 originator:(id)arg4 context:(id)arg5 ;
-(BOOL)resolveStateWithContext:(id)arg0 ;
-(NSUInteger)maxCPUUsageViolationPolicyForRole:(unsigned char)arg0 ;
-(id)captureState;
-(id)updateProcessStateWithAttributeContext:(id)arg0 ;
-(void)activate;
-(void)applyToAssertionTransientState:(id)arg0 withAttributeContext:(id)arg1 ;
-(void)applyToProcessState:(id)arg0 withAttributeContext:(id)arg1 ;
-(void)applyToSystemState:(id)arg0 withAttributeContext:(id)arg1 ;
-(void)deactivate;
-(void)resume;
-(void)suspend;


@end


#endif