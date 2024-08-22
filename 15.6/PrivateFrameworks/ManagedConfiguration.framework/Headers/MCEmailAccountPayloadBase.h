// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCEMAILACCOUNTPAYLOADBASE_H
#define MCEMAILACCOUNTPAYLOADBASE_H

@class NSNumber, NSData, NSString, NSArray;
@protocol MCPerAccountVPNPayloadProtocol;


#import "MCPayload.h"

@interface MCEmailAccountPayloadBase : MCPayload <MCPerAccountVPNPayloadProtocol>



@property (nonatomic) BOOL SMIMEEnabled; // ivar: _SMIMEEnabled
@property (retain, nonatomic) NSNumber *SMIMEEnabledNum; // ivar: _SMIMEEnabledNum
@property (nonatomic) BOOL SMIMEEncryptByDefaultUserOverrideable; // ivar: _SMIMEEncryptByDefaultUserOverrideable
@property (retain, nonatomic) NSNumber *SMIMEEncryptionEnabled; // ivar: _SMIMEEncryptionEnabled
@property (retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID; // ivar: _SMIMEEncryptionIdentityPersistentID
@property (retain, nonatomic) NSString *SMIMEEncryptionIdentityUUID; // ivar: _SMIMEEncryptionIdentityUUID
@property (nonatomic) BOOL SMIMEEncryptionIdentityUserOverrideable; // ivar: _SMIMEEncryptionIdentityUserOverrideable
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled; // ivar: _SMIMEPerMessageSwitchEnabled
@property (retain, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum; // ivar: _SMIMEPerMessageSwitchEnabledNum
@property (retain, nonatomic) NSNumber *SMIMESigningEnabled; // ivar: _SMIMESigningEnabled
@property (retain, nonatomic) NSData *SMIMESigningIdentityPersistentID; // ivar: _SMIMESigningIdentityPersistentID
@property (retain, nonatomic) NSString *SMIMESigningIdentityUUID; // ivar: _SMIMESigningIdentityUUID
@property (nonatomic) BOOL SMIMESigningIdentityUserOverrideable; // ivar: _SMIMESigningIdentityUserOverrideable
@property (nonatomic) BOOL SMIMESigningUserOverrideable; // ivar: _SMIMESigningUserOverrideable
@property (readonly, retain, nonatomic) NSString *VPNUUID; // ivar: _VPNUUID
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (nonatomic) BOOL isMailDropEnabled; // ivar: _isMailDropEnabled
@property (retain, nonatomic) NSNumber *isMailDropEnabledNum; // ivar: _isMailDropEnabledNum
@property (nonatomic) BOOL isRecentsSyncingDisabled; // ivar: _isRecentsSyncingDisabled
@property (retain, nonatomic) NSNumber *isRecentsSyncingDisabledNum; // ivar: _isRecentsSyncingDisabledNum
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (nonatomic) BOOL preventAppSheet; // ivar: _preventAppSheet
@property (retain, nonatomic) NSNumber *preventAppSheetNum; // ivar: _preventAppSheetNum
@property (nonatomic) BOOL preventMove; // ivar: _preventMove
@property (retain, nonatomic) NSNumber *preventMoveNum; // ivar: _preventMoveNum


-(BOOL)containsSensitiveUserInformation;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;
-(void)addSMIMEEncryptionPayloadKeysTo:(id)arg0 ;


@end


#endif