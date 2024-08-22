// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVENTITLEMENTUTILITIES_H
#define MSVENTITLEMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface MSVEntitlementUtilities : NSObject



+(BOOL)_checkEntitlement:(id)arg0 inGroup:(id)arg1 shouldLogForMissingEntitlement:(BOOL)arg2 ;
+(BOOL)hasBoolEntitlement:(id)arg0 ;
+(BOOL)hasBoolEntitlement:(id)arg0 shouldLogForMissingEntitlement:(BOOL)arg1 ;
+(BOOL)hasEntitlement:(id)arg0 inGroup:(id)arg1 ;
+(BOOL)hasEntitlement:(id)arg0 inGroup:(id)arg1 shouldLogForMissingEntitlement:(BOOL)arg2 ;
+(id)_checkArrayEntitlement:(id)arg0 group:(id)arg1 task:(struct __SecTask *)arg2 ;
+(id)_checkBooleanEntitlement:(id)arg0 task:(struct __SecTask *)arg1 ;
+(void)_logForMissingEntitlementWithResult:(id)arg0 ;


@end


#endif