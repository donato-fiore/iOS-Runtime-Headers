// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EAEMAILADDRESSLISTS_H
#define EAEMAILADDRESSLISTS_H


#import <Foundation/Foundation.h>


@interface EAEmailAddressLists : NSObject



+(id)addressDisplayStringWithMaxNumberOfAddresses:(NSUInteger)arg0 fromAddressList:(id)arg1 ;
+(id)addressListFromAddressString:(id)arg0 ;
+(id)addressListFromHeaderValue:(id)arg0 ;
+(id)addressStringFromAddressList:(id)arg0 ;
+(id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg0 forString:(id)arg1 ;
+(id)componentsSeparatedByCommaRespectingQuotesAndParensForString:(id)arg0 ;
+(id)displayNameFromAddressList:(id)arg0 ;
+(id)rawAddressListFromFullAddressList:(id)arg0 ;


@end


#endif