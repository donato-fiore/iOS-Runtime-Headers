// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSTEPCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext.h"
#import "NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext.h"

@interface NPKProtoStandalonePaymentProvisioningFlowStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowsAddLater; // ivar: _allowsAddLater
@property (retain, nonatomic) NSString *backStepIdentifier; // ivar: _backStepIdentifier
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *chooseCredentialsStepContext; // ivar: _chooseCredentialsStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *chooseFlowStepContext; // ivar: _chooseFlowStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *chooseProductStepContext; // ivar: _chooseProductStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *digitalIssuanceAmountStepContext; // ivar: _digitalIssuanceAmountStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *digitalIssuancePaymentStepContext; // ivar: _digitalIssuancePaymentStepContext
@property (nonatomic) BOOL hasAllowsAddLater;
@property (readonly, nonatomic) BOOL hasBackStepIdentifier;
@property (readonly, nonatomic) BOOL hasChooseCredentialsStepContext;
@property (readonly, nonatomic) BOOL hasChooseFlowStepContext;
@property (readonly, nonatomic) BOOL hasChooseProductStepContext;
@property (readonly, nonatomic) BOOL hasDigitalIssuanceAmountStepContext;
@property (readonly, nonatomic) BOOL hasDigitalIssuancePaymentStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationChannelsStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationCodeStepContext;
@property (readonly, nonatomic) BOOL hasIssuerVerificationFieldsStepContext;
@property (readonly, nonatomic) BOOL hasLocalDeviceManualEntryProgressStepContext;
@property (readonly, nonatomic) BOOL hasLocalDeviceManualEntryStepContext;
@property (readonly, nonatomic) BOOL hasManualEntryStepContext;
@property (readonly, nonatomic) BOOL hasMoreInformationStepContext;
@property (readonly, nonatomic) BOOL hasPasscodeUpgradeStepContext;
@property (readonly, nonatomic) BOOL hasProductDisambiguationStepContext;
@property (readonly, nonatomic) BOOL hasProvisioningProgressStepContext;
@property (readonly, nonatomic) BOOL hasProvisioningResultStepContext;
@property (readonly, nonatomic) BOOL hasReaderModeEntryStepContext;
@property (readonly, nonatomic) BOOL hasReaderModeIngestionStepContext;
@property (readonly, nonatomic) BOOL hasSecondaryManualEntryStepContext;
@property (readonly, nonatomic) BOOL hasTermsAndConditionsStepContext;
@property (readonly, nonatomic) BOOL hasWelcomeStepContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *issuerVerificationChannelsStepContext; // ivar: _issuerVerificationChannelsStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *issuerVerificationCodeStepContext; // ivar: _issuerVerificationCodeStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *issuerVerificationFieldsStepContext; // ivar: _issuerVerificationFieldsStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *localDeviceManualEntryProgressStepContext; // ivar: _localDeviceManualEntryProgressStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *localDeviceManualEntryStepContext; // ivar: _localDeviceManualEntryStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // ivar: _manualEntryStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *moreInformationStepContext; // ivar: _moreInformationStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowPasscodeUpgradeStepContext *passcodeUpgradeStepContext; // ivar: _passcodeUpgradeStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *productDisambiguationStepContext; // ivar: _productDisambiguationStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *provisioningProgressStepContext; // ivar: _provisioningProgressStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *provisioningResultStepContext; // ivar: _provisioningResultStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *readerModeEntryStepContext; // ivar: _readerModeEntryStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *readerModeIngestionStepContext; // ivar: _readerModeIngestionStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *secondaryManualEntryStepContext; // ivar: _secondaryManualEntryStepContext
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *termsAndConditionsStepContext; // ivar: _termsAndConditionsStepContext
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *welcomeStepContext; // ivar: _welcomeStepContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif