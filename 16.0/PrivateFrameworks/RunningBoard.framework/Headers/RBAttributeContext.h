// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBATTRIBUTECONTEXT_H
#define RBATTRIBUTECONTEXT_H

@class RBSAssertionIdentifier, NSString, NSDictionary, RBSProcessIdentity;
@protocol RBAssertionContextProviding, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging, RBEntitlementPossessing, RBBundleProperties, RBConcreteTargeting;

#import <Foundation/Foundation.h>

#import "RBAssertion.h"
#import "RBInheritanceCollection.h"
#import "RBProcessState.h"
#import "RBProcess.h"
#import "RBSystemState.h"

@interface RBAttributeContext : NSObject <RBAssertionContextProviding>

 {
    NSUInteger _activeDueToInheritedEndowmentCount;
}


@property (retain, nonatomic) RBAssertion *assertion; // ivar: _assertion
@property (readonly, nonatomic) RBSAssertionIdentifier *assertionID; // ivar: _assertionID
@property (retain, nonatomic) RBInheritanceCollection *availableInheritances; // ivar: _availableInheritances
@property (retain, nonatomic) NSObject<RBBundlePropertiesManaging> *bundlePropertiesManager; // ivar: _bundlePropertiesManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<RBDomainAttributeManaging> *domainAttributeManager; // ivar: _domainAttributeManager
@property (retain, nonatomic) NSObject<RBEntitlementManaging> *entitlementManager; // ivar: _entitlementManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RBProcessState *initialProcessState; // ivar: _initialProcessState
@property (readonly, nonatomic) BOOL isActiveDueToInheritedEndowment;
@property (readonly, nonatomic) NSObject<RBEntitlementPossessing> *originatorEntitlements; // ivar: _originatorEntitlements
@property (readonly, nonatomic) RBProcess *originatorProcess; // ivar: _originatorProcess
@property (readonly, nonatomic) NSObject<RBBundleProperties> *originatorProperties; // ivar: _originatorProperties
@property (retain, nonatomic) NSDictionary *savedEndowments; // ivar: _savedEndowments
@property (readonly) Class superclass;
@property (readonly, nonatomic) RBSystemState *systemState; // ivar: _systemState
@property (readonly, nonatomic) NSObject<RBConcreteTargeting> *target; // ivar: _target
@property (readonly, nonatomic) NSObject<RBEntitlementPossessing> *targetEntitlements; // ivar: _targetEntitlements
@property (readonly, nonatomic) RBSProcessIdentity *targetIdentity; // ivar: _targetIdentity
@property (readonly, nonatomic) BOOL targetIsSystem; // ivar: _targetIsSystem
@property (readonly, nonatomic) RBProcess *targetProcess; // ivar: _targetProcess
@property (readonly, nonatomic) NSObject<RBBundleProperties> *targetProperties; // ivar: _targetProperties


-(void)popActiveDueToInheritedEndowment;
-(void)pushActiveDueToInheritedEndowment;


@end


#endif