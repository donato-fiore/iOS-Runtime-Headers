// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCEASACCOUNTPAYLOAD_H
#define MCEASACCOUNTPAYLOAD_H

@class NSNumber, NSString, NSData, NSDictionary;


#import "MCEmailAccountPayloadBase.h"

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
    NSNumber *_enableMailNum;
    NSNumber *_enableContactsNum;
    NSNumber *_enableCalendarsNum;
    NSNumber *_enableRemindersNum;
    NSNumber *_enableNotesNum;
    NSNumber *_enableMailUserOverridableNum;
    NSNumber *_enableContactsUserOverridableNum;
    NSNumber *_enableCalendarsUserOverridableNum;
    NSNumber *_enableRemindersUserOverridableNum;
    NSNumber *_enableNotesUserOverridableNum;
}


@property (retain, nonatomic) NSString *OAuthSignInURL; // ivar: _OAuthSignInURL
@property (retain, nonatomic) NSString *OAuthTokenRequestURL; // ivar: _OAuthTokenRequestURL
@property (retain, nonatomic) NSString *acAccountIdentifier; // ivar: _acAccountIdentifier
@property (readonly, retain, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (copy, nonatomic) NSString *accountPersistentUUID; // ivar: _accountPersistentUUID
@property (retain, nonatomic) NSData *certificatePersistentID; // ivar: _certificatePersistentID
@property (readonly, retain, nonatomic) NSString *certificateUUID; // ivar: _certificateUUID
@property (readonly, nonatomic) NSDictionary *communicationServiceRules; // ivar: _communicationServiceRules
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, retain, nonatomic) NSData *embeddedCertificate; // ivar: _embeddedCertificate
@property (readonly, retain, nonatomic) NSString *embeddedCertificateName; // ivar: _embeddedCertificateName
@property (copy, nonatomic) NSString *embeddedCertificatePassword; // ivar: _embeddedCertificatePassword
@property (readonly, nonatomic) BOOL enableCalendars;
@property (readonly, nonatomic) BOOL enableCalendarsUserOverridable;
@property (readonly, nonatomic) BOOL enableContacts;
@property (readonly, nonatomic) BOOL enableContactsUserOverridable;
@property (readonly, nonatomic) BOOL enableMail;
@property (readonly, nonatomic) BOOL enableMailUserOverridable;
@property (readonly, nonatomic) BOOL enableNotes;
@property (readonly, nonatomic) BOOL enableNotesUserOverridable;
@property (readonly, nonatomic) BOOL enableReminders;
@property (readonly, nonatomic) BOOL enableRemindersUserOverridable;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly, retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly, retain, nonatomic) NSNumber *mailNumberOfPastDaysToSync; // ivar: _mailNumberOfPastDaysToSync
@property (readonly, nonatomic) BOOL mustNotUseSynchronizableCredential;
@property (readonly, nonatomic) BOOL overridePreviousPassword; // ivar: _overridePreviousPassword
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL syncDefaultFoldersOnly; // ivar: _syncDefaultFoldersOnly
@property (readonly, nonatomic) NSNumber *syncDefaultFoldersOnlyNum; // ivar: _syncDefaultFoldersOnlyNum
@property (retain, nonatomic) NSNumber *useOAuth; // ivar: _useOAuth
@property (retain, nonatomic) NSNumber *useSSL; // ivar: _useSSL
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)containsSensitiveUserInformation;
-(id)calendarAccountIdentifiers;
-(id)contactsAccountIdentifiers;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)mailAccountIdentifiers;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif