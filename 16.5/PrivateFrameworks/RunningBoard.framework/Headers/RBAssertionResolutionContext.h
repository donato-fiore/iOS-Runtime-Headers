// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBASSERTIONRESOLUTIONCONTEXT_H
#define RBASSERTIONRESOLUTIONCONTEXT_H

@class NSMutableSet, NSMapTable, NSSet;
@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;

#import <Foundation/Foundation.h>

#import "RBProcessMap.h"
#import "RBAttributeContext.h"
#import "RBAssertionCollection.h"
#import "RBProcessIndex.h"
#import "RBSystemState.h"
#import "RBProcessStateChangeSet.h"

@interface RBAssertionResolutionContext : NSObject {
    NSMutableSet *_assertions;
    NSMutableSet *_targetsPendingResolution;
    RBProcessMap *_resolvedState;
    RBProcessMap *_originatorInheritances;
    RBAttributeContext *_attributeContext;
    RBAssertionCollection *_assertionCollection;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    id<RBDomainAttributeManaging> *_domainAttributeManager;
    id<RBBundlePropertiesManaging> *_bundlePropertiesManager;
    id<RBEntitlementManaging> *_entitlementManager;
    NSMapTable *_savedEndowments;
    RBSystemState *_systemState;
}


@property (readonly, nonatomic) RBProcessStateChangeSet *changeSet; // ivar: _changeSet
@property (readonly, nonatomic) NSSet *gainedStartTimeDefining; // ivar: _gainedStartTimeDefining
@property (readonly, nonatomic) NSSet *lostStartTimeDefining; // ivar: _lostStartTimeDefining
@property (readonly, nonatomic) RBSystemState *systemState;
@property (readonly, nonatomic) NSSet *touchedAssertions; // ivar: _touchedAssertions


-(id)_assertionGraphFromAssertion:(id)arg0 ;
-(id)_inheritancesForOriginator:(id)arg0 ;
-(id)_latestStateForIdentity:(id)arg0 ;
-(id)_originatorInheritancesForAssertion:(id)arg0 ;
-(void)_assertionGraphFromAssertion:(id)arg0 graph:(id)arg1 ;
-(void)_checkForSuspendableAssertionCycle:(id)arg0 newState:(id)arg1 ;
-(void)_finalizeStateChangeSet;
-(void)_resolveProcessStateForTarget:(id)arg0 ofType:(NSUInteger)arg1 viaAssertion:(id)arg2 ;
-(void)_resolveSystemState;
-(void)_suspendAssertionsForTarget:(id)arg0 ;
-(void)_suspendOrResumeAssertionsForTarget:(id)arg0 oldState:(id)arg1 newState:(id)arg2 ;
-(void)_updateStatesForAssertion:(id)arg0 ;


@end


#endif