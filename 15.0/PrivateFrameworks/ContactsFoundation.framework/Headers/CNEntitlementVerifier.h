// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(BOOL)auditToken:(struct ? )arg0 hasBooleanEntitlement:(id)arg1 error:(*id)arg2 ;
-(BOOL)auditToken:(struct ? )arg0 isFirstOrSecondPartyWithError:(*id)arg1 ;
-(BOOL)currentProcessHasBooleanEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)secTask:(struct __SecTask *)arg0 hasBooleanEntitlement:(id)arg1 error:(*id)arg2 ;


@end


#endif