// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUSERACTIVITYSERIALIZATION_H
#define CNUSERACTIVITYSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface CNUserActivitySerialization : NSObject



+(BOOL)isContactACompany:(id)arg0 ;
+(id)allAvailableServerUUIDsForContact:(id)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)distinctEmailAddressesForContact:(id)arg0 ;
+(id)distinctPhoneNumbersForContact:(id)arg0 ;
+(id)fullNameForContact:(id)arg0 ;
+(id)userActivityPayloadWithContacts:(id)arg0 shouldUnify:(BOOL)arg1 ;
+(id)userActivityTitleWithContacts:(id)arg0 ;


@end


#endif