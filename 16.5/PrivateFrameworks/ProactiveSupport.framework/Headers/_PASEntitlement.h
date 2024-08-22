// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASENTITLEMENT_H
#define _PASENTITLEMENT_H


#import <Foundation/Foundation.h>


@interface _PASEntitlement : NSObject



+(BOOL)_trueBooleanEntitlementCheckWithSecTask:(struct __SecTask *)arg0 entitlement:(id)arg1 logHandle:(id)arg2 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg0 logHandle:(id)arg1 ;
+(BOOL)taskWithAuditToken:(struct ? )arg0 hasTrueBooleanEntitlement:(id)arg1 logHandle:(id)arg2 ;


@end


#endif