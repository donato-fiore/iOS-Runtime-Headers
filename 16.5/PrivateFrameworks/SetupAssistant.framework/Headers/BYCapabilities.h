// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYCAPABILITIES_H
#define BYCAPABILITIES_H

@class NSString;
@protocol BYCapabilities;

#import <Foundation/Foundation.h>


@interface BYCapabilities : NSObject <BYCapabilities>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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
-(BOOL)isCloudAnalyticsRestricted;
-(BOOL)isDeviceAnalyticsRestricted;
-(BOOL)isPearlEnrolled;
-(BOOL)isScreenTimeRestricted;
-(BOOL)isSiriRestricted;
-(BOOL)isTouchIDEnrolled;
-(BOOL)mgHasCellularData;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
-(BOOL)mgHasMesa;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasSiriCapability;
-(BOOL)supportsApplePay;
-(BOOL)supportsAppleWatch;
-(BOOL)supportsKappaDetection;
-(BOOL)supportsPearl;
-(BOOL)supportsPeriocularFaceID;
-(BOOL)supportsTouchID;
-(id)_paymentScreenRequirements;


@end


#endif