// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ELSENTITLEMENTUTILITIES_H
#define ELSENTITLEMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ELSEntitlementUtilities : NSObject



+(BOOL)auditToken:(struct ? *)arg0 hasEntitlement:(id)arg1 ;
+(BOOL)currentProcessHasEntitlement:(id)arg0 ;
+(id)entitlementMissingMessage;


@end


#endif