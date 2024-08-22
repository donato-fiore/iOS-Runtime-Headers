// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSREGISTRATIONACCOUNTSTATUSMETRIC_H
#define IDSREGISTRATIONACCOUNTSTATUSMETRIC_H

@class PBCodable<NSCopying>, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric, CUTRTCMetric, CUTAWDMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationAccountStatusMetric : NSObject <CUTCoreAnalyticsMetric, CUTRTCMetric, CUTAWDMetric>



@property (readonly, nonatomic) int accountRegistrationStatus; // ivar: _accountRegistrationStatus
@property (readonly, nonatomic) NSInteger accountSecurityLevel; // ivar: _accountSecurityLevel
@property (readonly, nonatomic) int accountType; // ivar: _accountType
@property (readonly, nonatomic) BOOL areAllAliasesSelected; // ivar: _areAllAliasesSelected
@property (readonly, nonatomic) BOOL areAllSelectedAliasesRegistered; // ivar: _areAllSelectedAliasesRegistered
@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL doesExist; // ivar: _doesExist
@property (readonly, nonatomic) BOOL doesMatchiCloudAccount; // ivar: _doesMatchiCloudAccount
@property (readonly, nonatomic) BOOL hasEverRegistered; // ivar: _hasEverRegistered
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isProdEnvironment; // ivar: _isProdEnvironment
@property (readonly, nonatomic) BOOL isUserDisabled; // ivar: _isUserDisabled
@property (readonly, nonatomic) BOOL isiCloudSignedIn; // ivar: _isiCloudSignedIn
@property (readonly, nonatomic) BOOL isiTunesSignedIn; // ivar: _isiTunesSignedIn
@property (readonly, nonatomic) NSInteger lastRegistrationFailureError; // ivar: _lastRegistrationFailureError
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger numberOfSelected; // ivar: _numberOfSelected
@property (readonly, nonatomic) NSInteger numberOfUnselectReasonAlertDenial; // ivar: _numberOfUnselectReasonAlertDenial
@property (readonly, nonatomic) NSInteger numberOfUnselectReasonBadAlias; // ivar: _numberOfUnselectReasonBadAlias
@property (readonly, nonatomic) NSInteger numberOfUnselectReasonClientCall; // ivar: _numberOfUnselectReasonClientCall
@property (readonly, nonatomic) NSInteger numberOfUnselectReasonUnknown; // ivar: _numberOfUnselectReasonUnknown
@property (readonly, nonatomic) NSInteger numberOfUnselectReasonUpdateInfo; // ivar: _numberOfUnselectReasonUpdateInfo
@property (readonly, nonatomic) NSInteger numberOfVetted; // ivar: _numberOfVetted
@property (readonly, nonatomic) NSInteger registrationError; // ivar: _registrationError
@property (readonly, nonatomic) int registrationErrorReason; // ivar: _registrationErrorReason
@property (readonly, nonatomic) NSInteger registrationStatus; // ivar: _registrationStatus
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeIntervalSinceLastRegistrationFailure; // ivar: _timeIntervalSinceLastRegistrationFailure
@property (readonly, nonatomic) CGFloat timeIntervalSinceLastRegistrationSuccess; // ivar: _timeIntervalSinceLastRegistrationSuccess


-(id)initWithAccountType:(int)arg0 serviceIdentifier:(id)arg1 doesExist:(BOOL)arg2 isEnabled:(BOOL)arg3 isUserDisabled:(BOOL)arg4 isiCloudSignedIn:(BOOL)arg5 doesMatchiCloudAccount:(BOOL)arg6 isiTunesSignedIn:(BOOL)arg7 registrationError:(NSInteger)arg8 registrationErrorReason:(int)arg9 registrationStatus:(NSInteger)arg10 accountRegistrationStatus:(int)arg11 hasEverRegistered:(BOOL)arg12 lastRegistrationFailureError:(NSInteger)arg13 timeIntervalSinceLastRegistrationFailure:(CGFloat)arg14 timeIntervalSinceLastRegistrationSuccess:(CGFloat)arg15 accountSecurityLevel:(NSInteger)arg16 areAllAliasesSelected:(BOOL)arg17 areAllSelectedAliasesRegistered:(BOOL)arg18 numberOfSelected:(NSInteger)arg19 numberOfVetted:(NSInteger)arg20 numberOfUnselectReasonUnknown:(NSInteger)arg21 numberOfUnselectReasonAlertDenial:(NSInteger)arg22 numberOfUnselectReasonClientCall:(NSInteger)arg23 numberOfUnselectReasonBadAlias:(NSInteger)arg24 numberOfUnselectReasonUpdateInfo:(NSInteger)arg25 isProdEnvironment:(BOOL)arg26 ;


@end


#endif