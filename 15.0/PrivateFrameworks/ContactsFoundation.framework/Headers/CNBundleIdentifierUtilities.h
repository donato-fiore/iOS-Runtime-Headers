// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNBUNDLEIDENTIFIERUTILITIES_H
#define CNBUNDLEIDENTIFIERUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNBundleIdentifierUtilities : NSObject



+(id)bundleIdentifierForAuditToken:(struct ? *)arg0 ;
+(id)bundleIdentifierFromEntitlementForAuditToken:(struct ? *)arg0 ;
+(id)bundleIdentifierFromInfoPlistForAuditToken:(struct ? *)arg0 ;
+(id)os_log;


@end


#endif