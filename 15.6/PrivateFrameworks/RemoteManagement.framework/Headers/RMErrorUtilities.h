// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMERRORUTILITIES_H
#define RMERRORUTILITIES_H


#import <Foundation/Foundation.h>


@interface RMErrorUtilities : NSObject



+(id)_englishDescriptionFormatWithKey:(id)arg0 ;
+(id)_loadEnglishStringsByKey;
+(id)_localizedDescriptionFormatWithKey:(id)arg0 ;
+(id)_populateDescriptionInUserInfo:(id)arg0 descriptionKey:(id)arg1 ;
+(id)_populateDescriptionInUserInfo:(id)arg0 descriptionKey:(id)arg1 arguments:(char *)arg2 ;
+(id)createAccountAlreadyExistsErrorWithIdentifier:(id)arg0 ;
+(id)createAccountMissingErrorWithIdentifier:(id)arg0 ;
+(id)createAlreadyEnrolledInMDMv1Error;
+(id)createAssetCannotBeDownloadedErrorWithUnderlyingError:(id)arg0 ;
+(id)createAssetCannotProcessFileErrorWithUnderlyingError:(id)arg0 ;
+(id)createAssetContentTypeCannotBeVerifiedError;
+(id)createAssetHashCannotBeVerifiedError;
+(id)createAssetInvalidError:(id)arg0 ;
+(id)createAssetInvalidURLError:(id)arg0 ;
+(id)createAssetSizeCannotBeVerifiedError;
+(id)createBootstrapURINotFound;
+(id)createCMSDecodeErrorWithStatusCode:(int)arg0 reason:(id)arg1 ;
+(id)createCannotChangeValueErrorForPropertyNamed:(id)arg0 onObject:(id)arg1 ;
+(id)createConnectionNotEntitledWithName:(id)arg0 ;
+(id)createCouldNotInstallApp;
+(id)createCouldNotInstallAppWithUnderlyingError:(id)arg0 ;
+(id)createCouldNotParseURLErrorWithString:(id)arg0 ;
+(id)createDeclarationNotFoundErrorWithIdentifier:(id)arg0 ;
+(id)createDeviceIdentityNotFoundError;
+(id)createDisallowedStatusValueErrorWithKeyPath:(id)arg0 ;
+(id)createErrorWithCode:(NSInteger)arg0 userInfo:(id)arg1 descriptionKey:(id)arg2 ;
+(id)createFeatureDisabledError:(id)arg0 ;
+(id)createHTTPErrorWithStatusCode:(NSInteger)arg0 reason:(id)arg1 ;
+(id)createIncorrectPayloadTypeErrorWithExpectedType:(id)arg0 actualType:(id)arg1 ;
+(id)createInternalError;
+(id)createInternalErrorWithUnderlyingError:(id)arg0 ;
+(id)createInvalidPasscodeError;
+(id)createLicenseNotFound;
+(id)createMDMRequestFailed:(id)arg0 ;
+(id)createMDMRequestInvalid:(id)arg0 ;
+(id)createManagementSourceAlreadyExistsErrorWithAccountIdentifier:(id)arg0 ;
+(id)createManagementSourceAlreadyExistsErrorWithURI:(id)arg0 ;
+(id)createManagementSourceNotFoundErrorWithAccountIdentifier:(id)arg0 ;
+(id)createManagementSourceNotFoundErrorWithIdentifier:(id)arg0 ;
+(id)createMismatchedValuesErrorForPropertyNamed:(id)arg0 onObject:(id)arg1 expected:(id)arg2 actual:(id)arg3 ;
+(id)createMissingMandatoryPropertyErrorWithPropertyNamed:(id)arg0 onObject:(id)arg1 ;
+(id)createMissingReferralURLError;
+(id)createMissingServerResponseItemErrorWithName:(id)arg0 ;
+(id)createMobileKeyBagErrorWithCode:(NSInteger)arg0 ;
+(id)createMultipleErrorOrReturnTheSingleErrorWithErrors:(id)arg0 ;
+(id)createMultipleValidationErrorOrReturnTheSingleErrorWithErrors:(id)arg0 ;
+(id)createNotImplementedErrorForFeature:(id)arg0 ;
+(id)createOrganizationProofInvalidError;
+(id)createServiceDiscoveryInvalidUserIdentifierWithReason:(id)arg0 ;
+(id)createServiceDiscoveryWellKnownFailedWithReason:(id)arg0 ;
+(id)createServiceDiscoveryWellKnownInvalidWithReason:(id)arg0 ;
+(id)createStatePreventsSyncingError;
+(id)createTooManyDeviceManagementSourcesError;
+(id)createTooManyFailedAuthenticationsError;
+(id)createTooManyReferralsError;
+(id)createUnableToEvaluatePredicateErrorWithFormat:(id)arg0 reason:(id)arg1 ;
+(id)createUnableToParsePredicateErrorWithCustomOperator:(id)arg0 predicateFormat:(id)arg1 ;
+(id)createUnableToParsePredicateErrorWithFormat:(id)arg0 reason:(id)arg1 ;
+(id)createUnhandledContentTypeErrorWithContentType:(id)arg0 ;
+(id)createUnsupportedAuthenticationSchemeErrorWithScheme:(id)arg0 ;
+(id)createUnsupportedStatusValueErrorWithKeyPath:(id)arg0 ;
+(id)createUnverifiedDownloadHashErrorWithURL:(id)arg0 ;
+(id)createUnverifiedDownloadSizeErrorWithURL:(id)arg0 ;


@end


#endif