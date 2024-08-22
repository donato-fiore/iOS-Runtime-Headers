// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUDITTOKENUTILITIES_H
#define CNAUDITTOKENUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNAuditTokenUtilities : NSObject



+(id)_bundleIdentifierFromEntitlementForAuditToken:(struct ? )arg0 ;
+(id)_bundleIdentifierFromInfoPlistForAuditToken:(struct ? )arg0 ;
+(id)bundleIdentifierForAuditToken:(id)arg0 ;
+(id)os_log;
+(id)processNameForAuditToken:(id)arg0 ;
+(int)processIdentifierForAuditToken:(id)arg0 ;


@end


#endif