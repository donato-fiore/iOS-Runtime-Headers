// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENTITLEMENTSVALIDATOR_H
#define LNENTITLEMENTSVALIDATOR_H


#import <Foundation/Foundation.h>


@interface LNEntitlementsValidator : NSObject



+(BOOL)validateEntitlement:(id)arg0 auditToken:(struct ? )arg1 validator:(id)arg2 ;
+(BOOL)validateEntitlement:(id)arg0 forCurrentTaskWithValidator:(id)arg1 ;
+(BOOL)validateEntitlement:(id)arg0 secTaskRef:(struct __SecTask *)arg1 validator:(id)arg2 ;


@end


#endif