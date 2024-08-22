// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBASSERTIONSTATERESOLVER_H
#define RBASSERTIONSTATERESOLVER_H

@class NSMapTable;
@protocol RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging;

#import <Foundation/Foundation.h>

#import "RBAssertionCollection.h"
#import "RBProcessIndex.h"
#import "RBProcessMap.h"
#import "RBSystemState.h"

@interface RBAssertionStateResolver : NSObject

@property (retain, nonatomic) RBAssertionCollection *assertionCollection; // ivar: _assertionCollection
@property (retain, nonatomic) NSObject<RBBundlePropertiesManaging> *bundlePropertiesManager; // ivar: _bundlePropertiesManager
@property (retain, nonatomic) NSObject<RBDomainAttributeManaging> *domainAttributeManager; // ivar: _domainAttributeManager
@property (retain, nonatomic) NSObject<RBEntitlementManaging> *entitlementManager; // ivar: _entitlementManager
@property (retain, nonatomic) RBProcessIndex *processIndex; // ivar: _processIndex
@property (retain, nonatomic) NSMapTable *savedEndowments; // ivar: _savedEndowments
@property (retain, nonatomic) RBProcessMap *stateMap; // ivar: _stateMap
@property (retain, nonatomic) RBSystemState *systemState; // ivar: _systemState


-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg0 ;
-(id)resolveForAssertions:(id)arg0 ;


@end


#endif