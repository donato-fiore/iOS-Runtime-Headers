// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYCONTROLLER_H
#define PKAPPLYCONTROLLER_H

@class PKPaymentWebService, NSMutableArray, PKPaymentService, NSArray, NSMutableSet, NSString, NSSet, DIVerificationSession, PKAssertion, PKAppleCardApplyExperiment, PKODIServiceProviderAssessment, PKAccount, NSURL, PKFamilyMember, PKFeatureApplication, PKPaymentInstallmentConfiguration, PKPaymentProvisioningController;
@protocol PKSetupFlowControllerProtocol, PKPaymentServiceDelegate, PKPaymentSetupViewControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKApplyController : NSObject <PKSetupFlowControllerProtocol, PKPaymentServiceDelegate>

 {
    PKPaymentWebService *_webService;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSMutableArray *_viewControllers;
    NSMutableArray *_pagesToSubmit;
    NSUInteger _viewControllerIndex;
    PKPaymentService *_paymentService;
    NSArray *_encryptionCertificates;
    NSMutableSet *_shownTermsIdentifiers;
    NSMutableSet *_processedTermsIdentifiers;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _endedApplyFlow;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    NSUInteger _documentUploadType;
    NSUInteger _requiredMetadataFields;
    NSSet *_actionIdentifiersRequiringAuthentication;
    DIVerificationSession *_idVerificationSession;
    PKAssertion *_notificationSupressionAssertion;
    NSUInteger _runningApplicationUpdates;
    PKAppleCardApplyExperiment *_applyExperiment;
    PKODIServiceProviderAssessment *_submitApplicationODISession;
    PKODIServiceProviderAssessment *_createApplicationODISession;
    PKODIServiceProviderAssessment *_applyTermsODISession;
    PKODIServiceProviderAssessment *_inflightODISession;
    BOOL _requiresODIAssessment;
}


