// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCGMAILACCOUNTPAYLOAD_H
#define MCGMAILACCOUNTPAYLOAD_H

@class NSString, NSArray, NSDictionary;
@protocol MCPerAccountVPNPayloadProtocol;


#import "MCPayload.h"

@interface MCGmailAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol>



@property (readonly, retain, nonatomic) NSString *VPNUUID; // ivar: _VPNUUID
@property (retain, nonatomic) NSString *acAccountIdentifier; // ivar: _acAccountIdentifier
@property (readonly, retain, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (readonly, retain, nonatomic) NSString *accountName; // ivar: _accountName
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules; // ivar: _communicationServiceRules
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)mustInstallNonInteractively;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)verboseDescription;


@end


#endif