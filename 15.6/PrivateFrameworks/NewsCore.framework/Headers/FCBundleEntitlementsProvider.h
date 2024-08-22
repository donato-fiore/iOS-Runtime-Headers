// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCBUNDLEENTITLEMENTSPROVIDER_H
#define FCBUNDLEENTITLEMENTSPROVIDER_H

@protocol FCBundleEntitlementsProviderType, FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

#import <Foundation/Foundation.h>

#import "FCEntitlementService.h"

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>



@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, nonatomic) FCEntitlementService *entitlementService; // ivar: _entitlementService
@property (retain, nonatomic) NSObject<FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider; // ivar: entitlementsOverrideProvider


-(id)initWithConfigurationManager:(id)arg0 entitlementService:(id)arg1 ;
-(void)_fetchEntitlementsWithIgnoreCache:(BOOL)arg0 configuration:(id)arg1 completion:(id)arg2 ;
-(void)fetchEntitlementsWithIgnoreCache:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif