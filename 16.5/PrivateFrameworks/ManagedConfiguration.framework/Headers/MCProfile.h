// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCPROFILE_H
#define MCPROFILE_H

@class NSString, NSArray, NSDate, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCProfile : NSObject {
    int _trustQueueTrustLevel;
    BOOL _trustQueueTrustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerQueueSignerSummary;
    NSArray *_signerQueueSignerCertificates;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
}


@property (readonly, retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, retain, nonatomic) NSDate *earliestCertificateExpiryDate;
@property (nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (readonly, retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, retain, nonatomic) NSString *friendlyName;
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *installDate; // ivar: _installDate
@property (retain, nonatomic) NSDictionary *installOptions; // ivar: _installOptions
@property (readonly, nonatomic) NSInteger installType;
@property (readonly, retain, nonatomic) NSArray *installationWarnings;
@property (readonly, nonatomic) BOOL isInstalledForSystem;
@property (readonly, nonatomic) BOOL isInstalledForUser;
@property (readonly, nonatomic) BOOL isManagedByMDM;
@property (readonly, nonatomic) BOOL isManagedByProfileService;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isStub; // ivar: _isStub
@property (readonly, nonatomic) BOOL isSupervisionProfile;
@property (readonly, nonatomic) NSString *localizedConsentText; // ivar: _localizedConsentText
@property (readonly, retain, nonatomic) NSArray *localizedManagedPayloadSummaryByType;
@property (readonly, retain, nonatomic) NSArray *localizedPayloadSummaryByType;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _isLocked
@property (readonly, retain, nonatomic) NSArray *managedPayloads;
@property (readonly, nonatomic) NSString *managingProfileIdentifier;
@property (nonatomic) BOOL mustInstallNonInteractively; // ivar: _mustInstallNonInteractively
@property (readonly, nonatomic) BOOL needsReboot; // ivar: _needsReboot
@property (readonly, retain, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, retain, nonatomic) NSArray *payloads;
@property (readonly, retain, nonatomic) NSArray *payloadsContentInfo;
@property (readonly, retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (readonly, retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (readonly, retain, nonatomic) NSString *profileDataFileName;
@property (readonly, retain, nonatomic) NSString *profileDescription; // ivar: _profileDescription
@property (readonly, retain, nonatomic) NSString *profileIDHashFileName;
@property (readonly, nonatomic) NSDate *removalDate; // ivar: _removalDate
@property (retain, nonatomic) NSString *removalPasscode; // ivar: _removalPasscode
@property (readonly, nonatomic) BOOL shouldHaveFullSSLTrust;
@property (readonly, nonatomic) *__SecCertificate signerCertificate;
@property (retain, nonatomic) NSArray *signerCertificates;
@property (readonly, nonatomic) NSArray *signerCertificatesData;
@property (readonly, nonatomic) NSString *signerSummary;
@property (readonly, retain, nonatomic) NSString *stubFileName;
@property (readonly, nonatomic) NSUInteger targetDeviceType; // ivar: _targetDeviceType
@property (readonly, nonatomic) int trustLevel;
@property (readonly, retain, nonatomic) NSDate *unmodifiedExpiryDate;
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)checkString:(id)arg0 isOneOfStrings:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 errorString:(id)arg5 outError:(*id)arg6 ;
+(id)_malformedProfileError;
+(id)_unsupportedEnrollmentServiceProfileError;
+(id)_unsupportedProfileTypeError;
+(id)badFieldTypeErrorWithField:(id)arg0 ;
+(id)dataFromCMSEncodedData:(id)arg0 outSignerCertificates:(*id)arg1 ;
+(id)missingFieldErrorWithField:(id)arg0 ;
+(id)newProfileSignatureVersion;
+(id)profileDictionaryFromProfileData:(id)arg0 outSignerCerts:(*id)arg1 outError:(*id)arg2 ;
+(id)profileWithData:(id)arg0 fileName:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(*id)arg3 ;
+(id)profileWithData:(id)arg0 fileName:(id)arg1 outError:(*id)arg2 ;
+(id)profileWithData:(id)arg0 options:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(*id)arg4 ;
+(id)profileWithData:(id)arg0 options:(id)arg1 outError:(*id)arg2 ;
+(id)profileWithData:(id)arg0 outError:(*id)arg1 ;
+(id)profileWithDictionary:(id)arg0 options:(id)arg1 signerCerts:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(*id)arg5 ;
+(id)removeOptionalNonZeroLengthStringInDictionary:(id)arg0 key:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(NSInteger)arg3 invalidDataErrorString:(id)arg4 outError:(*id)arg5 ;
+(id)removeOptionalObjectInDictionary:(id)arg0 key:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(NSInteger)arg4 invalidDataErrorString:(id)arg5 outError:(*id)arg6 ;
+(id)removeRequiredNonZeroLengthStringInDictionary:(id)arg0 key:(id)arg1 errorDomain:(id)arg2 missingDataCode:(NSInteger)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(NSInteger)arg5 invalidDataErrorString:(id)arg6 outError:(*id)arg7 ;
+(id)removeRequiredObjectInDictionary:(id)arg0 key:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(NSInteger)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(NSInteger)arg6 invalidDataErrorString:(id)arg7 outError:(*id)arg8 ;
+(id)signerSummaryOfCertificate:(struct __SecCertificate *)arg0 ;
+(id)stringForDeviceType:(NSUInteger)arg0 ;
+(int)evaluateTrust:(struct __SecTrust *)arg0 ;
+(int)evaluateTrustOfCertificateChain:(id)arg0 signatureVersion:(id)arg1 ;
+(int)evaluateTrustOfCertificateChain:(id)arg0 signatureVersion:(id)arg1 outIsAllowedToInstallUnsupportedPayloads:(*BOOL)arg2 outIsAllowedToWriteDefaults:(*BOOL)arg3 ;
+(int)evaluateTrustOfCertificateChain:(id)arg0 signatureVersion:(id)arg1 outIsAllowedToInstallUnsupportedPayloads:(*BOOL)arg2 outIsAllowedToWriteDefaults:(*BOOL)arg3 outIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(*BOOL)arg4 ;
+(int)evaluateTrustOfCertificateChain:(id)arg0 signatureVersion:(id)arg1 outIsAllowedToWriteDefaults:(*BOOL)arg2 ;
-(BOOL)containsAnyPayloadOfClasses:(id)arg0 ;
-(BOOL)containsOnlyPayloadsOfClasses:(id)arg0 ;
-(BOOL)containsPayloadOfClass:(Class)arg0 ;
-(BOOL)doesSigningAllowReplacementWithProfile:(id)arg0 ;
-(BOOL)doesSigningAllowReplacementWithProfile:(id)arg0 useOriginalCheck:(BOOL)arg1 ;
-(BOOL)isProfileUIInstallationEffectivelyAllowed;
-(BOOL)isUserEnrollmentProfile;
-(BOOL)mayInstallWithOptions:(id)arg0 hasInteractionClient:(BOOL)arg1 outError:(*id)arg2 ;
-(BOOL)writeStubToDirectory:(id)arg0 ;
-(BOOL)writeStubToPath:(id)arg0 ;
-(NSUInteger)countOfPayloadsOfClass:(Class)arg0 ;
-(id)appAccessibilityParameters;
-(id)description;
-(id)hasRequiredAppIDForMDM;
-(id)initWithDictionary:(id)arg0 signerCerts:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(*id)arg3 ;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg0 ;
-(id)loggingID;
-(id)malformedProfileErrorWithError:(id)arg0 ;
-(id)payloadWithUUID:(id)arg0 ;
-(id)payloadsOfKindOfClass:(Class)arg0 ;
-(id)payloadsWithClass:(Class)arg0 ;
-(id)restrictionsWithHeuristicsAppliedOutError:(*id)arg0 ;
-(id)serializedDictionary;
-(id)signatureVersion;
-(id)stubDictionary;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg0 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg0 ;
-(id)verboseDescription;
-(struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg0 ;
-(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 ;
-(void)evaluateSignerTrust;
-(void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)arg0 ;
-(void)replacePayloadWithUUID:(id)arg0 withPayload:(id)arg1 ;


@end


#endif