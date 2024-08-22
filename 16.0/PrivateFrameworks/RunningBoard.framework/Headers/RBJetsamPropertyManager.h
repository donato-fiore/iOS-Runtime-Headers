// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBJETSAMPROPERTYMANAGER_H
#define RBJETSAMPROPERTYMANAGER_H

@class NSDictionary, NSString;
@protocol RBJetsamPropertyManaging, RBEntitlementManaging;

#import <Foundation/Foundation.h>


@interface RBJetsamPropertyManager : NSObject <RBJetsamPropertyManaging>

 {
    id<RBEntitlementManaging> *_entitlementManager;
    NSDictionary *_xpcServices;
    id *_xpcServicesGlobal;
    NSDictionary *_xpcServicesSys;
    id *_xpcServicesSysGlobal;
    NSDictionary *_extensionPoints;
    id *_extensionPointsGlobal;
    NSDictionary *_applications;
    id *_applicationsGlobal;
    NSDictionary *_applicationsSys;
    id *_applicationsSysGlobal;
    NSDictionary *_daemons;
    id *_daemonsGlobal;
    NSDictionary *_angels;
    id *_angelsGlobal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)testJetsamProperties;
+(id)unmanagedJetsamProperties;
+(int)testTaskLimitForPid:(int)arg0 ;
-(id)initWithEntitlementManager:(id)arg0 ;
-(id)initWithEntitlementManager:(id)arg0 properties:(id)arg1 ;
-(id)jetsamPropertiesForProcess:(int)arg0 identity:(id)arg1 bundleProperties:(id)arg2 isPlatformBinary:(BOOL)arg3 ;


@end


#endif