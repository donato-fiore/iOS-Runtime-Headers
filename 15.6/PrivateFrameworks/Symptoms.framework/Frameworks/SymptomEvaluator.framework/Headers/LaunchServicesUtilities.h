// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LAUNCHSERVICESUTILITIES_H
#define LAUNCHSERVICESUTILITIES_H


#import <Foundation/Foundation.h>


@interface LaunchServicesUtilities : NSObject



+(id)appBundleIdentifierFromBundleRecord:(id)arg0 isWebBrowser:(*BOOL)arg1 ;
+(id)implicitlyAssumedIdentityEntitlementForBundleIdentifier:(id)arg0 ;
+(void)bundleIdentifier:(id)arg0 hasEntitlement:(id)arg1 ofClass:(Class)arg2 handler:(id)arg3 ;


@end


#endif