@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *analyticsExistingAccountType; // ivar: _analyticsExistingAccountType
@property (readonly, nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (retain, nonatomic) NSURL *applyServiceURL; // ivar: _applyServiceURL
@property (readonly, nonatomic) NSInteger channel; // ivar: _channel
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didEncounterError; // ivar: _didEncounterError
@property (retain, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) PKFeatureApplication *featureApplication; // ivar: _featureApplication
@property (readonly, nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSUInteger featureProduct; // ivar: _featureProduct
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration
@property (retain, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController; // ivar: _parentFlowController
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier; // ivar: _preliminaryAssessmentIdentifier
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger updateUserInfoSubType; // ivar: _updateUserInfoSubType


+(id)localizationBundleForFeatureIdentifier:(NSUInteger)arg0 account:(id)arg1 ;
+(id)localizationBundleForFeatureIdentifier:(NSUInteger)arg0 account:(id)arg1 mainBundle:(id)arg2 ;
+(id)preferredLanguageForFeatureIdentifier:(NSUInteger)arg0 account:(id)arg1 ;
+(id)preferredLanguageForFeatureIdentifier:(NSUInteger)arg0 account:(id)arg1 mainBundle:(id)arg2 ;
-(id)_applyExperiment;
-(id)_applyExperimentDetails;
-(id)_defaultSubject;
-(id)_displayableErrorForError:(id)arg0 showDetailedErrorFlow:(BOOL)arg1 ;
-(id)_fieldsViewControllerForPage:(id)arg0 ;
-(id)_formatStringSuffixForItemType:(NSInteger)arg0 ;
-(id)_nextQueuedViewController;
-(id)applicationUpdatedAlertControllerWithHandler:(id)arg0 ;
-(id)cancelAlertWithContinueAction:(id)arg0 ;
-(id)initWithApplyConfiguration:(id)arg0 ;
-(id)loadHeroImageFromApplyExperiment;
-(id)localizationBundle;
-(id)preferredLanguage;
-(void)_acquireAssertion;
-(void)_deviceMetadataFields:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_getODIAssessmentForSession:(id)arg0 completion:(id)arg1 ;
-(void)_handleApplyResponse:(id)arg0 originalFeatureApplication:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_handleCoreIDVPage:(id)arg0 totalPageCount:(NSInteger)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_handleResponseError:(id)arg0 completion:(id)arg1 ;
-(void)_invalidateAssertion;
-(void)_invalidateIDVSession;
-(void)_performApplyWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_performAuthenticationWithCompletion:(id)arg0 ;
-(void)_performCoreIDVNextStepWithPage:(id)arg0 completion:(id)arg1 ;
-(void)_performCoreIDVShareWithCompletion:(id)arg0 ;
-(void)_performCreateWithCompletion:(id)arg0 ;
-(void)_performWithdrawWithCompletion:(id)arg0 ;
-(void)_prewarmODIAssessmentIfNecessary;
-(void)_queueAcceptedFlowWithPage:(id)arg0 ;
-(void)_queueActionFlowWithPage:(id)arg0 ;
-(void)_queueApplicationTermsFlow;
-(void)_queueApplicationVerificationWithNextStepInfo:(id)arg0 ;
-(void)_queueCannotResumeIDVFlow;
-(void)_queueCompleteFlowWithNextPage:(id)arg0 ;
-(void)_queueConfirmInfoFlowWithPage:(id)arg0 ;
-(void)_queueDeclinedFlowWithPage:(id)arg0 ;
-(void)_queueDocumentSubmissionWithNextStepInfo:(id)arg0 ;
-(void)_queueEmailRequiredErrorViewController;
-(void)_queueExpiredFlowWithPage:(id)arg0 ;
-(void)_queueFieldsFlowWithNextStepInfo:(id)arg0 ;
-(void)_queueGenericErrorViewController;
-(void)_queueGenericErrorViewControllerWithPage:(id)arg0 ;
-(void)_queueInfoFlowWithNextWithPage:(id)arg0 ;
-(void)_queueOfferFlowWithPage:(id)arg0 ;
-(void)_queuePassActivationFlowWithCompletion:(id)arg0 ;
-(void)_queueProgramConsentFlowWithPage:(id)arg0 ;
-(void)_queueStateReasonExplanationFlowWithPage:(id)arg0 ;
-(void)_queueTerminalStateFlowWithPage:(id)arg0 ;
-(void)_reset;
-(void)_sendODISessionFeedbackforInflightSessionIfNecessary;
-(void)_startCoreIDVSessionWithStepInfo:(id)arg0 completion:(id)arg1 ;
-(void)_startPaymentServiceListener;
-(void)_stopPaymentServiceListener;
-(void)_submitAllFieldPages:(id)arg0 completion:(id)arg1 ;
-(void)_submitCoreIDVDocumentsPage:(id)arg0 selectedDocument:(id)arg1 frontImageData:(id)arg2 backImageData:(id)arg3 completion:(id)arg4 ;
-(void)_submitCoreIDVFieldsPage:(id)arg0 completion:(id)arg1 ;
-(void)_submitDocumentPageWithCoreIDVImageUpload:(id)arg0 selectedDocument:(id)arg1 frontImageData:(id)arg2 backImageData:(id)arg3 completion:(id)arg4 ;
-(void)_submitDocumentsPage:(id)arg0 selectedDocument:(id)arg1 frontImageData:(id)arg2 backImageData:(id)arg3 completion:(id)arg4 ;
-(void)accountUserInvitationsWithCompletion:(id)arg0 ;
-(void)applyFlowDidAppear;
-(void)dealloc;
-(void)endApplyFlow;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationsWithCompletion:(id)arg0 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)reportAnalyticsDictionaryForPage:(id)arg0 pageTag:(id)arg1 additionalValues:(id)arg2 ;
-(void)reportAnalyticsDictionaryForPage:(id)arg0 subject:(id)arg1 pageTag:(id)arg2 additionalValues:(id)arg3 ;
-(void)reportAnalyticsDictionaryForPage:(id)arg0 subject:(id)arg1 pageTag:(id)arg2 error:(id)arg3 additionalValues:(id)arg4 ;
-(void)reportAnalyticsError:(id)arg0 page:(id)arg1 pageTag:(id)arg2 additionalValues:(id)arg3 ;
-(void)resendVerificationForPage:(id)arg0 completion:(id)arg1 ;
-(void)submitActionIdentifier:(id)arg0 termsIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)submitDocumentPage:(id)arg0 selectedDocument:(id)arg1 frontImage:(id)arg2 backImage:(id)arg3 completion:(id)arg4 ;
-(void)submitFieldsPage:(id)arg0 completion:(id)arg1 ;
-(void)submitVerificationPage:(id)arg0 verificationData:(id)arg1 skippedVerification:(BOOL)arg2 completion:(id)arg3 ;
-(void)termsAccepted:(BOOL)arg0 termsIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)termsDataForFeatureWithIdentifier:(id)arg0 format:(id)arg1 completion:(id)arg2 ;
-(void)termsDataForIdentifier:(id)arg0 format:(id)arg1 completion:(id)arg2 ;
-(void)termsShownWithIdentifier:(id)arg0 ;
-(void)withdrawApplicationWithCompletion:(id)arg0 ;


@end


#endif