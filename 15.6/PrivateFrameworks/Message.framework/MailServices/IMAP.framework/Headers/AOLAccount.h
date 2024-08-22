// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AOLACCOUNT_H
#define AOLACCOUNT_H

@class NSString;
@protocol MFOAuth2TokenAuthProtocol;


#import "YahooAccount.h"

@interface AOLAccount : YahooAccount <MFOAuth2TokenAuthProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deliveryAccountUsesSSL;
+(id)accountTypeIdentifier;
+(id)deliveryAccountHostname;
+(id)displayedAccountTypeString;
+(id)emailAddressWithUsername:(id)arg0 ;
+(unsigned int)deliveryAccountPortNumber;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)URLForMessage:(id)arg0 ;
-(id)_defaultSpecialMailboxNameForType:(int)arg0 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg0 ;
-(id)iconString;
-(id)statisticsKind;


@end


#endif