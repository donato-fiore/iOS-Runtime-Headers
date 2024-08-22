// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWSTEPCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPKPaymentProvisioningFlowControllerRequestContext.h"

@interface NPKPaymentProvisioningFlowStepContext : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsAddLater; // ivar: _allowsAddLater
@property (retain, nonatomic) NSString *backStepIdentifier; // ivar: _backStepIdentifier
@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext *requestContext; // ivar: _requestContext
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier


+(BOOL)supportsSecureCoding;
-(id)_baseFlowStepDescription;
-(id)chooseCredentialsStepContext;
-(id)chooseFlowStepContext;
-(id)chooseProductStepContext;
-(id)chooseTransitProductStepContext;
-(id)digitalIssuanceAmountStepContext;
-(id)digitalIssuancePaymentStepContext;
-(id)getIssuerApplicationAddRequestStepContext;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(id)localDeviceManualEntryProgressStepContext;
-(id)localDeviceManualEntryStepContext;
-(id)manualEntryStepContext;
-(id)moreInformationStepContext;
-(id)passcodeUpgradeStepContext;
-(id)productDisambiguationStepContext;
-(id)provisioningProgressStepContext;
-(id)provisioningResultStepContext;
-(id)readerModeEntryStepContext;
-(id)readerModeIngestionStepContext;
-(id)secondaryManualEntryStepContext;
-(id)termsAndConditionsStepContext;
-(id)verificationChannelsStepContext;
-(id)verificationCodeStepContext;
-(id)verificationFieldsStepContext;
-(id)welcomeStepContext;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif