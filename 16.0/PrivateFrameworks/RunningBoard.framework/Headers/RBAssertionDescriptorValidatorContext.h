// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBASSERTIONDESCRIPTORVALIDATORCONTEXT_H
#define RBASSERTIONDESCRIPTORVALIDATORCONTEXT_H

@class RBSAssertionDescriptor, NSString, RBSProcessIdentity, NSDictionary, RBSProcessIdentifier;
@protocol NSCopying, RBAssertionContextProviding, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging, RBEntitlementPossessing, RBBundleProperties, RBConcreteTargeting;

#import <Foundation/Foundation.h>

#import "RBAssertionAcquisitionContext.h"
#import "RBAssertionDescriptorValidator.h"
#import "RBProcess.h"
#import "RBProcessState.h"
#import "RBSystemState.h"

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying, RBAssertionContextProviding>

 {
    NSUInteger _ignoreRestrictions;
}


@property (retain, nonatomic) RBAssertionAcquisitionContext *acquisitionContext; // ivar: _acquisitionContext
@property (retain, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator; // ivar: _assertionDescriptionValidator
@property (retain, nonatomic) RBSAssertionDescriptor *assertionDescriptor; // ivar: _assertionDescriptor
@property (retain, nonatomic) NSObject<RBBundlePropertiesManaging> *bundlePropertiesManager; // ivar: _bundlePropertiesManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<RBDomainAttributeManaging> *domainAttributeManager; // ivar: _domainAttributeManager
@property (retain, nonatomic) NSObject<RBEntitlementManaging> *entitlementManager; // ivar: _entitlementManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreRestrictions;
@property (retain, nonatomic) NSObject<RBEntitlementPossessing> *originatorEntitlements; // ivar: _originatorEntitlements
@property (readonly, nonatomic) RBSProcessIdentity *originatorIdentity;
@property (retain, nonatomic) RBProcess *originatorProcess; // ivar: _originatorProcess
@property (readonly, nonatomic) NSObject<RBBundleProperties> *originatorProperties; // ivar: _originatorProperties
@property (retain, nonatomic) RBProcessState *originatorState; // ivar: _originatorState
@property (retain, nonatomic) NSDictionary *savedEndowments; // ivar: _savedEndowments
@property (readonly) Class superclass;
@property (readonly, nonatomic) RBSystemState *systemState; // ivar: _systemState
@property (retain, nonatomic) NSObject<RBConcreteTargeting> *target; // ivar: _target
@property (retain, nonatomic) NSObject<RBEntitlementPossessing> *targetEntitlements; // ivar: _targetEntitlements
@property (retain, nonatomic) RBSProcessIdentifier *targetIdentifier; // ivar: _targetIdentifier
@property (retain, nonatomic) RBSProcessIdentity *targetIdentity; // ivar: _targetIdentity
@property (readonly, nonatomic) BOOL targetIsSystem; // ivar: _targetIsSystem
@property (readonly, nonatomic) RBProcess *targetProcess; // ivar: _targetProcess
@property (readonly, nonatomic) NSObject<RBBundleProperties> *targetProperties; // ivar: _targetProperties
@property (retain, nonatomic) RBProcessState *targetState; // ivar: _targetState


+(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)popIgnoreRestrictions;
-(void)pushIgnoreRestrictions;


@end


#endif