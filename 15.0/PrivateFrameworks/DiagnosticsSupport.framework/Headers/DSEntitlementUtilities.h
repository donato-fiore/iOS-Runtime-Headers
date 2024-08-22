// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSENTITLEMENTUTILITIES_H
#define DSENTITLEMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface DSEntitlementUtilities : NSObject



+(BOOL)auditToken:(struct ? *)arg0 hasEntitlement:(id)arg1 ;
+(BOOL)currentProcessHasEntitlement:(id)arg0 ;


@end


#endif