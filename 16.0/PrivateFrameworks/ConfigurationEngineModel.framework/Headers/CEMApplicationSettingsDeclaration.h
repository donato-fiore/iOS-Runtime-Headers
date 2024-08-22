// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONSETTINGSDECLARATION_H
#define CEMAPPLICATIONSETTINGSDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowActivityContinuation; // ivar: _payloadAllowActivityContinuation
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdates; // ivar: _payloadAllowAutomaticAppUpdates
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdatesModification; // ivar: _payloadAllowAutomaticAppUpdatesModification
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmission; // ivar: _payloadAllowDiagnosticSubmission
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification; // ivar: _payloadAllowDiagnosticSubmissionModification
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust; // ivar: _payloadAllowEnterpriseAppTrust
@property (copy, nonatomic) NSNumber *payloadAppAnalytics; // ivar: _payloadAppAnalytics
@property (copy, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs; // ivar: _payloadAutonomousSingleAppModePermittedAppIDs
@property (copy, nonatomic) NSNumber *payloadDiagnosticSubmission; // ivar: _payloadDiagnosticSubmission
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withDiagnosticSubmission:(id)arg1 withAppAnalytics:(id)arg2 withAllowDiagnosticSubmission:(id)arg3 withAutonomousSingleAppModePermittedAppIDs:(id)arg4 withAllowActivityContinuation:(id)arg5 withAllowEnterpriseAppTrust:(id)arg6 withAllowDiagnosticSubmissionModification:(id)arg7 withAllowAutomaticAppUpdates:(id)arg8 withAllowAutomaticAppUpdatesModification:(id)arg9 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif