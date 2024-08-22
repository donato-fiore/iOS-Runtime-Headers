// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNENTITLEMENTVERIFIERTESTDOUBLE_H
#define CNENTITLEMENTVERIFIERTESTDOUBLE_H

@class NSMutableDictionary, NSString;
@protocol CNEntitlementVerification;

#import <Foundation/Foundation.h>


@interface CNEntitlementVerifierTestDouble : NSObject <CNEntitlementVerification>

 {
    NSMutableDictionary *_entitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyForEntitlement:(id)arg0 ;
+(id)keyForEntitlement:(id)arg0 auditToken:(struct ? )arg1 ;
-(BOOL)auditToken:(struct ? )arg0 hasBooleanEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)auditToken:(struct ? )arg0 isFirstOrSecondPartyWithError:(*id)arg1 ;
-(BOOL)currentProcessHasBooleanEntitlement:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)setAuditToken:(struct ? )arg0 hasBooleanValue:(BOOL)arg1 forEntitlement:(id)arg2 ;
-(void)setAuditToken:(struct ? )arg0 hasError:(id)arg1 forEntitlement:(id)arg2 ;
-(void)setAuditToken:(struct ? )arg0 isFirstOrSecondParty:(BOOL)arg1 ;
-(void)setAuditToken:(struct ? )arg0 isFirstOrSecondPartyError:(id)arg1 ;
-(void)setCurrentProcessHasBooleanValue:(BOOL)arg0 forEntitlement:(id)arg1 ;
-(void)setCurrentProcessHasError:(id)arg0 forEntitlement:(id)arg1 ;


@end


#endif