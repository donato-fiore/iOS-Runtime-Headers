// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNENTITLEMENTVERIFIER_H
#define CNENTITLEMENTVERIFIER_H

@class NSString;
@protocol CNEntitlementVerification;

#import <Foundation/Foundation.h>


@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)auditToken:(struct ? )arg0 hasArrayWithStringValue:(id)arg1 forAnyEntitlement:(id)arg2 error:(*id)arg3 ;
-(BOOL)auditToken:(struct ? )arg0 hasBooleanEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)auditToken:(struct ? )arg0 isFirstOrSecondPartyWithError:(*id)arg1 ;
-(BOOL)currentProcessHasArrayWithStringValue:(id)arg0 forAnyEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)currentProcessHasBooleanEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)currentProcessIsFirstOrSecondPartyWithError:(*id)arg0 ;
-(BOOL)secTask:(struct __SecTask *)arg0 hasArrayWithStringValue:(id)arg1 forAnyEntitlement:(id)arg2 error:(*id)arg3 ;
-(BOOL)secTask:(struct __SecTask *)arg0 hasBooleanEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)secTask:(struct __SecTask *)arg0 isFirstOrSecondPartyWithError:(*id)arg1 ;
-(id)secTask:(struct __SecTask *)arg0 valuesForEntitlements:(id)arg1 error:(*id)arg2 ;
-(id)valuesForAuditToken:(struct ? )arg0 forEntitlements:(id)arg1 error:(*id)arg2 ;
-(id)valuesForCurrentProcessForEntitlements:(id)arg0 error:(*id)arg1 ;


@end


#endif