// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCEMAILACCOUNTPAYLOAD_H
#define MCEMAILACCOUNTPAYLOAD_H

@class NSString, NSNumber;


#import "MCEmailAccountPayloadBase.h"

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase

@property (readonly, retain, nonatomic) NSString *emailAccountDescription; // ivar: _emailAccountDescription
@property (readonly, retain, nonatomic) NSString *emailAccountName; // ivar: _emailAccountName
@property (readonly, retain, nonatomic) NSString *emailAccountType; // ivar: _emailAccountType
@property (readonly, retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSString *incomingACAccountIdentifier; // ivar: _incomingACAccountIdentifier
@property (readonly, retain, nonatomic) NSString *incomingMailServerAuthentication; // ivar: _incomingMailServerAuthentication
@property (readonly, retain, nonatomic) NSString *incomingMailServerHostname; // ivar: _incomingMailServerHostname
@property (readonly, retain, nonatomic) NSString *incomingMailServerIMAPPathPrefix; // ivar: _incomingMailServerIMAPPathPrefix
@property (readonly, retain, nonatomic) NSNumber *incomingMailServerPortNumber; // ivar: _incomingMailServerPortNumber
@property (readonly, nonatomic) BOOL incomingMailServerUseSSL; // ivar: _incomingMailServerUseSSL
@property (readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum; // ivar: _incomingMailServerUseSSLNum
@property (readonly, retain, nonatomic) NSString *incomingMailServerUsername; // ivar: _incomingMailServerUsername
@property (readonly, retain, nonatomic) NSString *incomingPassword; // ivar: _incomingPassword
@property (retain, nonatomic) NSString *outgoingACAccountIdentifier; // ivar: _outgoingACAccountIdentifier
@property (readonly, retain, nonatomic) NSString *outgoingMailServerAuthentication; // ivar: _outgoingMailServerAuthentication
@property (readonly, retain, nonatomic) NSString *outgoingMailServerHostname; // ivar: _outgoingMailServerHostname
@property (readonly, retain, nonatomic) NSNumber *outgoingMailServerPortNumber; // ivar: _outgoingMailServerPortNumber
@property (readonly, nonatomic) BOOL outgoingMailServerUseSSL; // ivar: _outgoingMailServerUseSSL
@property (readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum; // ivar: _outgoingMailServerUseSSLNum
@property (readonly, retain, nonatomic) NSString *outgoingMailServerUsername; // ivar: _outgoingMailServerUsername
@property (readonly, retain, nonatomic) NSString *outgoingPassword; // ivar: _outgoingPassword
@property (readonly, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword; // ivar: _outgoingPasswordSameAsIncomingPassword
@property (readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum; // ivar: _outgoingPasswordSameAsIncomingPasswordNum


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)profileNameFromAccountTag:(id)arg0 ;
+(id)typeStrings;
-(BOOL)containsSensitiveUserInformation;
-(id)_authenticationTypeLocalizedString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)mailAccountIdentifiers;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif