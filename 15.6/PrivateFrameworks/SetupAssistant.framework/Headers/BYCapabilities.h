// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYCAPABILITIES_H
#define BYCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface BYCapabilities : NSObject



+(id)sharedCapabilities;
-(BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg0 ;
-(BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg0 ;
-(BOOL)canShowAppleIDScreen;
-(BOOL)canShowFaceIDScreen;
-(BOOL)canShowPasscodeScreen;
-(BOOL)canShowPaymentScreen;
-(BOOL)canShowSiriScreen;
-(BOOL)canShowTouchIDScreen;
-(BOOL)hasEligibleEnrolledIdentityForPeriocularFaceIDEnrollment;
-(BOOL)isPearlEnrolled;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
-(BOOL)mgHasMesa;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasSiriCapability;
-(BOOL)supportsApplePay;
-(BOOL)supportsAppleWatch;
-(BOOL)supportsPearl;
-(BOOL)supportsPeriocularFaceID;
-(id)_paymentScreenRequirements;


@end


#endif