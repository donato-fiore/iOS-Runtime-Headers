// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCCARDDAVACCOUNTPAYLOAD_H
#define MCCARDDAVACCOUNTPAYLOAD_H

@class NSString, NSArray, NSDictionary, NSNumber;
@protocol MCPerAccountVPNPayloadProtocol;


#import "MCPayload.h"

@interface MCCardDAVAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol>



@property (readonly, retain, nonatomic) NSString *VPNUUID; // ivar: _VPNUUID
@property (retain, nonatomic) NSString *acAccountIdentifier; // ivar: _acAccountIdentifier
@property (readonly, retain, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (copy, nonatomic) NSString *accountPersistentUUID; // ivar: _accountPersistentUUID
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules; // ivar: _communicationServiceRules
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) int port; // ivar: _port
@property (readonly, nonatomic) NSNumber *portNum; // ivar: _portNum
@property (readonly, retain, nonatomic) NSString *principalURL; // ivar: _principalURL
@property (readonly, nonatomic) BOOL useSSL; // ivar: _useSSL
@property (readonly, nonatomic) NSNumber *useSSLNum; // ivar: _useSSLNum
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)containsSensitiveUserInformation;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
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