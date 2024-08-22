// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEHELPER_H
#define NPKPROTOSTANDALONEHELPER_H


#import <Foundation/Foundation.h>


@interface NPKProtoStandaloneHelper : NSObject



+(NSUInteger)toPKPaymentSetupFieldType:(int)arg0 ;
+(id)_convertProtoWelcomeStepContext:(id)arg0 requestContext:(id)arg1 ;
+(id)fromNPKProtoStandalonePaymentProvisioningFlowStepContext:(id)arg0 requestContext:(id)arg1 ;
+(id)sha1hash:(id)arg0 ;
+(id)toJsonString:(id)arg0 ;
+(id)toNPKProtoStandaloneCreditAccountCredential:(id)arg0 thumbnailSize:(BOOL)arg1 ;
+(id)toNPKProtoStandaloneError:(id)arg0 ;
+(id)toNPKProtoStandalonePass:(id)arg0 thumbnailSize:(BOOL)arg1 ;
+(id)toNPKProtoStandalonePaymentCredential:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentCredentialUnion:(id)arg0 withFlowIdentifier:(id)arg1 thumbnailSize:(BOOL)arg2 ;
+(id)toNPKProtoStandalonePaymentDigitalIssuanceMetadata:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentPass:(id)arg0 thumbnailSize:(BOOL)arg1 ;
+(id)toNPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentProvisioningFlowPickerItem:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentProvisioningFlowPickerSection:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentProvisioningFlowStepContext:(id)arg0 fromStep:(int)arg1 toStep:(int)arg2 ;
+(id)toNPKProtoStandalonePaymentProvisioningMethodMetadata:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentRemoteCredential:(id)arg0 thumbnailSize:(BOOL)arg1 ;
+(id)toNPKProtoStandalonePaymentSetupField:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentSetupMoreInfoItem:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentSetupProduct:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentSetupProductImageAssetURLs:(id)arg0 ;
+(id)toNPKProtoStandalonePaymentSetupProductPaymentOption:(id)arg0 ;
+(id)toNPKProtoStandaloneVerificationChannel:(id)arg0 ;
+(id)toPKPaymentSetupField:(id)arg0 ;
+(id)toStringValue:(id)arg0 ;
+(int)toNPKProtoStandalonePassType:(NSUInteger)arg0 ;
+(int)toNPKProtoStandalonePaymentApplicationState:(NSInteger)arg0 ;
+(int)toNPKProtoStandalonePaymentPassActivationState:(NSUInteger)arg0 ;
+(int)toNPKProtoStandalonePaymentSetupFieldType:(NSUInteger)arg0 ;
+(int)toNPKProtoStandaloneReaderModeIngestionState:(NSUInteger)arg0 ;
+(int)toNPKProtoStandaloneVerificationChannelType:(NSUInteger)arg0 ;
+(struct CGSize )passImageSize;
+(struct CGSize )passThumbnailImageSize;
+(void)_convertChooseCredentialsStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertChooseFlowStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertChooseProductStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertDigitalIssuanceAmountStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertDigitalIssuancePaymentStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertIssuerVerificationChannelsStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertIssuerVerificationCodeStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertIssuerVerificationFieldsStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertLocalDeviceManualEntry:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertLocalDeviceManualEntryProgress:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertManualEntryStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertMoreInformationStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertPasscodeUpgradeStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertProvisioningProgressStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertProvisioningResultStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertReaderModeEntryStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertReaderModeIngestionStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertSecondaryManualEntryStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertTermsAndConditionsStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)_convertWelcomeStepContext:(id)arg0 protoContext:(id)arg1 ;
+(void)setPassImageSize:(struct CGSize )arg0 ;
+(void)setPassThumbnailImageSize:(struct CGSize )arg0 ;


@end


#endif